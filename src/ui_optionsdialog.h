/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkCheckUpdates;
    QCheckBox *chkAutoStartConversion;
    QSpacerItem *verticalSpacer;
    QWidget *tabFFmpeg;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblThreads;
    QSpinBox *spinThreads;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkHideFormats;
    QWidget *tabTools;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *toolTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(485, 382);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chkCheckUpdates = new QCheckBox(tab);
        chkCheckUpdates->setObjectName(QString::fromUtf8("chkCheckUpdates"));

        verticalLayout_4->addWidget(chkCheckUpdates);

        chkAutoStartConversion = new QCheckBox(tab);
        chkAutoStartConversion->setObjectName(QString::fromUtf8("chkAutoStartConversion"));

        verticalLayout_4->addWidget(chkAutoStartConversion);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tabFFmpeg = new QWidget();
        tabFFmpeg->setObjectName(QString::fromUtf8("tabFFmpeg"));
        formLayout = new QFormLayout(tabFFmpeg);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblThreads = new QLabel(tabFFmpeg);
        lblThreads->setObjectName(QString::fromUtf8("lblThreads"));

        horizontalLayout->addWidget(lblThreads);

        spinThreads = new QSpinBox(tabFFmpeg);
        spinThreads->setObjectName(QString::fromUtf8("spinThreads"));

        horizontalLayout->addWidget(spinThreads);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chkHideFormats = new QCheckBox(tabFFmpeg);
        chkHideFormats->setObjectName(QString::fromUtf8("chkHideFormats"));

        horizontalLayout_2->addWidget(chkHideFormats);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        tabWidget->addTab(tabFFmpeg, QString());
        tabTools = new QWidget();
        tabTools->setObjectName(QString::fromUtf8("tabTools"));
        verticalLayout_3 = new QVBoxLayout(tabTools);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(tabTools);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        toolTable = new QTableWidget(tabTools);
        if (toolTable->columnCount() < 2)
            toolTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        toolTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        toolTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        toolTable->setObjectName(QString::fromUtf8("toolTable"));
        toolTable->setProperty("showDropIndicator", QVariant(false));
        toolTable->setDragDropOverwriteMode(false);
        toolTable->setColumnCount(2);

        verticalLayout_2->addWidget(toolTable);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tabTools, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OptionsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "Options", nullptr));
        chkCheckUpdates->setText(QCoreApplication::translate("OptionsDialog", "Check for updates on program startup", nullptr));
#if QT_CONFIG(tooltip)
        chkAutoStartConversion->setToolTip(QCoreApplication::translate("OptionsDialog", "Automatically start conversion after adding files to the list.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkAutoStartConversion->setText(QCoreApplication::translate("OptionsDialog", "Start conversion automatically", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("OptionsDialog", "General", nullptr));
        lblThreads->setText(QCoreApplication::translate("OptionsDialog", "Number of threads to use in conversion", nullptr));
#if QT_CONFIG(tooltip)
        chkHideFormats->setToolTip(QCoreApplication::translate("OptionsDialog", "<html><head/><body><p>Hide output formats that are not available in the current ffmpeg installation. It is recommended to turn this option on unless you are sure that QWinFF has failed to detect available formats. (requires restarting QWinFF to take effect)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        chkHideFormats->setText(QCoreApplication::translate("OptionsDialog", "Hide unavailable formats (requires restarting)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFFmpeg), QCoreApplication::translate("OptionsDialog", "FFmpeg", nullptr));
        label->setText(QCoreApplication::translate("OptionsDialog", "You have to restart QWinFF for the changes to take effect.", nullptr));
        QTableWidgetItem *___qtablewidgetitem = toolTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OptionsDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = toolTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OptionsDialog", "Command", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTools), QCoreApplication::translate("OptionsDialog", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
