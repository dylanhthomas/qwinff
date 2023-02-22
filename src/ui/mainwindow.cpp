/*  QWinFF - a qt4 gui frontend for ffmpeg
 *  Copyright (C) 2011-2013 Timothy Lin <lzh9102@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "convertlist.h"
#include "addtaskwizard.h"
#include "aboutffmpegdialog.h"
#include "optionsdialog.h"
#include "aboutdialog.h"
#include "updatedialog.h"
#include "services/paths.h"
#include "services/notification.h"
#include "converter/mediaconverter.h"
#include "converter/presets.h"
#include "services/updatechecker.h"
#include "services/constants.h"
#include "services/settingtimer.h"
#include "interactivecuttingdialog.h"
#include <QHBoxLayout>
#include <QToolButton>
#include <QMessageBox>
#include <QLabel>
#include <QFileDialog>
#include <QDesktopServices>
#include <QApplication>
#include <QSettings>
#include <QCloseEvent>
#include <QTimer>
#include <QSignalMapper>
#include <QPushButton>
#include <QDebug>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent, const QStringList& fileList) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_presets(new Presets(this)),
    m_list(new ConvertList(m_presets, this)),
    m_argv_input_files(fileList),
    m_elapsedTimeLabel(new QLabel(this)),
    m_timer(new QTimer(this)),
    m_update_checker(new UpdateChecker(this))
{
    ui->setupUi(this);    

    connect(m_list, SIGNAL(task_finished(int)),
            this, SLOT(task_finished(int)));
    connect(m_list, SIGNAL(all_tasks_finished()),
            this, SLOT(all_tasks_finished()));
    connect(m_list, SIGNAL(customContextMenuRequested(QPoint)),
            this, SLOT(slotListContextMenu(QPoint)));
    connect(m_list, SIGNAL(itemSelectionChanged()),
            this, SLOT(refresh_action_states()));
    connect(m_timer, SIGNAL(timeout()),
            this, SLOT(timerEvent()));
    connect(m_list, SIGNAL(started()),
            this, SLOT(conversion_started()));
    connect(m_list, SIGNAL(stopped()),
            this, SLOT(conversion_stopped()));
    connect(m_update_checker, SIGNAL(receivedResult(int)),
            this, SLOT(received_update_result(int)));
    connect(ui->btnStartConversion, SIGNAL(clicked()),
            this, SLOT(slotStartConversion()));

    setup_widgets();
    setup_menus();
    setup_toolbar(Constants::getSpaceSeparatedList("ToolbarEntries"));
    setup_statusbar();
    setup_appicon();

    load_settings();

    refresh_action_states();

    if (!check_execute_conditions()) {
        // Close the window immediately after it has started.
        QTimer::singleShot(0, this, SLOT(close()));
    } else {
        QTimer::singleShot(0, this, SLOT(window_ready()));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::window_ready()
{
    if (!m_argv_input_files.isEmpty()) {
        add_files(m_argv_input_files);
    }
    QSettings settings;
    if (settings.value("options/check_update_on_startup",
                       Constants::getBool("CheckUpdateOnStartup")).toBool()) {
        if (ask_for_update_permission())
            m_update_checker->checkUpdate();
    }
    refresh_status();
}

void MainWindow::task_finished(int /*exitcode*/)
{
//    if (exitcode == 0) { // succeed
//        QMessageBox::information(this, this->windowTitle()
//                                 , tr("Conversion finished successfully.")
//                                 , QMessageBox::Ok);
//    } else { // failed
//        QMessageBox::critical(this, this->windowTitle()
//                              , tr("Conversion failed.")
//                              , QMessageBox::Ok);
//    }
}

void MainWindow::all_tasks_finished()
{
    Notification::send(this, "QWinFF",
                       tr("All tasks have finished."), NotifyLevel::INFO);
    activateWindow(); // notify the user (make taskbar entry blink)
    refresh_action_states();

}

// Menu Events

void MainWindow::slotAddFiles()
{
    add_files();
}

void MainWindow::slotOptions()
{
    OptionsDialog dialog(this);
    dialog.exec();
}

void MainWindow::slotSetTools()
{
    OptionsDialog dialog(this);
    dialog.exec_tools();
}

