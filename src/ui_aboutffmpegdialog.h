/********************************************************************************
** Form generated from reading UI file 'aboutffmpegdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFFMPEGDIALOG_H
#define UI_ABOUTFFMPEGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutFFmpegDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabFFmpeg;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QTextBrowser *txtInfo;
    QWidget *tabCodecs;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *txtCodecInfo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutFFmpegDialog)
    {
        if (AboutFFmpegDialog->objectName().isEmpty())
            AboutFFmpegDialog->setObjectName(QString::fromUtf8("AboutFFmpegDialog"));
        AboutFFmpegDialog->resize(551, 379);
        AboutFFmpegDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app/icons/ffmpeg.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutFFmpegDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AboutFFmpegDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(AboutFFmpegDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabFFmpeg = new QWidget();
        tabFFmpeg->setObjectName(QString::fromUtf8("tabFFmpeg"));
        horizontalLayout = new QHBoxLayout(tabFFmpeg);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(tabFFmpeg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(128, 128));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/app/icons/ffmpeg_large.png")));
        label_3->setScaledContents(true);

        verticalLayout_2->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        txtInfo = new QTextBrowser(tabFFmpeg);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtInfo->sizePolicy().hasHeightForWidth());
        txtInfo->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(txtInfo);

        tabWidget->addTab(tabFFmpeg, QString());
        tabCodecs = new QWidget();
        tabCodecs->setObjectName(QString::fromUtf8("tabCodecs"));
        verticalLayout_3 = new QVBoxLayout(tabCodecs);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        txtCodecInfo = new QTextBrowser(tabCodecs);
        txtCodecInfo->setObjectName(QString::fromUtf8("txtCodecInfo"));

        verticalLayout_3->addWidget(txtCodecInfo);

        tabWidget->addTab(tabCodecs, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutFFmpegDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutFFmpegDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutFFmpegDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutFFmpegDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AboutFFmpegDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutFFmpegDialog)
    {
        AboutFFmpegDialog->setWindowTitle(QCoreApplication::translate("AboutFFmpegDialog", "About FFmpeg", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabFFmpeg), QCoreApplication::translate("AboutFFmpegDialog", "FFmpeg", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCodecs), QCoreApplication::translate("AboutFFmpegDialog", "Available Codecs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutFFmpegDialog: public Ui_AboutFFmpegDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFFMPEGDIALOG_H
