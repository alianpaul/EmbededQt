#ifndef UTILITY_H
#define UTILITY_H

#include "keyboard.h"
#include <QSettings>
class Utility
{
public:
    Utility();

    //static bool saveConfig(const QJsonObject &config);

    //static bool readConfig(QJsonObject &config);
    static Keyboard * kbQWidget;
    static QSettings * settings;

    void static setKeyBoard(Keyboard*);
    void static setSettings(QSettings*);

};

#endif // UTILITY_H
