/********************************************************************************
** Form generated from reading UI file 'conversionparameterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSIONPARAMETERDIALOG_H
#define UI_CONVERSIONPARAMETERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConversionParameterDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_audio;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chkDisableAudio;
    QCheckBox *chkCopyAudio;
    QGroupBox *groupAudioOptions;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblSampleRate;
    QComboBox *cbAudioSampleRate;
    QLabel *lblHz;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAudioBitrate;
    QSpinBox *spinAudioBitrate;
    QLabel *lblAudioBitrateUnit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpinBox *spinChannels;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QSpinBox *spinVolume;
    QLabel *label_7;
    QWidget *tab_video;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *chkDisableVideo;
    QCheckBox *chkCopyVideo;
    QGroupBox *groupVideoOptions;
    QFormLayout *formLayout_2;
    QCheckBox *chkVideoSameQuality;
    QCheckBox *chkDeinterlace;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpinBox *spinWidth;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *spinHeight;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QSpinBox *spinVideoBitrate;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QSpinBox *spinCropTop;
    QSpinBox *spinCropLeft;
    QLabel *lblCrop;
    QSpinBox *spinCropRight;
    QSpinBox *spinCropBottom;
    QSpacerItem *verticalSpacer;
    QWidget *tab_time;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupCutting;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *layoutTimeSel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnInteractiveCutting;
    QPushButton *btnPreview;
    QGroupBox *groupScaling;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblSpeed;
    QDoubleSpinBox *spinSpeedFactor;
    QWidget *tab_advanced;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblFFmpegOptions;
    QPlainTextEdit *txtFFmpegOptions;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConversionParameterDialog)
    {
        if (ConversionParameterDialog->objectName().isEmpty())
            ConversionParameterDialog->setObjectName(QString::fromUtf8("ConversionParameterDialog"));
        ConversionParameterDialog->resize(403, 423);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConversionParameterDialog->sizePolicy().hasHeightForWidth());
        ConversionParameterDialog->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(ConversionParameterDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(ConversionParameterDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_audio = new QWidget();
        tab_audio->setObjectName(QString::fromUtf8("tab_audio"));
        verticalLayout_2 = new QVBoxLayout(tab_audio);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        chkDisableAudio = new QCheckBox(tab_audio);
        chkDisableAudio->setObjectName(QString::fromUtf8("chkDisableAudio"));

        horizontalLayout_11->addWidget(chkDisableAudio);

        chkCopyAudio = new QCheckBox(tab_audio);
        chkCopyAudio->setObjectName(QString::fromUtf8("chkCopyAudio"));

        horizontalLayout_11->addWidget(chkCopyAudio);


        verticalLayout_2->addLayout(horizontalLayout_11);

        groupAudioOptions = new QGroupBox(tab_audio);
        groupAudioOptions->setObjectName(QString::fromUtf8("groupAudioOptions"));
        formLayout = new QFormLayout(groupAudioOptions);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblSampleRate = new QLabel(groupAudioOptions);
        lblSampleRate->setObjectName(QString::fromUtf8("lblSampleRate"));

        horizontalLayout_4->addWidget(lblSampleRate);

        cbAudioSampleRate = new QComboBox(groupAudioOptions);
        cbAudioSampleRate->setObjectName(QString::fromUtf8("cbAudioSampleRate"));
        cbAudioSampleRate->setEditable(true);

        horizontalLayout_4->addWidget(cbAudioSampleRate);

        lblHz = new QLabel(groupAudioOptions);
        lblHz->setObjectName(QString::fromUtf8("lblHz"));

        horizontalLayout_4->addWidget(lblHz);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblAudioBitrate = new QLabel(groupAudioOptions);
        lblAudioBitrate->setObjectName(QString::fromUtf8("lblAudioBitrate"));

        horizontalLayout_5->addWidget(lblAudioBitrate);

        spinAudioBitrate = new QSpinBox(groupAudioOptions);
        spinAudioBitrate->setObjectName(QString::fromUtf8("spinAudioBitrate"));
        spinAudioBitrate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinAudioBitrate->setMaximum(9999);
        spinAudioBitrate->setValue(64);

        horizontalLayout_5->addWidget(spinAudioBitrate);

        lblAudioBitrateUnit = new QLabel(groupAudioOptions);
        lblAudioBitrateUnit->setObjectName(QString::fromUtf8("lblAudioBitrateUnit"));

        horizontalLayout_5->addWidget(lblAudioBitrateUnit);


        formLayout->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupAudioOptions);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        spinChannels = new QSpinBox(groupAudioOptions);
        spinChannels->setObjectName(QString::fromUtf8("spinChannels"));
        spinChannels->setMinimum(0);
        spinChannels->setMaximum(2);
        spinChannels->setValue(2);

        horizontalLayout_6->addWidget(spinChannels);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_6 = new QLabel(groupAudioOptions);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_12->addWidget(label_6);

        spinVolume = new QSpinBox(groupAudioOptions);
        spinVolume->setObjectName(QString::fromUtf8("spinVolume"));
        spinVolume->setMinimum(1);
        spinVolume->setMaximum(200);
        spinVolume->setValue(100);

        horizontalLayout_12->addWidget(spinVolume);

        label_7 = new QLabel(groupAudioOptions);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_12->addWidget(label_7);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_12);


        verticalLayout_2->addWidget(groupAudioOptions);

        tabWidget->addTab(tab_audio, QString());
        tab_video = new QWidget();
        tab_video->setObjectName(QString::fromUtf8("tab_video"));
        verticalLayout_3 = new QVBoxLayout(tab_video);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        chkDisableVideo = new QCheckBox(tab_video);
        chkDisableVideo->setObjectName(QString::fromUtf8("chkDisableVideo"));

        horizontalLayout_13->addWidget(chkDisableVideo);

        chkCopyVideo = new QCheckBox(tab_video);
        chkCopyVideo->setObjectName(QString::fromUtf8("chkCopyVideo"));

        horizontalLayout_13->addWidget(chkCopyVideo);


        verticalLayout_3->addLayout(horizontalLayout_13);

        groupVideoOptions = new QGroupBox(tab_video);
        groupVideoOptions->setObjectName(QString::fromUtf8("groupVideoOptions"));
        formLayout_2 = new QFormLayout(groupVideoOptions);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        chkVideoSameQuality = new QCheckBox(groupVideoOptions);
        chkVideoSameQuality->setObjectName(QString::fromUtf8("chkVideoSameQuality"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, chkVideoSameQuality);

        chkDeinterlace = new QCheckBox(groupVideoOptions);
        chkDeinterlace->setObjectName(QString::fromUtf8("chkDeinterlace"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, chkDeinterlace);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(groupVideoOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        spinWidth = new QSpinBox(groupVideoOptions);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinWidth->setMaximum(9999);

        horizontalLayout_7->addWidget(spinWidth);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(groupVideoOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        spinHeight = new QSpinBox(groupVideoOptions);
        spinHeight->setObjectName(QString::fromUtf8("spinHeight"));
        spinHeight->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinHeight->setMaximum(9999);

        horizontalLayout_8->addWidget(spinHeight);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(groupVideoOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_10->addWidget(label_4);

        spinVideoBitrate = new QSpinBox(groupVideoOptions);
        spinVideoBitrate->setObjectName(QString::fromUtf8("spinVideoBitrate"));
        spinVideoBitrate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinVideoBitrate->setMaximum(9999);

        horizontalLayout_10->addWidget(spinVideoBitrate);

        label_5 = new QLabel(groupVideoOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_10->addWidget(label_5);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinCropTop = new QSpinBox(groupVideoOptions);
        spinCropTop->setObjectName(QString::fromUtf8("spinCropTop"));
        spinCropTop->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinCropTop->setMaximum(9999);

        gridLayout->addWidget(spinCropTop, 0, 1, 1, 1);

        spinCropLeft = new QSpinBox(groupVideoOptions);
        spinCropLeft->setObjectName(QString::fromUtf8("spinCropLeft"));
        spinCropLeft->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinCropLeft->setMaximum(9999);

        gridLayout->addWidget(spinCropLeft, 1, 0, 1, 1);

        lblCrop = new QLabel(groupVideoOptions);
        lblCrop->setObjectName(QString::fromUtf8("lblCrop"));
        lblCrop->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblCrop, 1, 1, 1, 1);

        spinCropRight = new QSpinBox(groupVideoOptions);
        spinCropRight->setObjectName(QString::fromUtf8("spinCropRight"));
        spinCropRight->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinCropRight->setMaximum(9999);

        gridLayout->addWidget(spinCropRight, 1, 2, 1, 1);

        spinCropBottom = new QSpinBox(groupVideoOptions);
        spinCropBottom->setObjectName(QString::fromUtf8("spinCropBottom"));
        spinCropBottom->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinCropBottom->setMaximum(9999);

        gridLayout->addWidget(spinCropBottom, 2, 1, 1, 1);


        formLayout_2->setLayout(4, QFormLayout::SpanningRole, gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(2, QFormLayout::LabelRole, verticalSpacer);


        verticalLayout_3->addWidget(groupVideoOptions);

        tabWidget->addTab(tab_video, QString());
        tab_time = new QWidget();
        tab_time->setObjectName(QString::fromUtf8("tab_time"));
        verticalLayout_9 = new QVBoxLayout(tab_time);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupCutting = new QGroupBox(tab_time);
        groupCutting->setObjectName(QString::fromUtf8("groupCutting"));
        verticalLayout_7 = new QVBoxLayout(groupCutting);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        layoutTimeSel = new QVBoxLayout();
        layoutTimeSel->setObjectName(QString::fromUtf8("layoutTimeSel"));

        verticalLayout_7->addLayout(layoutTimeSel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnInteractiveCutting = new QPushButton(groupCutting);
        btnInteractiveCutting->setObjectName(QString::fromUtf8("btnInteractiveCutting"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/actions/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnInteractiveCutting->setIcon(icon);

        horizontalLayout_3->addWidget(btnInteractiveCutting);

        btnPreview = new QPushButton(groupCutting);
        btnPreview->setObjectName(QString::fromUtf8("btnPreview"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/icons/preview_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPreview->setIcon(icon1);

        horizontalLayout_3->addWidget(btnPreview);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_9->addWidget(groupCutting);

        groupScaling = new QGroupBox(tab_time);
        groupScaling->setObjectName(QString::fromUtf8("groupScaling"));
        verticalLayout_8 = new QVBoxLayout(groupScaling);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblSpeed = new QLabel(groupScaling);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));

        horizontalLayout_2->addWidget(lblSpeed);

        spinSpeedFactor = new QDoubleSpinBox(groupScaling);
        spinSpeedFactor->setObjectName(QString::fromUtf8("spinSpeedFactor"));
        spinSpeedFactor->setSuffix(QString::fromUtf8("%"));
        spinSpeedFactor->setMinimum(10.000000000000000);
        spinSpeedFactor->setMaximum(1000.000000000000000);

        horizontalLayout_2->addWidget(spinSpeedFactor);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_9->addWidget(groupScaling);

        tabWidget->addTab(tab_time, QString());
        tab_advanced = new QWidget();
        tab_advanced->setObjectName(QString::fromUtf8("tab_advanced"));
        verticalLayout_6 = new QVBoxLayout(tab_advanced);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox = new QGroupBox(tab_advanced);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lblFFmpegOptions = new QLabel(groupBox);
        lblFFmpegOptions->setObjectName(QString::fromUtf8("lblFFmpegOptions"));

        verticalLayout_4->addWidget(lblFFmpegOptions);

        txtFFmpegOptions = new QPlainTextEdit(groupBox);
        txtFFmpegOptions->setObjectName(QString::fromUtf8("txtFFmpegOptions"));

        verticalLayout_4->addWidget(txtFFmpegOptions);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox);

        tabWidget->addTab(tab_advanced, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ConversionParameterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);

        QWidget::setTabOrder(cbAudioSampleRate, spinAudioBitrate);
        QWidget::setTabOrder(spinAudioBitrate, spinChannels);
        QWidget::setTabOrder(spinChannels, spinVolume);
        QWidget::setTabOrder(spinVolume, spinWidth);
        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, spinVideoBitrate);
        QWidget::setTabOrder(spinVideoBitrate, spinCropTop);
        QWidget::setTabOrder(spinCropTop, spinCropLeft);
        QWidget::setTabOrder(spinCropLeft, spinCropRight);
        QWidget::setTabOrder(spinCropRight, spinCropBottom);
        QWidget::setTabOrder(spinCropBottom, txtFFmpegOptions);
        QWidget::setTabOrder(txtFFmpegOptions, buttonBox);

        retranslateUi(ConversionParameterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConversionParameterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConversionParameterDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConversionParameterDialog);
    } // setupUi

    void retranslateUi(QDialog *ConversionParameterDialog)
    {
        ConversionParameterDialog->setWindowTitle(QCoreApplication::translate("ConversionParameterDialog", "Conversion Parameters", nullptr));
        chkDisableAudio->setText(QCoreApplication::translate("ConversionParameterDialog", "Disable Audio", nullptr));
        chkCopyAudio->setText(QCoreApplication::translate("ConversionParameterDialog", "Copy Audio (Do not re-encode)", nullptr));
        groupAudioOptions->setTitle(QCoreApplication::translate("ConversionParameterDialog", "Audio Options", nullptr));
        lblSampleRate->setText(QCoreApplication::translate("ConversionParameterDialog", "Sample Rate", nullptr));
        lblHz->setText(QCoreApplication::translate("ConversionParameterDialog", "Hz", nullptr));
        lblAudioBitrate->setText(QCoreApplication::translate("ConversionParameterDialog", "Bitrate", nullptr));
        spinAudioBitrate->setSpecialValueText(QCoreApplication::translate("ConversionParameterDialog", "(auto)", nullptr));
        lblAudioBitrateUnit->setText(QCoreApplication::translate("ConversionParameterDialog", "kb/s", nullptr));
        label->setText(QCoreApplication::translate("ConversionParameterDialog", "Channels", nullptr));
        spinChannels->setSpecialValueText(QCoreApplication::translate("ConversionParameterDialog", "(auto)", nullptr));
        label_6->setText(QCoreApplication::translate("ConversionParameterDialog", "Volume", nullptr));
        label_7->setText(QCoreApplication::translate("ConversionParameterDialog", "%", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_audio), QCoreApplication::translate("ConversionParameterDialog", "Audio", nullptr));
        chkDisableVideo->setText(QCoreApplication::translate("ConversionParameterDialog", "Disable Video", nullptr));
        chkCopyVideo->setText(QCoreApplication::translate("ConversionParameterDialog", "Copy Video (Do not re-encode)", nullptr));
        groupVideoOptions->setTitle(QCoreApplication::translate("ConversionParameterDialog", "Video Options", nullptr));
#if QT_CONFIG(tooltip)
        chkVideoSameQuality->setToolTip(QCoreApplication::translate("ConversionParameterDialog", "Same Quantizer as Source", nullptr));
#endif // QT_CONFIG(tooltip)
        chkVideoSameQuality->setText(QCoreApplication::translate("ConversionParameterDialog", "Same Quantizer as Source", nullptr));
        chkDeinterlace->setText(QCoreApplication::translate("ConversionParameterDialog", "Deinterlace", nullptr));
        label_2->setText(QCoreApplication::translate("ConversionParameterDialog", "Width", nullptr));
        spinWidth->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        label_3->setText(QCoreApplication::translate("ConversionParameterDialog", "Height", nullptr));
        spinHeight->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        label_4->setText(QCoreApplication::translate("ConversionParameterDialog", "Bitrate", nullptr));
        spinVideoBitrate->setSpecialValueText(QCoreApplication::translate("ConversionParameterDialog", "(auto)", nullptr));
        label_5->setText(QCoreApplication::translate("ConversionParameterDialog", "kb/s", nullptr));
        spinCropTop->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        spinCropLeft->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        lblCrop->setText(QCoreApplication::translate("ConversionParameterDialog", "Crop", nullptr));
        spinCropRight->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        spinCropBottom->setSuffix(QCoreApplication::translate("ConversionParameterDialog", " px", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_video), QCoreApplication::translate("ConversionParameterDialog", "Video", nullptr));
        groupCutting->setTitle(QCoreApplication::translate("ConversionParameterDialog", "Cutting", nullptr));
        btnInteractiveCutting->setText(QCoreApplication::translate("ConversionParameterDialog", "Cut", "Cut video; select a range to convert"));
        btnPreview->setText(QCoreApplication::translate("ConversionParameterDialog", "&Preview", nullptr));
        groupScaling->setTitle(QCoreApplication::translate("ConversionParameterDialog", "Scaling", nullptr));
        lblSpeed->setText(QCoreApplication::translate("ConversionParameterDialog", "Speed", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_time), QCoreApplication::translate("ConversionParameterDialog", "Time", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConversionParameterDialog", "FFmpeg", nullptr));
        lblFFmpegOptions->setText(QCoreApplication::translate("ConversionParameterDialog", "Additional FFmpeg Options", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_advanced), QCoreApplication::translate("ConversionParameterDialog", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConversionParameterDialog: public Ui_ConversionParameterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSIONPARAMETERDIALOG_H
