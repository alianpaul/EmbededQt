/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created: Sat Mar 5 17:19:13 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keyboard
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_p;
    QPushButton *pushButton_c;
    QPushButton *pushButton_enter;

    void setupUi(QWidget *Keyboard)
    {
        if (Keyboard->objectName().isEmpty())
            Keyboard->setObjectName(QString::fromUtf8("Keyboard"));
        Keyboard->resize(220, 291);
        lineEdit = new QLineEdit(Keyboard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 201, 23));
        pushButton_0 = new QPushButton(Keyboard);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 50, 61, 31));
        pushButton_1 = new QPushButton(Keyboard);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(80, 50, 61, 31));
        pushButton_2 = new QPushButton(Keyboard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 50, 61, 31));
        pushButton_3 = new QPushButton(Keyboard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 100, 61, 31));
        pushButton_4 = new QPushButton(Keyboard);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 100, 61, 31));
        pushButton_5 = new QPushButton(Keyboard);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 100, 61, 31));
        pushButton_6 = new QPushButton(Keyboard);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 150, 61, 31));
        pushButton_7 = new QPushButton(Keyboard);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 150, 61, 31));
        pushButton_8 = new QPushButton(Keyboard);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 150, 61, 31));
        pushButton_9 = new QPushButton(Keyboard);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 200, 61, 31));
        pushButton_p = new QPushButton(Keyboard);
        pushButton_p->setObjectName(QString::fromUtf8("pushButton_p"));
        pushButton_p->setGeometry(QRect(80, 200, 61, 31));
        pushButton_c = new QPushButton(Keyboard);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        pushButton_c->setGeometry(QRect(150, 200, 61, 31));
        pushButton_enter = new QPushButton(Keyboard);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(150, 250, 61, 31));

        retranslateUi(Keyboard);

        QMetaObject::connectSlotsByName(Keyboard);
    } // setupUi

    void retranslateUi(QWidget *Keyboard)
    {
        Keyboard->setWindowTitle(QApplication::translate("Keyboard", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("Keyboard", "0", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("Keyboard", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Keyboard", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Keyboard", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Keyboard", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Keyboard", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Keyboard", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Keyboard", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Keyboard", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("Keyboard", "9", 0, QApplication::UnicodeUTF8));
        pushButton_p->setText(QApplication::translate("Keyboard", ".", 0, QApplication::UnicodeUTF8));
        pushButton_c->setText(QApplication::translate("Keyboard", "C", 0, QApplication::UnicodeUTF8));
        pushButton_enter->setText(QApplication::translate("Keyboard", "Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Keyboard: public Ui_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
