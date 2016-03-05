#include "maindialog.h"
#include "keyboard.h"
#include "utility.h"
#include "ipconfigdialog.h"
#include <QApplication>
#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setAutoSipEnabled(true);

    Keyboard * kb = new Keyboard();
    Utility::setKeyBoard(kb);

    QSettings * s = new QSettings("configs/config.ini", QSettings::IniFormat);
    Utility::setSettings(s);

    MainDialog w;
    w.show();

    return a.exec();
}
