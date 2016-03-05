#ifndef IPCONFIGDIALOG_H
#define IPCONFIGDIALOG_H

#include <QDialog>
#include <QString>

class Keyboard;

namespace Ui {
class IpConfigDialog;
}

class IpConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit IpConfigDialog(QWidget *parent = 0);
    ~IpConfigDialog();

private slots:
    void on_ipSetPushButton_clicked();
    void run_keyboard_lineEdit();

private:
    Ui::IpConfigDialog *ui;
    Keyboard *lineEditkeyboard;

signals:
    void newIpEntered(const QString &strIP, const QString &strMask);
};

#endif // IPCONFIGDIALOG_H
