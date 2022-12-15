/********************************************************************************
** Form generated from reading UI file 'updatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblStatus;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnReleaseNotes;
    QTextBrowser *txtReleaseNotes;
    QCheckBox *chkCheckUpdateOnStartup;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UpdateDialog->sizePolicy().hasHeightForWidth());
        UpdateDialog->setSizePolicy(sizePolicy);
        UpdateDialog->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(UpdateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblStatus = new QLabel(UpdateDialog);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setText(QString::fromUtf8("lblStatus"));
        lblStatus->setOpenExternalLinks(true);

        verticalLayout->addWidget(lblStatus);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnReleaseNotes = new QPushButton(UpdateDialog);
        btnReleaseNotes->setObjectName(QString::fromUtf8("btnReleaseNotes"));
        btnReleaseNotes->setCheckable(true);
        btnReleaseNotes->setChecked(false);

        horizontalLayout->addWidget(btnReleaseNotes);


        verticalLayout->addLayout(horizontalLayout);

        txtReleaseNotes = new QTextBrowser(UpdateDialog);
        txtReleaseNotes->setObjectName(QString::fromUtf8("txtReleaseNotes"));
        txtReleaseNotes->setOpenExternalLinks(false);

        verticalLayout->addWidget(txtReleaseNotes);

        chkCheckUpdateOnStartup = new QCheckBox(UpdateDialog);
        chkCheckUpdateOnStartup->setObjectName(QString::fromUtf8("chkCheckUpdateOnStartup"));

        verticalLayout->addWidget(chkCheckUpdateOnStartup);

        buttonBox = new QDialogButtonBox(UpdateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UpdateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UpdateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UpdateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        btnReleaseNotes->setText(QCoreApplication::translate("UpdateDialog", "Show &Release Notes", nullptr));
        chkCheckUpdateOnStartup->setText(QCoreApplication::translate("UpdateDialog", "Check for updates on program startup", nullptr));
        (void)UpdateDialog;
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
