/********************************************************************************
** Form generated from reading UI file 'mediaplayerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAPLAYERWIDGET_H
#define UI_MEDIAPLAYERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaPlayerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *layoutPlayer;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlayPause;
    QPushButton *btnReset;
    QPushButton *btnBack;
    QPushButton *btnForward;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *slideVolume;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblPosition;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblRemaining;
    QHBoxLayout *horizontalLayout_5;
    QSlider *slideSeek;

    void setupUi(QWidget *MediaPlayerWidget)
    {
        if (MediaPlayerWidget->objectName().isEmpty())
            MediaPlayerWidget->setObjectName(QString::fromUtf8("MediaPlayerWidget"));
        MediaPlayerWidget->resize(590, 300);
        MediaPlayerWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MediaPlayerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutPlayer = new QVBoxLayout();
        layoutPlayer->setObjectName(QString::fromUtf8("layoutPlayer"));

        verticalLayout->addLayout(layoutPlayer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnPlayPause = new QPushButton(MediaPlayerWidget);
        btnPlayPause->setObjectName(QString::fromUtf8("btnPlayPause"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlayPause->setIcon(icon);

        horizontalLayout->addWidget(btnPlayPause);

        btnReset = new QPushButton(MediaPlayerWidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/icons/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReset->setIcon(icon1);

        horizontalLayout->addWidget(btnReset);

        btnBack = new QPushButton(MediaPlayerWidget);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setText(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/actions/icons/media-seek-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBack->setIcon(icon2);

        horizontalLayout->addWidget(btnBack);

        btnForward = new QPushButton(MediaPlayerWidget);
        btnForward->setObjectName(QString::fromUtf8("btnForward"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/actions/icons/media-seek-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnForward->setIcon(icon3);

        horizontalLayout->addWidget(btnForward);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(MediaPlayerWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/actions/icons/audio_volume.png")));

        horizontalLayout_2->addWidget(label);

        slideVolume = new QSlider(MediaPlayerWidget);
        slideVolume->setObjectName(QString::fromUtf8("slideVolume"));
        slideVolume->setMaximum(100);
        slideVolume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slideVolume);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblPosition = new QLabel(MediaPlayerWidget);
        lblPosition->setObjectName(QString::fromUtf8("lblPosition"));
        lblPosition->setText(QString::fromUtf8("Position"));

        horizontalLayout_4->addWidget(lblPosition);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        lblRemaining = new QLabel(MediaPlayerWidget);
        lblRemaining->setObjectName(QString::fromUtf8("lblRemaining"));
        lblRemaining->setText(QString::fromUtf8("Remaining"));

        horizontalLayout_4->addWidget(lblRemaining);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        slideSeek = new QSlider(MediaPlayerWidget);
        slideSeek->setObjectName(QString::fromUtf8("slideSeek"));
        slideSeek->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(slideSeek);


        verticalLayout->addLayout(horizontalLayout_5);

        QWidget::setTabOrder(btnBack, slideSeek);
        QWidget::setTabOrder(slideSeek, btnForward);
        QWidget::setTabOrder(btnForward, slideVolume);
        QWidget::setTabOrder(slideVolume, btnPlayPause);

        retranslateUi(MediaPlayerWidget);

        QMetaObject::connectSlotsByName(MediaPlayerWidget);
    } // setupUi

    void retranslateUi(QWidget *MediaPlayerWidget)
    {
        (void)MediaPlayerWidget;
    } // retranslateUi

};

namespace Ui {
    class MediaPlayerWidget: public Ui_MediaPlayerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAPLAYERWIDGET_H
