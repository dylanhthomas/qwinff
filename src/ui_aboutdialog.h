/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *lblBanner;
    QTabWidget *tabWidget;
    QWidget *tabInfo;
    QVBoxLayout *verticalLayout;
    QTextBrowser *txtInfo;
    QWidget *tabTranslators;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *txtTranslators;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(426, 339);
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblBanner = new QLabel(AboutDialog);
        lblBanner->setObjectName(QString::fromUtf8("lblBanner"));
        lblBanner->setText(QString::fromUtf8(""));
        lblBanner->setPixmap(QPixmap(QString::fromUtf8(":/app/icons/banner.png")));

        verticalLayout_2->addWidget(lblBanner);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabInfo = new QWidget();
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        verticalLayout = new QVBoxLayout(tabInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtInfo = new QTextBrowser(tabInfo);
        txtInfo->setObjectName(QString::fromUtf8("txtInfo"));

        verticalLayout->addWidget(txtInfo);

        tabWidget->addTab(tabInfo, QString());
        tabTranslators = new QWidget();
        tabTranslators->setObjectName(QString::fromUtf8("tabTranslators"));
        verticalLayout_3 = new QVBoxLayout(tabTranslators);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        txtTranslators = new QTextBrowser(tabTranslators);
        txtTranslators->setObjectName(QString::fromUtf8("txtTranslators"));

        verticalLayout_3->addWidget(txtTranslators);

        tabWidget->addTab(tabTranslators, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About QWinFF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfo), QCoreApplication::translate("AboutDialog", "Information", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTranslators), QCoreApplication::translate("AboutDialog", "Translators", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