void MainWindow::slotExit()
{
    this->close();
}

void MainWindow::slotStartConversion()
{
    if (m_list->isEmpty()) {
        QMessageBox::information(this, this->windowTitle(),
                                 tr("Nothing to convert."), QMessageBox::Ok);
    } else {
        m_list->start();
    }
}

void MainWindow::slotStopConversion()
{
    m_list->stop();
}

void MainWindow::slotSetConversionParameters()
{
    if (m_list->selectedCount() > 0) {
        m_list->editSelectedParameters();
    }
}

// Open the output folder of the file.
void MainWindow::slotOpenOutputFolder()
{
    const ConversionParameters *param = m_list->getCurrentIndexParameter();
    if (param) {
        QString folder_path = QFileInfo(param->destination).path();
        if (QFileInfo(folder_path).exists()) {
            QDesktopServices::openUrl(QUrl::fromLocalFile(folder_path));
        }
    }
}

void MainWindow::slotAboutQt()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::slotAboutFFmpeg()
{
    AboutFFmpegDialog(this).exec();
}

void MainWindow::slotAbout()
{
    AboutDialog(this).exec();
}

void MainWindow::slotShowUpdateDialog()
{
    if (ask_for_update_permission()) {
        UpdateChecker update_checker;
        UpdateDialog(this).exec(update_checker);
    }
}

void MainWindow::slotCut()
{
    m_list->cutSelectedTask();
}

void MainWindow::slotListContextMenu(QPoint /*pos*/)
{
    refresh_action_states();

    QMenu menu;
    menu.addAction(ui->actionOpenOutputFolder);
    menu.addSeparator();
    menu.addAction(ui->actionRemoveSelectedItems);
    menu.addSeparator();
    menu.addAction(ui->actionRetry);
    menu.addAction(ui->actionRetryAll);
    menu.addSeparator();
    menu.addAction(ui->actionShowErrorMessage);
    menu.addAction(ui->actionChangeOutputFilename);
    menu.addAction(ui->actionChangeOutputDirectory);
    menu.addAction(ui->actionSetParameters);
    menu.addAction(ui->actionCut);

    menu.exec(QCursor::pos());
}

// Events

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (m_list->isBusy()) {
        int reply = QMessageBox::warning(this, this->windowTitle(),
                             tr("Conversion is still in progress. Abort?"),
                             QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
        if (reply == QMessageBox::No) {
            event->ignore();
            return;
        }
    }

    m_list->stop();

    save_settings();
}

void MainWindow::timerEvent()
{
    refresh_status();
}

void MainWindow::conversion_started()
{
    m_elapsedTimeLabel->clear();
    m_timer->start(1000);
    refresh_status();
    refresh_action_states();
}

void MainWindow::conversion_stopped()
{
    m_timer->stop();
    refresh_status();
    refresh_action_states();
}

void MainWindow::received_update_result(int status)
{
    if (status == UpdateChecker::UpdateFound) {
        QSettings settings;
        SettingTimer timer("mainwindow/last_remind_update_time");
        const int seconds_per_day = 86400;
        const unsigned int prev_update_version =
                settings.value("mainwindow/last_remind_update_version").toUInt();
        const unsigned int new_update_version = m_update_checker->versionId();
        const bool timeout = !timer.isValid()
                || timer.elapsedSeconds() > seconds_per_day;
        const bool is_different_version =
                new_update_version != prev_update_version;

        // Show update dialog only if the update dialog has not been shown
        // for a certain period or the version is different.
        if (timeout || is_different_version) {
            UpdateDialog(this).exec(*m_update_checker);
            timer.restart();
            settings.setValue("mainwindow/last_remind_update_version",
                              new_update_version);
        }
    }
}

// Private Methods

/* Check if all execute conditions are met.
   This function should return true if all the conditions are met
   and return false if any of the conditions fails.
*/
bool MainWindow::check_execute_conditions()
{
    QString errmsg;

    // check external programs
    if (!MediaConverter::checkExternalPrograms(errmsg)) {
        QMessageBox::critical(this, this->windowTitle(), errmsg);
#ifdef TOOLS_IN_DATA_PATH
        return false; // fatal: ffmpeg should be in the data path but doesn't exist
#else
        QTimer::singleShot(0, this, SLOT(slotSetTools()));
#endif
    }
    // load presets
    if (!load_presets())
        return false;

    return true;
}

