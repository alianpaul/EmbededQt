/********************************************************************************
** Form generated from reading UI file 'ipconfigdialog.ui'
**
** Created: Sat Mar 5 17:19:13 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPCONFIGDIALOG_H
#define UI_IPCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IpConfigDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ipLineEdit;
    QLineEdit *maskLineEdit;
    QPushButton *ipSetPushButton;

    void setupUi(QDialog *IpConfigDialog)
    {
        if (IpConfigDialog->objectName().isEmpty())
            IpConfigDialog->setObjectName(QString::fromUtf8("IpConfigDialog"));
        IpConfigDialog->resize(507, 106);
        groupBox = new QGroupBox(IpConfigDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 65));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ipLineEdit = new QLineEdit(groupBox);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));

        horizontalLayout->addWidget(ipLineEdit);

        maskLineEdit = new QLineEdit(groupBox);
        maskLineEdit->setObjectName(QString::fromUtf8("maskLineEdit"));

        horizontalLayout->addWidget(maskLineEdit);

        ipSetPushButton = new QPushButton(groupBox);
        ipSetPushButton->setObjectName(QString::fromUtf8("ipSetPushButton"));

        horizontalLayout->addWidget(ipSetPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(IpConfigDialog);

        QMetaObject::connectSlotsByName(IpConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *IpConfigDialog)
    {
        IpConfigDialog->setWindowTitle(QApplication::translate("IpConfigDialog", "ip config", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("IpConfigDialog", "Input Ip", 0, QApplication::UnicodeUTF8));
        ipLineEdit->setInputMask(QApplication::translate("IpConfigDialog", "000.000.000.000", 0, QApplication::UnicodeUTF8));
        maskLineEdit->setInputMask(QApplication::translate("IpConfigDialog", "000.000.000.000", 0, QApplication::UnicodeUTF8));
        ipSetPushButton->setText(QApplication::translate("IpConfigDialog", "Set", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IpConfigDialog: public Ui_IpConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCONFIGDIALOG_H
