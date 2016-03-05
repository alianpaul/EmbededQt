#include "maindialog.h"
#include "ui_maindialog.h"
#include <QCoreApplication>
#include <QApplication>
#include <QMessageBox>
#include <QInputDialog>
#include <QNetworkInterface>
#include <QNetworkAddressEntry>
#include <QHostAddress>
#include <QDebug>
#include "ipconfigdialog.h"
#include "utility.h"
#include <QSettings>
#include <QProcess>

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);

    if(Utility::settings->contains("ip"))
    {
        QProcess ipset;
        QStringList arg;
        arg << "eth0" << Utility::settings->value("ip").toString() <<
               "netmask" << Utility::settings->value("mask").toString();

        ipset.start("ifconfig", arg);
        ipset.waitForFinished();
        if(ipset.exitCode() != 0)
        {
            qDebug() << "ini ifconfig fail";
        }
    }

    QNetworkInterface eth0 = QNetworkInterface::interfaceFromName("eth0");
    QList<QNetworkAddressEntry> ips = eth0.addressEntries();
    if(!ips.isEmpty())
    {
        QNetworkAddressEntry ipEntry = ips.first();
        QHostAddress ipAddr = ipEntry.ip();
        QHostAddress maskAddr = ipEntry.netmask();

        Utility::settings->setValue("ip", ipAddr.toString());
        Utility::settings->setValue("mask", maskAddr.toString());

        ui->St_ipLabel->setText(ipAddr.toString());
        ui->St_maskLabel->setText(maskAddr.toString());


    }

    /*process*/
    serialProcess = new QProcess();
    nbdserverProcess = new QProcess();
    nbdclientProcess = new QProcess();

    /*start the nbd server*/
    QStringList arg;
    arg << "-C" << "/opt/Demo/nbd.server.config";

    nbdserverProcess->start("/opt/Demo/nbd-server", arg);
    QString output(nbdserverProcess->readAll());
    if(nbdserverProcess->pid() != 0)
    {
        qDebug() << "nbd server start success";
    }else {
        qDebug() << "ndb server start failed";
        qDebug() << output;
    }

    //Set Serial Tab
    /* local serial ports
     * com3: ttyO3
     * com2: ttyO2
     * */
    ui->Se_SerialComboBox->addItem("ttyO2");
    ui->Se_SerialComboBox->addItem("ttyO3");

    ui->Se_CSComboBox->addItem("Client");
    ui->Se_CSComboBox->addItem("Server");

    ui->Se_BRateComboBox->addItem("9600");
    ui->Se_BRateComboBox->addItem("14400");
    ui->Se_BRateComboBox->addItem("19200");
    ui->Se_BRateComboBox->addItem("38400");
    ui->Se_BRateComboBox->addItem("57600");
    ui->Se_BRateComboBox->addItem("115200");

    /*disable the stop button*/
    ui->St_serialStopPushButton->setEnabled(false);
    ui->St_nbdStopPushButton->setEnabled(false);

    /*read previous setting*/
    if(Utility::settings->contains("serial_mode"))
    {
        /*have previous settings*/
        ui->St_serialSetLabel->setText(
                    " Mode: "+ Utility::settings->value("serial_mode").toString() +
                    " BaudRate: "+ Utility::settings->value("serial_baudrate").toString() +
                    " COM: " + Utility::settings->value("serial_com").toString());
        if(Utility::settings->value("serial_mode").toString() == "Client")
        {
            ui->St_serialSetLabel->setText(ui->St_serialLabel->text() +
                                           " Remote Server IP: " + Utility::settings->value("serial_server_ip").toString() +
                                           " Remote Server Port: " + Utility::settings->value("serial_server_port").toString());
        }else{
            ui->St_serialSetLabel->setText(ui->St_serialSetLabel->text() +
                                        " Port: " + Utility::settings->value("serial_local_port").toString());
        }
    }else{
        ui->St_serialSetLabel->setText("Not Set");
    }

    if(Utility::settings->contains("nbd_server_ip"))
    {
        ui->St_nbdSetLabel->setText("Remote Server IP:" + Utility::settings->value("nbd_server_ip").toString());
    }else{
        ui->St_nbdSetLabel->setText("Not Set");
    }

    connect(ui->Se_SIPLineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
    connect(ui->Se_SPortlineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
    connect(ui->Se_LocalPortLineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
    connect(ui->Se_nbdserverLineEdit, SIGNAL(selectionChanged()), this, SLOT(run_keyboard_lineEdit()));
}

MainDialog::~MainDialog()
{
    delete ui;
}


void MainDialog::on_StNewIpEntered(const QString &strIp, const QString &strMask)
{
    ui->St_ipLabel->setText(strIp);
    ui->St_maskLabel->setText(strMask);

    Utility::settings->setValue("ip", strIp);
    Utility::settings->setValue("mask", strMask);
}

void MainDialog::on_St_ipPushButton_clicked()
{
    IpConfigDialog *ipConDialog = new IpConfigDialog();
    //ipConDialog.setModal(true);

    connect(ipConDialog, SIGNAL(newIpEntered(const QString &, const QString &)),
            this, SLOT(on_StNewIpEntered(const QString &, const QString &)));
    qDebug() << "new3";
    ipConDialog->show();
}

void MainDialog::on_Se_CSComboBox_activated(const QString &strCS)
{
    if(strCS == "Server")
    {
        //qDebug() << "Client Selected";
        ui->Se_SIPLabel->setText("<font color=\"#CCCCCC\">Server IP:</font>");
        ui->Se_SPortLabel->setText("<font color=\"#CCCCCC\">Server Port:</font>");
        ui->Se_SIPLineEdit->setDisabled(true);
        ui->Se_SPortlineEdit->setDisabled(true);
        ui->Se_LocalPortLabel->setText("Local IP:");
        ui->Se_LocalPortLineEdit->setDisabled(false);

    }else
    {
        ui->Se_SIPLabel->setText("Server IP");
        ui->Se_SPortLabel->setText("Server Port");
        ui->Se_SIPLineEdit->setDisabled(false);
        ui->Se_SPortlineEdit->setDisabled(false);
        ui->Se_LocalPortLabel->setText("<font color=\"#CCCCCC\">Local Port:</font>");
        ui->Se_LocalPortLineEdit->setDisabled(true);
    }
}

void MainDialog::run_keyboard_lineEdit()
{
    //qDebug() << "run run_keyboard";
    QLineEdit *triggeredLineEdit = (QLineEdit *)sender();
    Utility::kbQWidget->setTriggeredLineEdit(triggeredLineEdit);
    Utility::kbQWidget->show();
}

void MainDialog::on_Se_SetpushButton_clicked()
{


    if(ui->Se_CSComboBox->currentText() == "Client")
    {
        Utility::settings->setValue("serial_server_ip", ui->Se_SIPLineEdit->text());
        Utility::settings->setValue("serial_server_port", ui->Se_SPortlineEdit->text());
    }else
    {
        Utility::settings->setValue("serial_local_port", ui->Se_LocalPortLineEdit->text());
    }
    Utility::settings->setValue("serial_mode", ui->Se_CSComboBox->currentText());
    Utility::settings->setValue("serial_com", "/dev/" + ui->Se_SerialComboBox->currentText());
    Utility::settings->setValue("serial_baudrate", ui->Se_BRateComboBox->currentText());

    /*update the status setting*/
    if(Utility::settings->contains("serial_mode"))
    {
        /*have previous settings*/
        ui->St_serialSetLabel->setText(
                    " Mode: "+ Utility::settings->value("serial_mode").toString() +
                    " BaudRate: "+ Utility::settings->value("serial_baudrate").toString() +
                    " COM: " + Utility::settings->value("serial_com").toString());

        if(Utility::settings->value("serial_mode").toString() == "Client")
        {
            ui->St_serialSetLabel->setText(ui->St_serialSetLabel->text() +
                                           " Remote Server IP: " + Utility::settings->value("serial_server_ip").toString() +
                                           " Remote Server Port: " + Utility::settings->value("serial_server_port").toString());
        }else{
            ui->St_serialSetLabel->setText(ui->St_serialSetLabel->text() +
                                        " Port: " + Utility::settings->value("serial_local_port").toString());
        }
    }else{
        ui->St_serialSetLabel->setText("Not Set");
    }
}

void MainDialog::on_St_serialRunPushButton_clicked()
{
    if(!Utility::settings->contains("serial_mode")){
        qDebug() << "Please set the serial";
        return;
    }

    /*prepare the arguments*/
    QStringList arg;
    if(Utility::settings->value("serial_mode").toString() == "Client")
    {
        qDebug() << "serial run as client";
        arg << "-d" <<
               "-r" << Utility::settings->value("serial_server_ip").toString() <<
               "-p" << Utility::settings->value("serial_server_port").toString() <<
               "-s" << "\""+Utility::settings->value("serial_baudrate").toString()+" raw\"" <<
               Utility::settings->value("serial_com").toString() <<
               "&";
        qDebug() << arg;

    }else
    {
        qDebug() << "serial run as server";
        arg << "-d" <<
               "-p" << Utility::settings->value("serial_local_port").toString() <<
               "-s" << "\""+Utility::settings->value("serial_baudrate").toString()+" raw\"" <<
               Utility::settings->value("serial_com").toString() <<
               "&";
        qDebug() << arg;
    }
    /*
    QString port = Utility::settings->value("serial_port").toString();
    arg << "-d" << "-p" << "";

    process.start("/opt/Demo/remserial", arg);
    process.waitForFinished();
    QString output(process.readAll());

    qDebug() << output;
    */

    serialProcess->start("/opt/Demo/remserial", arg);

    //run success
    if(serialProcess->pid() == 0)
    {
        //run fail
        QMessageBox::information(this, "Error", "Setting Error, Cannot Run The Program");
        return;
    }

    /*toggle buttons*/
    ui->St_serialRunPushButton->setEnabled(false);
    ui->St_serialStopPushButton->setEnabled(true);

    /*is set, so run the remserial*/
    ui->St_serialLabel->setText("Running");

}

void MainDialog::on_St_serialStopPushButton_clicked()
{
    /*stop the running remserial*/
    serialProcess->kill();
    ui->St_serialLabel->setText("Stop");

    /*toggle buttons*/
    ui->St_serialStopPushButton->setEnabled(false);
    ui->St_serialRunPushButton->setEnabled(true);
}

void MainDialog::on_St_nbdConnectPushButton_clicked()
{
    if(!Utility::settings->contains("nbd_server_ip"))
    {
        QMessageBox::information(this, "Error", "nbd server not set");
        return;
    }

    /*already set the nbd server*/
    QStringList arg;
    arg << "-N" << "exportusb" <<
           Utility::settings->value("nbd_server_ip").toString() <<
           "/dev/nbd0";

    nbdclientProcess->start("/opt/Demo/nbd-client", arg);

    nbdclientProcess->waitForFinished();

    qDebug() <<"nbd exit code"<< nbdclientProcess->exitCode();

    if(nbdclientProcess->exitCode() != 0)
    {
        qDebug() << "nbdclient failed";
        QString output(nbdclientProcess->readAll());
        qDebug() << output;
        QMessageBox::information(this, "Error", "make sure you set the correct ip and inplug the server usb first");
        nbdclientProcess->kill();
        return;
    }



    QProcess insmodp;
    QStringList arg1;
    arg1 << "/opt/Demo/gadget/g_mass_storage.ko" << "file=/dev/nbd0";
    insmodp.start("insmod", arg1);
    insmodp.waitForFinished();
    if(insmodp.exitCode() != QProcess::NormalExit){
        nbdclientProcess->kill();
        qDebug() << "insmod failed";
        return;
    }

    /*toggle buttons*/
    ui->St_nbdLabel->setText("Running");
    ui->St_nbdConnectPushButton->setEnabled(false);
    ui->St_nbdStopPushButton->setEnabled(true);
}

void MainDialog::on_St_nbdStopPushButton_clicked()
{


    //nbdclientProcess->kill();
    /*
    QStringList arg;
    arg << "-d" << "/dev/nbd0";

    nbdclientProcess->start("/opt/Demo/nbd-client", arg);
    nbdclientProcess->waitForFinished();
    qDebug() <<"nbd disconnect exit code"<<nbdclientProcess->exitCode();
    QString output(nbdclientProcess->readAll());
    if(nbdclientProcess->exitCode() != 0)
    {
        qDebug() << "nbd disconnect failed\n" << output;
        return;
    }
    */

    QProcess rmmodp;
    QStringList arg1;
    arg1 << "g_mass_storage.ko";
    rmmodp.start("rmmod", arg1);
    rmmodp.waitForFinished();
    QString output = rmmodp.readAll();

    if(rmmodp.exitCode() != 0){
        qDebug() << "rmmod failed\n" << output;
        return;
    }

    ui->St_nbdLabel->setText("Stop");
    /*toggle buttons*/
    ui->St_nbdConnectPushButton->setEnabled(true);
    ui->St_nbdStopPushButton->setEnabled(false);
}

void MainDialog::on_Se_nbdPushButton_clicked()
{
    Utility::settings->setValue("nbd_server_ip", ui->Se_nbdserverLineEdit->text());
    ui->St_nbdSetLabel->setText(ui->Se_nbdserverLineEdit->text());
}
