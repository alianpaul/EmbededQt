#include "ipconfigdialog.h"
#include "ui_ipconfigdialog.h"
#include "utility.h"
#include "keyboard.h"
#include <QProcess>
#include <QMessageBox>
#include <QDebug>
#include <QNetworkInterface>
#include <QHostAddress>
#include <QNetworkAddressEntry>

IpConfigDialog::IpConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IpConfigDialog)
{
    ui->setupUi(this);
    connect(ui->ipLineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
    connect(ui->maskLineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
}

IpConfigDialog::~IpConfigDialog()
{
    delete ui;
    delete lineEditkeyboard;
}

void IpConfigDialog::on_ipSetPushButton_clicked()
{
    //Set the ip
    QString strNewIp = ui->ipLineEdit->text();
    QString strNewMask = ui->maskLineEdit->text();

    QString cmd = QString("ifconfig eth0 %1 netmask %2").arg(strNewIp, strNewMask);
    qDebug() << cmd;
    QProcess qProc(this);
    qProc.start(cmd);
    qProc.waitForFinished();
    if(qProc.exitCode() == 0)
    {
        //save data to a config json
        qDebug()<<qProc.exitCode();
        emit newIpEntered(strNewIp,strNewMask);

        /*
        QJsonObject configJson;
        configJson["ip"] = strNewIp;
        configJson["mask"] = strNewMask;
        Utility::saveConfig(configJson);
        */

        close();
        return;
    }

    QMessageBox::information(this,"Error","Input addresses are wrong");
    return;
}

void IpConfigDialog::run_keyboard_lineEdit()
{
    qDebug() << "run run_keyboard";
    QLineEdit *triggeredLineEdit = (QLineEdit *)sender();
    Utility::kbQWidget->setTriggeredLineEdit(triggeredLineEdit);
    Utility::kbQWidget->show();
}
