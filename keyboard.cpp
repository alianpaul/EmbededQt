#include "keyboard.h"
#include "ui_keyboard.h"

Keyboard::Keyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    connect( ui->pushButton_0, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_1, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_6, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_7, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_8, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_9, SIGNAL(clicked()), this, SLOT(on_NormalKey()));
    connect( ui->pushButton_p, SIGNAL(clicked()), this, SLOT(on_NormalKey()));

    connect( ui->pushButton_c, SIGNAL(clicked()), this, SLOT(on_ClearKey()));

    connect( ui->pushButton_enter, SIGNAL(clicked()), this, SLOT(on_EnterKey()));

    strOutput = "";
    ui->lineEdit->setFocus();
}

Keyboard::~Keyboard()
{
    delete ui;
}

void Keyboard::on_NormalKey()
{
    //get the pressed button
    QPushButton* pressedBtn = (QPushButton* )sender();
    QString strBtn = pressedBtn->text();

    strOutput += strBtn;
    ui->lineEdit->setText(strOutput);
}

void Keyboard::on_EnterKey()
{
    triggeredLineEdit->setText(strOutput);
    strOutput = "";
    ui->lineEdit->setText(strOutput);
    close();
}

void Keyboard::on_ClearKey()
{
    strOutput.remove(strOutput.length() - 1, strOutput.length());
    ui->lineEdit->setText(strOutput);
}

void Keyboard::setTriggeredLineEdit(QLineEdit * lineEdit)
{
    triggeredLineEdit = lineEdit;
}
