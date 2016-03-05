#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include <QString>

class QProcess;

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public slots:
    void on_StNewIpEntered(const QString & strIp, const QString &strMask);

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();

private slots:
    void on_St_ipPushButton_clicked();

    void on_Se_CSComboBox_activated(const QString &arg1);

    void run_keyboard_lineEdit();

    void on_Se_SetpushButton_clicked();

    void on_St_serialRunPushButton_clicked();

    void on_St_serialStopPushButton_clicked();

    void on_St_nbdConnectPushButton_clicked();

    void on_St_nbdStopPushButton_clicked();

    void on_Se_nbdPushButton_clicked();

private:
    Ui::MainDialog *ui;
    QProcess * serialProcess;
    QProcess * nbdserverProcess;
    QProcess * nbdclientProcess;
};

#endif // MAINDIALOG_H
