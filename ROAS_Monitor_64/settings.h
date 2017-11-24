#ifndef SETTINGS_H
#define SETTINGS_H

#include <QApplication>
#include <QSettings>

class Settings
{
public:
    Settings();

    static QString fileName() {
        return QString(qApp->applicationDirPath()+"/settings.ini");
    }

    static int scanCycle() {
        QSettings set(fileName(), QSettings::IniFormat);
        int time = set.value("scancycle", 1).toInt();
        return time;
    }
    static void setScanCycle(int time) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue("scancycle", time);
    }

    static int serialPortCom() {
        QSettings set(fileName(), QSettings::IniFormat);
        int com = set.value("serialport", 1).toInt();
        return com;
    }
    static void setSerialPortCom(int com) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue("serialport", com);
    }

    static bool autoConnect() {
        QSettings set(fileName(), QSettings::IniFormat);
        bool isAuto = set.value("autoconnect", false).toBool();
        return isAuto;
    }
    static void setAutoConnect(bool isAuto) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue("autoconnect", isAuto);
    }

};

#endif // SETTINGS_H