// We should respect the user and ask before connecting to the Internet to
// check for updates.
// If the user says yes, remember the decision and don't ask next time.
// If the user says no, disable checking for updates on startup.
bool MainWindow::ask_for_update_permission()
{
    const char *setting_key = "update_permission";
    QSettings settings;
    bool permitted = settings.value(setting_key, false).toBool();
    if (permitted) return true;

    QString msg = tr("This program is going to check for updates online. "
                     "Do you allow this program to use the Internet "
                     "to check for updates?");

    int reply = QMessageBox::information(this,
                                          windowTitle(),
                                          msg,
                                          QMessageBox::Yes,
                                          QMessageBox::No);

    if (reply == QMessageBox::Yes) { // permitted
        settings.setValue(setting_key, true); // don't ask next time
        return true;
    } else { // rejected
        // disable auto update because the user probably doesn't like it
        settings.setValue("options/check_update_on_startup", false);
        return false;
    }
}

// Popup wizard to add tasks.
void MainWindow::add_files()
{
    AddTaskWizard wizard(m_presets, this);

    if (wizard.exec_openfile() == QDialog::Accepted) {
        // Add all input files to the list.
        const QList<ConversionParameters> &paramList = wizard.getConversionParameters();
        m_list->addTasks(paramList);
    }
}

void MainWindow::add_files(const QStringList &fileList)
{
    AddTaskWizard wizard(m_presets, this);

    if (wizard.exec(fileList) == QDialog::Accepted) {
        // Add all input files to the list.
        const QList<ConversionParameters> &paramList = wizard.getConversionParameters();
        m_list->addTasks(paramList);
    }
}

void MainWindow::setup_widgets()
{
    // list
    ui->layoutListPlaceholder->addWidget(m_list);
    m_list->adjustSize();
    m_list->setContextMenuPolicy(Qt::CustomContextMenu);

    ui->lblTime->clear();
}

void MainWindow::setup_menus()
{
    /* === Menu Events === */

    // File
    connect(ui->actionAddFiles, SIGNAL(triggered()),
            this, SLOT(slotAddFiles()));
    connect(ui->actionOptions, SIGNAL(triggered()),
            this, SLOT(slotOptions()));
    connect(ui->actionExit, SIGNAL(triggered()),
            this, SLOT(slotExit()));

    // Edit
    connect(ui->menuEdit, SIGNAL(aboutToShow()),
            this, SLOT(refresh_action_states()));
    connect(ui->actionRemoveSelectedItems, SIGNAL(triggered()),
            m_list, SLOT(removeSelectedItems()));
    connect(ui->actionRemoveCompletedItems, SIGNAL(triggered()),
            m_list, SLOT(removeCompletedItems()));
    connect(ui->actionClearList, SIGNAL(triggered()),
            m_list, SLOT(clear()));
    connect(ui->actionSetParameters, SIGNAL(triggered()),
            this, SLOT(slotSetConversionParameters()));
    connect(ui->actionOpenOutputFolder, SIGNAL(triggered()),
            this, SLOT(slotOpenOutputFolder()));
    connect(ui->actionChangeOutputFilename, SIGNAL(triggered()),
            m_list, SLOT(changeSelectedOutputFile()));
    connect(ui->actionChangeOutputDirectory, SIGNAL(triggered()),
            m_list, SLOT(changeSelectedOutputDirectory()));
    connect(ui->actionShowErrorMessage, SIGNAL(triggered()),
            m_list, SLOT(showErrorMessage()));
    connect(ui->actionCut, SIGNAL(triggered()), SLOT(slotCut()));
    ui->actionCut->setVisible(InteractiveCuttingDialog::available());

    // Convert
    connect(ui->menuConvert, SIGNAL(aboutToShow()),
            this, SLOT(refresh_action_states()));
    connect(ui->actionStartConversion, SIGNAL(triggered()),
            this, SLOT(slotStartConversion()));
    connect(ui->actionStopConversion, SIGNAL(triggered()),
            this, SLOT(slotStopConversion()));
    connect(ui->actionRetry, SIGNAL(triggered()),
            m_list, SLOT(retrySelectedItems()));
    connect(ui->actionRetry, SIGNAL(triggered()),
            this, SLOT(refresh_action_states()));
    connect(ui->actionRetryAll, SIGNAL(triggered()),
            m_list, SLOT(retryAll()));
    connect(ui->actionRetryAll, SIGNAL(triggered()),
            this, SLOT(refresh_action_states()));

    // About
    connect(ui->actionAboutQt, SIGNAL(triggered()),
            this, SLOT(slotAboutQt()));
    connect(ui->actionAboutFFmpeg, SIGNAL(triggered()),
            this, SLOT(slotAboutFFmpeg()));
    connect(ui->actionAbout, SIGNAL(triggered()),
            this, SLOT(slotAbout()));
    connect(ui->actionCheckUpdate, SIGNAL(triggered()),
            this, SLOT(slotShowUpdateDialog()));
}

