/********************************************************************************
** Form generated from reading UI file 'interactivecuttingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERACTIVECUTTINGDIALOG_H
#define UI_INTERACTIVECUTTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InteractiveCuttingDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frmPlay;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *layoutPlayer;
    QVBoxLayout *layoutRangeSelector;
    QFrame *frmControl;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnAsBegin;
    QPushButton *btnToBegin;
    QPushButton *btnPlaySelection;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnAsEnd;
    QPushButton *btnToEnd;
    QFrame *frmEdit;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layoutRangeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InteractiveCuttingDialog)
    {
        if (InteractiveCuttingDialog->objectName().isEmpty())
            InteractiveCuttingDialog->setObjectName(QString::fromUtf8("InteractiveCuttingDialog"));
        InteractiveCuttingDialog->resize(857, 600);
        verticalLayout_2 = new QVBoxLayout(InteractiveCuttingDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frmPlay = new QFrame(InteractiveCuttingDialog);
        frmPlay->setObjectName(QString::fromUtf8("frmPlay"));
        frmPlay->setFrameShape(QFrame::StyledPanel);
        frmPlay->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frmPlay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutPlayer = new QVBoxLayout();
        layoutPlayer->setObjectName(QString::fromUtf8("layoutPlayer"));

        verticalLayout->addLayout(layoutPlayer);

        layoutRangeSelector = new QVBoxLayout();
        layoutRangeSelector->setObjectName(QString::fromUtf8("layoutRangeSelector"));

        verticalLayout->addLayout(layoutRangeSelector);


        verticalLayout_2->addWidget(frmPlay);

        frmControl = new QFrame(InteractiveCuttingDialog);
        frmControl->setObjectName(QString::fromUtf8("frmControl"));
        frmControl->setFrameShape(QFrame::StyledPanel);
        frmControl->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frmControl);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btnAsBegin = new QPushButton(frmControl);
        btnAsBegin->setObjectName(QString::fromUtf8("btnAsBegin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/mark.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAsBegin->setIcon(icon);

        verticalLayout_4->addWidget(btnAsBegin);

        btnToBegin = new QPushButton(frmControl);
        btnToBegin->setObjectName(QString::fromUtf8("btnToBegin"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/icons/seek_to_begin.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnToBegin->setIcon(icon1);

        verticalLayout_4->addWidget(btnToBegin);


        horizontalLayout->addLayout(verticalLayout_4);

        btnPlaySelection = new QPushButton(frmControl);
        btnPlaySelection->setObjectName(QString::fromUtf8("btnPlaySelection"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnPlaySelection->sizePolicy().hasHeightForWidth());
        btnPlaySelection->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/actions/icons/preview_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlaySelection->setIcon(icon2);

        horizontalLayout->addWidget(btnPlaySelection);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        btnAsEnd = new QPushButton(frmControl);
        btnAsEnd->setObjectName(QString::fromUtf8("btnAsEnd"));
        btnAsEnd->setIcon(icon);

        verticalLayout_5->addWidget(btnAsEnd);

        btnToEnd = new QPushButton(frmControl);
        btnToEnd->setObjectName(QString::fromUtf8("btnToEnd"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/actions/icons/seek_to_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnToEnd->setIcon(icon3);

        verticalLayout_5->addWidget(btnToEnd);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(frmControl);

        frmEdit = new QFrame(InteractiveCuttingDialog);
        frmEdit->setObjectName(QString::fromUtf8("frmEdit"));
        frmEdit->setFrameShape(QFrame::StyledPanel);
        frmEdit->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frmEdit);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutRangeEdit = new QVBoxLayout();
        layoutRangeEdit->setObjectName(QString::fromUtf8("layoutRangeEdit"));

        verticalLayout_3->addLayout(layoutRangeEdit);


        verticalLayout_2->addWidget(frmEdit);

        buttonBox = new QDialogButtonBox(InteractiveCuttingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(InteractiveCuttingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InteractiveCuttingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InteractiveCuttingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InteractiveCuttingDialog);
    } // setupUi

    void retranslateUi(QDialog *InteractiveCuttingDialog)
    {
        InteractiveCuttingDialog->setWindowTitle(QCoreApplication::translate("InteractiveCuttingDialog", "Cutting", "Cutting as in \"cutting video\""));
        btnAsBegin->setText(QCoreApplication::translate("InteractiveCuttingDialog", "Mark as Begin", nullptr));
        btnToBegin->setText(QCoreApplication::translate("InteractiveCuttingDialog", "Seek to Begin", nullptr));
        btnPlaySelection->setText(QCoreApplication::translate("InteractiveCuttingDialog", "Play Selection", nullptr));
        btnAsEnd->setText(QCoreApplication::translate("InteractiveCuttingDialog", "Mark as End", nullptr));
        btnToEnd->setText(QCoreApplication::translate("InteractiveCuttingDialog", "Seek to End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InteractiveCuttingDialog: public Ui_InteractiveCuttingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERACTIVECUTTINGDIALOG_H
