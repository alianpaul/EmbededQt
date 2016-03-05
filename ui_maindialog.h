/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created: Sat Mar 5 17:19:13 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *St_ipLabel;
    QLabel *St_maskLabel;
    QPushButton *St_ipPushButton;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLabel *St_serialLabel;
    QPushButton *St_serialRunPushButton;
    QPushButton *St_serialStopPushButton;
    QLabel *label_4;
    QLabel *St_serialSetLabel;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLabel *St_nbdLabel;
    QPushButton *St_nbdConnectPushButton;
    QPushButton *St_nbdStopPushButton;
    QLabel *label_5;
    QLabel *St_nbdSetLabel;
    QWidget *tab_2;
    QPushButton *Se_SetpushButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Se_CSComboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Se_SIPLabel;
    QLineEdit *Se_SIPLineEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *Se_SerialComboBox;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Se_SPortLabel;
    QLineEdit *Se_SPortlineEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QComboBox *Se_BRateComboBox;
    QPushButton *Se_nbdPushButton;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *Se_LocalPortLabel;
    QLineEdit *Se_LocalPortLineEdit;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QLineEdit *Se_nbdserverLineEdit;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(726, 422);
        horizontalLayout_2 = new QHBoxLayout(MainDialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget = new QTabWidget(MainDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 651, 91));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        St_ipLabel = new QLabel(groupBox);
        St_ipLabel->setObjectName(QString::fromUtf8("St_ipLabel"));

        horizontalLayout->addWidget(St_ipLabel);

        St_maskLabel = new QLabel(groupBox);
        St_maskLabel->setObjectName(QString::fromUtf8("St_maskLabel"));

        horizontalLayout->addWidget(St_maskLabel);

        St_ipPushButton = new QPushButton(groupBox);
        St_ipPushButton->setObjectName(QString::fromUtf8("St_ipPushButton"));

        horizontalLayout->addWidget(St_ipPushButton);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 681, 101));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 301, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        St_serialLabel = new QLabel(layoutWidget);
        St_serialLabel->setObjectName(QString::fromUtf8("St_serialLabel"));

        horizontalLayout_3->addWidget(St_serialLabel);

        St_serialRunPushButton = new QPushButton(layoutWidget);
        St_serialRunPushButton->setObjectName(QString::fromUtf8("St_serialRunPushButton"));

        horizontalLayout_3->addWidget(St_serialRunPushButton);

        St_serialStopPushButton = new QPushButton(layoutWidget);
        St_serialStopPushButton->setObjectName(QString::fromUtf8("St_serialStopPushButton"));

        horizontalLayout_3->addWidget(St_serialStopPushButton);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 47, 15));
        St_serialSetLabel = new QLabel(groupBox_2);
        St_serialSetLabel->setObjectName(QString::fromUtf8("St_serialSetLabel"));
        St_serialSetLabel->setGeometry(QRect(60, 60, 611, 16));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 240, 681, 101));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 324, 25));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        St_nbdLabel = new QLabel(layoutWidget1);
        St_nbdLabel->setObjectName(QString::fromUtf8("St_nbdLabel"));

        horizontalLayout_10->addWidget(St_nbdLabel);

        St_nbdConnectPushButton = new QPushButton(layoutWidget1);
        St_nbdConnectPushButton->setObjectName(QString::fromUtf8("St_nbdConnectPushButton"));

        horizontalLayout_10->addWidget(St_nbdConnectPushButton);

        St_nbdStopPushButton = new QPushButton(layoutWidget1);
        St_nbdStopPushButton->setObjectName(QString::fromUtf8("St_nbdStopPushButton"));

        horizontalLayout_10->addWidget(St_nbdStopPushButton);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 60, 51, 16));
        St_nbdSetLabel = new QLabel(groupBox_3);
        St_nbdSetLabel->setObjectName(QString::fromUtf8("St_nbdSetLabel"));
        St_nbdSetLabel->setGeometry(QRect(60, 60, 611, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Se_SetpushButton = new QPushButton(tab_2);
        Se_SetpushButton->setObjectName(QString::fromUtf8("Se_SetpushButton"));
        Se_SetpushButton->setGeometry(QRect(520, 120, 80, 23));
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 231, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        Se_CSComboBox = new QComboBox(layoutWidget2);
        Se_CSComboBox->setObjectName(QString::fromUtf8("Se_CSComboBox"));

        horizontalLayout_4->addWidget(Se_CSComboBox);

        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(290, 50, 191, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Se_SIPLabel = new QLabel(layoutWidget3);
        Se_SIPLabel->setObjectName(QString::fromUtf8("Se_SIPLabel"));

        horizontalLayout_5->addWidget(Se_SIPLabel);

        Se_SIPLineEdit = new QLineEdit(layoutWidget3);
        Se_SIPLineEdit->setObjectName(QString::fromUtf8("Se_SIPLineEdit"));

        horizontalLayout_5->addWidget(Se_SIPLineEdit);

        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 100, 125, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        Se_SerialComboBox = new QComboBox(layoutWidget4);
        Se_SerialComboBox->setObjectName(QString::fromUtf8("Se_SerialComboBox"));

        horizontalLayout_6->addWidget(Se_SerialComboBox);

        layoutWidget5 = new QWidget(tab_2);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(530, 50, 161, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        Se_SPortLabel = new QLabel(layoutWidget5);
        Se_SPortLabel->setObjectName(QString::fromUtf8("Se_SPortLabel"));

        horizontalLayout_7->addWidget(Se_SPortLabel);

        Se_SPortlineEdit = new QLineEdit(layoutWidget5);
        Se_SPortlineEdit->setObjectName(QString::fromUtf8("Se_SPortlineEdit"));

        horizontalLayout_7->addWidget(Se_SPortlineEdit);

        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 150, 150, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        Se_BRateComboBox = new QComboBox(layoutWidget6);
        Se_BRateComboBox->setObjectName(QString::fromUtf8("Se_BRateComboBox"));

        horizontalLayout_8->addWidget(Se_BRateComboBox);

        Se_nbdPushButton = new QPushButton(tab_2);
        Se_nbdPushButton->setObjectName(QString::fromUtf8("Se_nbdPushButton"));
        Se_nbdPushButton->setGeometry(QRect(520, 250, 80, 23));
        layoutWidget7 = new QWidget(tab_2);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(290, 100, 196, 25));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        Se_LocalPortLabel = new QLabel(layoutWidget7);
        Se_LocalPortLabel->setObjectName(QString::fromUtf8("Se_LocalPortLabel"));

        horizontalLayout_9->addWidget(Se_LocalPortLabel);

        Se_LocalPortLineEdit = new QLineEdit(layoutWidget7);
        Se_LocalPortLineEdit->setObjectName(QString::fromUtf8("Se_LocalPortLineEdit"));

        horizontalLayout_9->addWidget(Se_LocalPortLineEdit);

        layoutWidget8 = new QWidget(tab_2);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 250, 191, 25));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget8);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_11->addWidget(label);

        Se_nbdserverLineEdit = new QLineEdit(layoutWidget8);
        Se_nbdserverLineEdit->setObjectName(QString::fromUtf8("Se_nbdserverLineEdit"));

        horizontalLayout_11->addWidget(Se_nbdserverLineEdit);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 121, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 91, 16));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(MainDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainDialog", "IP", 0, QApplication::UnicodeUTF8));
        St_ipLabel->setText(QApplication::translate("MainDialog", "Not Set                           ", 0, QApplication::UnicodeUTF8));
        St_maskLabel->setText(QApplication::translate("MainDialog", "Not Set", 0, QApplication::UnicodeUTF8));
        St_ipPushButton->setText(QApplication::translate("MainDialog", "Modify", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainDialog", "Serial", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainDialog", "Status:", 0, QApplication::UnicodeUTF8));
        St_serialLabel->setText(QApplication::translate("MainDialog", "Stop", 0, QApplication::UnicodeUTF8));
        St_serialRunPushButton->setText(QApplication::translate("MainDialog", "Run", 0, QApplication::UnicodeUTF8));
        St_serialStopPushButton->setText(QApplication::translate("MainDialog", "Stop", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainDialog", "Setting:", 0, QApplication::UnicodeUTF8));
        St_serialSetLabel->setText(QApplication::translate("MainDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainDialog", "NBD", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainDialog", "Status:", 0, QApplication::UnicodeUTF8));
        St_nbdLabel->setText(QApplication::translate("MainDialog", "Stop", 0, QApplication::UnicodeUTF8));
        St_nbdConnectPushButton->setText(QApplication::translate("MainDialog", "Connect", 0, QApplication::UnicodeUTF8));
        St_nbdStopPushButton->setText(QApplication::translate("MainDialog", "Stop", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainDialog", "Setting:", 0, QApplication::UnicodeUTF8));
        St_nbdSetLabel->setText(QApplication::translate("MainDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainDialog", "Status", 0, QApplication::UnicodeUTF8));
        Se_SetpushButton->setText(QApplication::translate("MainDialog", "Serial Set", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainDialog", "Run as client/server:", 0, QApplication::UnicodeUTF8));
        Se_SIPLabel->setText(QApplication::translate("MainDialog", "Server IP:", 0, QApplication::UnicodeUTF8));
        Se_SIPLineEdit->setInputMask(QApplication::translate("MainDialog", "000.000.000.000", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainDialog", "Serial:", 0, QApplication::UnicodeUTF8));
        Se_SPortLabel->setText(QApplication::translate("MainDialog", "Sever Port:", 0, QApplication::UnicodeUTF8));
        Se_SPortlineEdit->setInputMask(QString());
        label_6->setText(QApplication::translate("MainDialog", "BaudRate:", 0, QApplication::UnicodeUTF8));
        Se_nbdPushButton->setText(QApplication::translate("MainDialog", "Nbd Set", 0, QApplication::UnicodeUTF8));
        Se_LocalPortLabel->setText(QApplication::translate("MainDialog", "Local Port:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainDialog", "Server IP:", 0, QApplication::UnicodeUTF8));
        Se_nbdserverLineEdit->setInputMask(QApplication::translate("MainDialog", "000.000.000.000", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainDialog", "NBD Settings", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainDialog", "Serail Settings", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainDialog", "Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
