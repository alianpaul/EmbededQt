#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include <QString>
#include <QLineEdit>

namespace Ui {
class Keyboard;
}

class Keyboard : public QWidget
{
    Q_OBJECT

public:
    explicit Keyboard(QWidget *parent = 0);
    ~Keyboard();
    void setTriggeredLineEdit(QLineEdit * );

private:
    Ui::Keyboard *ui;
    QString strOutput;
    QLineEdit *triggeredLineEdit;

private slots:
    void on_NormalKey();
    void on_EnterKey();
    void on_ClearKey();
};

#endif // KEYBOARD_H
