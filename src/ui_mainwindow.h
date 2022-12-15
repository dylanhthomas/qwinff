/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddFiles;
    QAction *actionExit;
    QAction *actionStartConversion;
    QAction *actionStopConversion;
    QAction *actionSetParameters;
    QAction *actionAboutQt;
    QAction *actionOpenOutputFolder;
    QAction *actionAboutFFmpeg;
    QAction *actionRemoveSelectedItems;
    QAction *actionRemoveCompletedItems;
    QAction *actionClearList;
    QAction *actionRetry;
    QAction *actionRetryAll;
    QAction *actionOptions;
    QAction *actionAbout;
    QAction *actionChangeOutputFilename;
    QAction *actionChangeOutputDirectory;
    QAction *actionShowErrorMessage;
    QAction *actionCheckUpdate;
    QAction *actionCut;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layoutListPlaceholder;
    QHBoxLayout *horizontalLayout;
    QLabel *lblTime;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnStartConversion;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuConvert;
    QMenu *menuAbout;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(491, 378);
        actionAddFiles = new QAction(MainWindow);
        actionAddFiles->setObjectName(QString::fromUtf8("actionAddFiles"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddFiles->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionStartConversion = new QAction(MainWindow);
        actionStartConversion->setObjectName(QString::fromUtf8("actionStartConversion"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/actions/icons/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartConversion->setIcon(icon2);
        actionStopConversion = new QAction(MainWindow);
        actionStopConversion->setObjectName(QString::fromUtf8("actionStopConversion"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/actions/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStopConversion->setIcon(icon3);
        actionSetParameters = new QAction(MainWindow);
        actionSetParameters->setObjectName(QString::fromUtf8("actionSetParameters"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/actions/icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetParameters->setIcon(icon4);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app/icons/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon5);
        actionOpenOutputFolder = new QAction(MainWindow);
        actionOpenOutputFolder->setObjectName(QString::fromUtf8("actionOpenOutputFolder"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/actions/icons/open_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenOutputFolder->setIcon(icon6);
        actionAboutFFmpeg = new QAction(MainWindow);
        actionAboutFFmpeg->setObjectName(QString::fromUtf8("actionAboutFFmpeg"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/app/icons/ffmpeg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutFFmpeg->setIcon(icon7);
        actionRemoveSelectedItems = new QAction(MainWindow);
        actionRemoveSelectedItems->setObjectName(QString::fromUtf8("actionRemoveSelectedItems"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/actions/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveSelectedItems->setIcon(icon8);
        actionRemoveCompletedItems = new QAction(MainWindow);
        actionRemoveCompletedItems->setObjectName(QString::fromUtf8("actionRemoveCompletedItems"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/actions/icons/remove_completed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveCompletedItems->setIcon(icon9);
        actionClearList = new QAction(MainWindow);
        actionClearList->setObjectName(QString::fromUtf8("actionClearList"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/actions/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearList->setIcon(icon10);
        actionRetry = new QAction(MainWindow);
        actionRetry->setObjectName(QString::fromUtf8("actionRetry"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/actions/icons/retry.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRetry->setIcon(icon11);
        actionRetryAll = new QAction(MainWindow);
        actionRetryAll->setObjectName(QString::fromUtf8("actionRetryAll"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/actions/icons/retry_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRetryAll->setIcon(icon12);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/actions/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon13);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionChangeOutputFilename = new QAction(MainWindow);
        actionChangeOutputFilename->setObjectName(QString::fromUtf8("actionChangeOutputFilename"));
        actionChangeOutputDirectory = new QAction(MainWindow);
        actionChangeOutputDirectory->setObjectName(QString::fromUtf8("actionChangeOutputDirectory"));
        actionShowErrorMessage = new QAction(MainWindow);
        actionShowErrorMessage->setObjectName(QString::fromUtf8("actionShowErrorMessage"));
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/actions/icons/check_update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckUpdate->setIcon(icon14);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/actions/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutListPlaceholder = new QVBoxLayout();
        layoutListPlaceholder->setSpacing(6);
        layoutListPlaceholder->setObjectName(QString::fromUtf8("layoutListPlaceholder"));

        verticalLayout_3->addLayout(layoutListPlaceholder);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        lblTime = new QLabel(centralWidget);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setText(QString::fromUtf8("ElapsedTime"));

        horizontalLayout->addWidget(lblTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnStartConversion = new QPushButton(centralWidget);
        btnStartConversion->setObjectName(QString::fromUtf8("btnStartConversion"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStartConversion->sizePolicy().hasHeightForWidth());
        btnStartConversion->setSizePolicy(sizePolicy);
        btnStartConversion->setIcon(icon2);

        horizontalLayout->addWidget(btnStartConversion);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 491, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuConvert = new QMenu(menuBar);
        menuConvert->setObjectName(QString::fromUtf8("menuConvert"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setWindowTitle(QString::fromUtf8(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuConvert->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionAddFiles);
        menuFile->addAction(actionOptions);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuConvert->addAction(actionStartConversion);
        menuConvert->addAction(actionStopConversion);
        menuConvert->addAction(actionRetry);
        menuConvert->addAction(actionRetryAll);
        menuConvert->addSeparator();
        menuAbout->addAction(actionAboutQt);
        menuAbout->addAction(actionAboutFFmpeg);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionCheckUpdate);
        menuEdit->addAction(actionRemoveSelectedItems);
        menuEdit->addAction(actionRemoveCompletedItems);
        menuEdit->addAction(actionClearList);
        menuEdit->addSeparator();
        menuEdit->addAction(actionOpenOutputFolder);
        menuEdit->addAction(actionSetParameters);
        menuEdit->addAction(actionChangeOutputFilename);
        menuEdit->addAction(actionChangeOutputDirectory);
        menuEdit->addAction(actionShowErrorMessage);
        menuEdit->addAction(actionCut);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QWinFF", nullptr));
        actionAddFiles->setText(QCoreApplication::translate("MainWindow", "&Add Files", nullptr));
#if QT_CONFIG(statustip)
        actionAddFiles->setStatusTip(QCoreApplication::translate("MainWindow", "Add files for conversion.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionAddFiles->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("MainWindow", "Exit the program.", nullptr));
#endif // QT_CONFIG(statustip)
        actionStartConversion->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
#if QT_CONFIG(statustip)
        actionStartConversion->setStatusTip(QCoreApplication::translate("MainWindow", "Start conversion process.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionStartConversion->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStopConversion->setText(QCoreApplication::translate("MainWindow", "S&top", nullptr));
#if QT_CONFIG(statustip)
        actionStopConversion->setStatusTip(QCoreApplication::translate("MainWindow", "Stop conversion process.", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetParameters->setText(QCoreApplication::translate("MainWindow", "Set &Parameters", nullptr));
        actionSetParameters->setIconText(QCoreApplication::translate("MainWindow", "Set Parameters", nullptr));
#if QT_CONFIG(statustip)
        actionSetParameters->setStatusTip(QCoreApplication::translate("MainWindow", "Edit conversion parameters of selected files.", nullptr));
#endif // QT_CONFIG(statustip)
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
#if QT_CONFIG(statustip)
        actionAboutQt->setStatusTip(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
#endif // QT_CONFIG(statustip)
        actionOpenOutputFolder->setText(QCoreApplication::translate("MainWindow", "&Open Output Folder", nullptr));
#if QT_CONFIG(statustip)
        actionOpenOutputFolder->setStatusTip(QCoreApplication::translate("MainWindow", "Open output folder of the selected file.", nullptr));
#endif // QT_CONFIG(statustip)
        actionAboutFFmpeg->setText(QCoreApplication::translate("MainWindow", "About &FFmpeg", nullptr));
#if QT_CONFIG(statustip)
        actionAboutFFmpeg->setStatusTip(QCoreApplication::translate("MainWindow", "About FFmpeg", nullptr));
#endif // QT_CONFIG(statustip)
        actionRemoveSelectedItems->setText(QCoreApplication::translate("MainWindow", "&Remove Selected", nullptr));
#if QT_CONFIG(statustip)
        actionRemoveSelectedItems->setStatusTip(QCoreApplication::translate("MainWindow", "Remove all selected items in the list.", nullptr));
#endif // QT_CONFIG(statustip)
        actionRemoveCompletedItems->setText(QCoreApplication::translate("MainWindow", "R&emove Completed", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveCompletedItems->setToolTip(QCoreApplication::translate("MainWindow", "Remove Completed Items", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRemoveCompletedItems->setStatusTip(QCoreApplication::translate("MainWindow", "Remove all completed items in the list.", nullptr));
#endif // QT_CONFIG(statustip)
        actionClearList->setText(QCoreApplication::translate("MainWindow", "&Clear List", nullptr));
#if QT_CONFIG(tooltip)
        actionClearList->setToolTip(QCoreApplication::translate("MainWindow", "Clear List", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionClearList->setStatusTip(QCoreApplication::translate("MainWindow", "Remove all items in the list.", nullptr));
#endif // QT_CONFIG(statustip)
        actionRetry->setText(QCoreApplication::translate("MainWindow", "&Retry", nullptr));
#if QT_CONFIG(tooltip)
        actionRetry->setToolTip(QCoreApplication::translate("MainWindow", "Retry", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRetry->setStatusTip(QCoreApplication::translate("MainWindow", "Retry selected tasks.", nullptr));
#endif // QT_CONFIG(statustip)
        actionRetryAll->setText(QCoreApplication::translate("MainWindow", "Retry &All", nullptr));
#if QT_CONFIG(statustip)
        actionRetryAll->setStatusTip(QCoreApplication::translate("MainWindow", "Retry all tasks.", nullptr));
#endif // QT_CONFIG(statustip)
        actionOptions->setText(QCoreApplication::translate("MainWindow", "&Options", nullptr));
#if QT_CONFIG(statustip)
        actionOptions->setStatusTip(QCoreApplication::translate("MainWindow", "Options", nullptr));
#endif // QT_CONFIG(statustip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About Q&WinFF", nullptr));
#if QT_CONFIG(statustip)
        actionAbout->setStatusTip(QCoreApplication::translate("MainWindow", "About This Program", nullptr));
#endif // QT_CONFIG(statustip)
        actionChangeOutputFilename->setText(QCoreApplication::translate("MainWindow", "Change Output &Filename", nullptr));
#if QT_CONFIG(statustip)
        actionChangeOutputFilename->setStatusTip(QCoreApplication::translate("MainWindow", "Change the output filename of the selected item.", nullptr));
#endif // QT_CONFIG(statustip)
        actionChangeOutputDirectory->setText(QCoreApplication::translate("MainWindow", "Change Output &Directory", nullptr));
#if QT_CONFIG(statustip)
        actionChangeOutputDirectory->setStatusTip(QCoreApplication::translate("MainWindow", "Change the output directory of the selected items.", nullptr));
#endif // QT_CONFIG(statustip)
        actionShowErrorMessage->setText(QCoreApplication::translate("MainWindow", "Show Error &Message", nullptr));
        actionCheckUpdate->setText(QCoreApplication::translate("MainWindow", "Check For &Updates", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        btnStartConversion->setToolTip(QCoreApplication::translate("MainWindow", "Start conversion process.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        btnStartConversion->setStatusTip(QCoreApplication::translate("MainWindow", "Start conversion process.", nullptr));
#endif // QT_CONFIG(statustip)
        btnStartConversion->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuConvert->setTitle(QCoreApplication::translate("MainWindow", "&Convert", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "&About", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