void MainWindow::setup_toolbar(const QStringList &entries)
{
    // construct a table of available actions
    // map action name to action pointer
    QMap<QString, QAction*> toolbar_table;
#define ADD_ACTION(name) toolbar_table[QString(#name).toUpper()] = ui->action ## name
    ADD_ACTION(AddFiles);
    ADD_ACTION(Options);
    ADD_ACTION(Exit);
    ADD_ACTION(RemoveSelectedItems);
    ADD_ACTION(RemoveCompletedItems);
    ADD_ACTION(ClearList);
    ADD_ACTION(OpenOutputFolder);
    ADD_ACTION(SetParameters);
    ADD_ACTION(ChangeOutputFilename);
    ADD_ACTION(ChangeOutputDirectory); // TODO: rename to "folder"
    ADD_ACTION(ShowErrorMessage);
    ADD_ACTION(StartConversion);
    ADD_ACTION(StopConversion);
    ADD_ACTION(Retry);
    ADD_ACTION(RetryAll);
    ADD_ACTION(AboutQt);
    ADD_ACTION(AboutFFmpeg);
    ADD_ACTION(About);
    ADD_ACTION(CheckUpdate);

    for (int i=0; i<entries.size(); i++) {
        QString entry = entries[i].toUpper(); // case-insensitive compare
        if (entry == "|") // separator
            ui->toolBar->addSeparator();
        else if (toolbar_table.contains(entry))
            ui->toolBar->addAction(toolbar_table[entry]);
    }
}

void MainWindow::setup_statusbar()
{
    ui->statusBar->addPermanentWidget(m_elapsedTimeLabel);
}

// Fill window icon with multiple sizes of images.
void MainWindow::setup_appicon()
{
    QIcon icon;
    QDir iconDir = QDir(":/app/icons/");
    QStringList fileList = iconDir.entryList();
    QRegExp pattern("^qwinff_[0-9]+x[0-9]+\\.png$");
    foreach (QString file, fileList) {
        if (pattern.indexIn(file) >= 0) {
            icon.addPixmap(QPixmap(iconDir.absoluteFilePath(file)));
        }
    }
    setWindowIcon(icon);
    ui->actionAbout->setIcon(icon);
}

bool MainWindow::load_presets()
{
    // The default preset file is located in <datapath>/presets.xml
    QString default_preset_file = QDir(Paths::dataPath()).absoluteFilePath("presets.xml");

    QString local_preset_file;
    if (!Constants::getBool("Portable")) { // non-portable app
        // rename local preset file created by older versions of qwinff
        // operation: mv ~/.qwinff/presets.xml ~/.qwinff/presets.xml.old
        QString local_preset_file_old = QDir(QDir::homePath()).absoluteFilePath(".qwinff/presets.xml");
        if (QFile(local_preset_file_old).exists()) {
            QFile::remove(local_preset_file_old + ".old");
            if (QFile::rename(local_preset_file_old, local_preset_file_old + ".old")) {
                qDebug() << local_preset_file_old + " is no longer used, "
                            "rename to " + local_preset_file_old + ".old";
            }
        }

        // use global preset temporarily
        local_preset_file = default_preset_file;
    } else {
        // portable app
        local_preset_file = default_preset_file;
    }

    QSettings settings;
    bool removeUnavailableCodecs = settings.value("options/hideformats", true).toBool();
    // Load the preset file from the user's home directory
    // The presets are loaded once and shared between objects
    // that need the information.
    if (!m_presets->readFromFile(local_preset_file, removeUnavailableCodecs)) {
        QMessageBox::critical(this, this->windowTitle(),
                              tr("Failed to load preset file. "
                                 "The application will quit now."));
        return false;
    }
    return true;
}

