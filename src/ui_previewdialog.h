/********************************************************************************
** Form generated from reading UI file 'previewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEWDIALOG_H
#define UI_PREVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreviewDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *layoutPlayer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlayRange;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreviewDialog)
    {
        if (PreviewDialog->objectName().isEmpty())
            PreviewDialog->setObjectName(QString::fromUtf8("PreviewDialog"));
        PreviewDialog->resize(800, 600);
        verticalLayout_2 = new QVBoxLayout(PreviewDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layoutPlayer = new QVBoxLayout();
        layoutPlayer->setObjectName(QString::fromUtf8("layoutPlayer"));

        verticalLayout_2->addLayout(layoutPlayer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnPlayRange = new QPushButton(PreviewDialog);
        btnPlayRange->setObjectName(QString::fromUtf8("btnPlayRange"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/preview_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlayRange->setIcon(icon);

        horizontalLayout->addWidget(btnPlayRange);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(PreviewDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(PreviewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreviewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreviewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreviewDialog);
    } // setupUi

    void retranslateUi(QDialog *PreviewDialog)
    {
        PreviewDialog->setWindowTitle(QCoreApplication::translate("PreviewDialog", "Dialog", nullptr));
        btnPlayRange->setText(QCoreApplication::translate("PreviewDialog", "Play Selected Range", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreviewDialog: public Ui_PreviewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEWDIALOG_H
