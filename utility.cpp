#include "utility.h"
#include <QFile>
#include <QDebug>

Utility::Utility()
{
}

Keyboard* Utility::kbQWidget = 0;
QSettings* Utility::settings = 0;

void Utility::setKeyBoard(Keyboard * kb)
{
    kbQWidget = kb;
}

void Utility::setSettings(QSettings * s)
{
    settings = s;
}

/*

bool Utility::saveConfig(const QJsonObject &config)
{
    QFile configFile("config.json");

    if(!configFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug()<<"config.json open failed";
        return false;
    }

    QJsonDocument saveDoc(config);
    configFile.write(saveDoc.toJson());
    return true;
}

bool Utility::readConfig(QJsonObject &config)
{
    QFile configFile("config.json");

    if(!configFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug()<<"config.json open failed";
        return false;
    }

    QByteArray saveData = configFile.readAll();
    QJsonDocument saveDoc(QJsonDocument::fromJson(saveData));
    config = saveDoc.object();
    return true;
}

*/
