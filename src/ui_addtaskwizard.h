/********************************************************************************
** Form generated from reading UI file 'addtaskwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWIZARD_H
#define UI_ADDTASKWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AddTaskWizard
{
public:
    QWizardPage *wizardPageSelectFiles;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblSelectFiles;
    QFormLayout *formLayout;
    QListWidget *lstFiles;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QSpacerItem *verticalSpacer;
    QWizardPage *wizardPage2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *btnEditPreset;
    QComboBox *cbExtension;
    QCheckBox *chkAutoAdjustBitrate;
    QLabel *lblPreset;
    QComboBox *cbPreset;
    QLabel *lblExtension;
    QGroupBox *groupOutputPath;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbSelectFolder;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *cbOutputPath;
    QPushButton *btnBrowseOutputPath;
    QRadioButton *rbNewFolder;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *txtNewFolderName;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *rbSourceFolder;

    void setupUi(QWizard *AddTaskWizard)
    {
        if (AddTaskWizard->objectName().isEmpty())
            AddTaskWizard->setObjectName(QString::fromUtf8("AddTaskWizard"));
        AddTaskWizard->resize(500, 424);
        AddTaskWizard->setBaseSize(QSize(347, 424));
        AddTaskWizard->setWizardStyle(QWizard::ClassicStyle);
        wizardPageSelectFiles = new QWizardPage();
        wizardPageSelectFiles->setObjectName(QString::fromUtf8("wizardPageSelectFiles"));
        verticalLayout_2 = new QVBoxLayout(wizardPageSelectFiles);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblSelectFiles = new QLabel(wizardPageSelectFiles);
        lblSelectFiles->setObjectName(QString::fromUtf8("lblSelectFiles"));
        QFont font;
        font.setBold(true);
        lblSelectFiles->setFont(font);

        verticalLayout_2->addWidget(lblSelectFiles);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lstFiles = new QListWidget(wizardPageSelectFiles);
        lstFiles->setObjectName(QString::fromUtf8("lstFiles"));
        lstFiles->setSelectionMode(QAbstractItemView::ExtendedSelection);

        formLayout->setWidget(0, QFormLayout::LabelRole, lstFiles);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAdd = new QPushButton(wizardPageSelectFiles);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(wizardPageSelectFiles);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon1);

        verticalLayout->addWidget(btnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_2->addLayout(formLayout);

        AddTaskWizard->addPage(wizardPageSelectFiles);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        gridLayout_2 = new QGridLayout(wizardPage2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(wizardPage2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnEditPreset = new QPushButton(wizardPage2);
        btnEditPreset->setObjectName(QString::fromUtf8("btnEditPreset"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnEditPreset->sizePolicy().hasHeightForWidth());
        btnEditPreset->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/actions/icons/edit_preset.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditPreset->setIcon(icon2);

        gridLayout->addWidget(btnEditPreset, 1, 2, 1, 1);

        cbExtension = new QComboBox(wizardPage2);
        cbExtension->setObjectName(QString::fromUtf8("cbExtension"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbExtension->sizePolicy().hasHeightForWidth());
        cbExtension->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbExtension, 0, 1, 1, 1);

        chkAutoAdjustBitrate = new QCheckBox(wizardPage2);
        chkAutoAdjustBitrate->setObjectName(QString::fromUtf8("chkAutoAdjustBitrate"));

        gridLayout->addWidget(chkAutoAdjustBitrate, 2, 1, 1, 1);

        lblPreset = new QLabel(wizardPage2);
        lblPreset->setObjectName(QString::fromUtf8("lblPreset"));

        gridLayout->addWidget(lblPreset, 1, 0, 1, 1);

        cbPreset = new QComboBox(wizardPage2);
        cbPreset->setObjectName(QString::fromUtf8("cbPreset"));
        sizePolicy1.setHeightForWidth(cbPreset->sizePolicy().hasHeightForWidth());
        cbPreset->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbPreset, 1, 1, 1, 1);

        lblExtension = new QLabel(wizardPage2);
        lblExtension->setObjectName(QString::fromUtf8("lblExtension"));

        gridLayout->addWidget(lblExtension, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        groupOutputPath = new QGroupBox(wizardPage2);
        groupOutputPath->setObjectName(QString::fromUtf8("groupOutputPath"));
        verticalLayout_5 = new QVBoxLayout(groupOutputPath);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        rbSelectFolder = new QRadioButton(groupOutputPath);
        rbSelectFolder->setObjectName(QString::fromUtf8("rbSelectFolder"));

        verticalLayout_5->addWidget(rbSelectFolder);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cbOutputPath = new QComboBox(groupOutputPath);
        cbOutputPath->setObjectName(QString::fromUtf8("cbOutputPath"));
        sizePolicy1.setHeightForWidth(cbOutputPath->sizePolicy().hasHeightForWidth());
        cbOutputPath->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(cbOutputPath);

        btnBrowseOutputPath = new QPushButton(groupOutputPath);
        btnBrowseOutputPath->setObjectName(QString::fromUtf8("btnBrowseOutputPath"));

        horizontalLayout_2->addWidget(btnBrowseOutputPath);


        verticalLayout_5->addLayout(horizontalLayout_2);

        rbNewFolder = new QRadioButton(groupOutputPath);
        rbNewFolder->setObjectName(QString::fromUtf8("rbNewFolder"));

        verticalLayout_5->addWidget(rbNewFolder);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(groupOutputPath);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        txtNewFolderName = new QLineEdit(groupOutputPath);
        txtNewFolderName->setObjectName(QString::fromUtf8("txtNewFolderName"));

        horizontalLayout_3->addWidget(txtNewFolderName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_3);

        rbSourceFolder = new QRadioButton(groupOutputPath);
        rbSourceFolder->setObjectName(QString::fromUtf8("rbSourceFolder"));

        verticalLayout_5->addWidget(rbSourceFolder);


        gridLayout_2->addWidget(groupOutputPath, 1, 0, 1, 1);

        AddTaskWizard->addPage(wizardPage2);
        QWidget::setTabOrder(cbExtension, cbPreset);
        QWidget::setTabOrder(cbPreset, btnEditPreset);
        QWidget::setTabOrder(btnEditPreset, chkAutoAdjustBitrate);
        QWidget::setTabOrder(chkAutoAdjustBitrate, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);
        QWidget::setTabOrder(btnRemove, lstFiles);

        retranslateUi(AddTaskWizard);

        QMetaObject::connectSlotsByName(AddTaskWizard);
    } // setupUi

    void retranslateUi(QWizard *AddTaskWizard)
    {
        AddTaskWizard->setWindowTitle(QCoreApplication::translate("AddTaskWizard", "Add Tasks", nullptr));
        lblSelectFiles->setText(QCoreApplication::translate("AddTaskWizard", "Files to be converted", nullptr));
#if QT_CONFIG(tooltip)
        btnAdd->setToolTip(QCoreApplication::translate("AddTaskWizard", "Add files.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdd->setText(QString());
#if QT_CONFIG(tooltip)
        btnRemove->setToolTip(QCoreApplication::translate("AddTaskWizard", "Remove selected files.", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemove->setText(QString());
        label->setText(QCoreApplication::translate("AddTaskWizard", "Output Settings", nullptr));
        btnEditPreset->setText(QCoreApplication::translate("AddTaskWizard", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        chkAutoAdjustBitrate->setToolTip(QCoreApplication::translate("AddTaskWizard", "Auto adjust output bitrate to reduce output file size.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkAutoAdjustBitrate->setText(QCoreApplication::translate("AddTaskWizard", "Auto Adjust Audio Bitrate", nullptr));
        lblPreset->setText(QCoreApplication::translate("AddTaskWizard", "Preset", nullptr));
        lblExtension->setText(QCoreApplication::translate("AddTaskWizard", "Convert to", nullptr));
        groupOutputPath->setTitle(QCoreApplication::translate("AddTaskWizard", "Output Path", nullptr));
        rbSelectFolder->setText(QCoreApplication::translate("AddTaskWizard", "Select &folder", nullptr));
        btnBrowseOutputPath->setText(QCoreApplication::translate("AddTaskWizard", "Browse", nullptr));
        rbNewFolder->setText(QCoreApplication::translate("AddTaskWizard", "Create &new folder in source folder", nullptr));
        label_2->setText(QCoreApplication::translate("AddTaskWizard", "Folder Name", nullptr));
        rbSourceFolder->setText(QCoreApplication::translate("AddTaskWizard", "Output to &source folder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTaskWizard: public Ui_AddTaskWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWIZARD_H