// Hide unused actions
void MainWindow::refresh_action_states()
{
    int selected_file_count = m_list->selectedCount();

    // Hide actionSetParameters if no item in m_list is selected.
    bool hide_SetParameters = (selected_file_count == 0);

    // Hide actionStartConversion if the conversion is in progress.
    bool hide_StartConversion = m_list->isBusy();

    // Hide actionStopConversion if nothing is being converted.
    bool hide_StopConversion = !m_list->isBusy();

    // Show actionOpenOutputFolder only if 1 file is selected.
    bool hide_OpenFolder = (selected_file_count <= 0);

    // Hide actionRemoveSelectedItems if no file is selected.
    bool hide_RemoveSelectedItems = (selected_file_count == 0);

    bool hide_Retry = (selected_file_count == 0);
    bool hide_RetryAll = (m_list->isEmpty());

    bool hide_ClearList = (m_list->isEmpty());

    bool hide_ChangeOutputFilename = m_list->selectedCount() != 1;
    bool hide_ChangeOutputDirectory = m_list->selectedCount() <= 0;


    /* Show actionShowErrorMessage if and only if one task is selected
       and the state of the selected task is FAILED
     */
    bool hide_ShowErrorMessage = (selected_file_count != 1
                                  || !m_list->selectedTaskFailed());

    ui->actionSetParameters->setDisabled(hide_SetParameters);
    ui->actionStartConversion->setDisabled(hide_StartConversion);
    ui->actionStopConversion->setDisabled(hide_StopConversion);
    ui->actionOpenOutputFolder->setDisabled(hide_OpenFolder);
    ui->actionRemoveSelectedItems->setDisabled(hide_RemoveSelectedItems);
    ui->actionRetry->setDisabled(hide_Retry);
    ui->actionRetryAll->setDisabled(hide_RetryAll);
    ui->actionClearList->setDisabled(hide_ClearList);
    ui->actionChangeOutputFilename->setDisabled(hide_ChangeOutputFilename);
    ui->actionChangeOutputDirectory->setDisabled(hide_ChangeOutputDirectory);
    ui->actionShowErrorMessage->setDisabled(hide_ShowErrorMessage);
    ui->actionCut->setEnabled(selected_file_count == 1); // cut only 1 file at a time
}

void MainWindow::load_settings()
{
    QSettings settings;
    restoreGeometry(settings.value("mainwindow/geometry").toByteArray());
    restoreState(settings.value("mainwindow/state").toByteArray());
}

void MainWindow::save_settings()
{
    QSettings settings;
    settings.setValue("mainwindow/geometry", saveGeometry());
    settings.setValue("mainwindow/state", saveState());
}

void MainWindow::refresh_status()
{
    refresh_statusbar();
    refresh_titlebar();
}

void MainWindow::refresh_statusbar()
{
    if (m_list->isBusy()) {
        int total_seconds = m_list->elapsedTime() / 1000;
        int hours = total_seconds / 3600;
        int minutes = (total_seconds / 60) % 60;
        int seconds = total_seconds % 60;

        QString timeinfo = tr("Elapsed Time: %1 h %2 m %3 s")
                .arg(hours).arg(minutes).arg(seconds);
        //m_elapsedTimeLabel->setText(timeinfo);
        ui->lblTime->setText(timeinfo);
    } else {
        //m_elapsedTimeLabel->clear();
        //ui->lblTime->clear();
    }
}

void MainWindow::refresh_titlebar()
{
    const int task_count = m_list->count();
    const int finished_task_count = m_list->finishedCount();
    if (finished_task_count < task_count && m_list->isBusy()) {
        //: Converting the %1-th file in %2 files. %2 is the number of files.
        setWindowTitle(tr("Converting %1/%2")
                       .arg(finished_task_count+1).arg(task_count));
    } else {
        setWindowTitle(tr("QWinFF"));
    }
}
