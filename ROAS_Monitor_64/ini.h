#ifndef INI_H
#define INI_H

#include <QApplication>
#include <QSettings>

class INI
{
public:
    INI();

    static QString fileName() {
        return QString(qApp->applicationDirPath()+"/device.ini");
    }


    static QString devNameFromIp(QString &ip) {
        QSettings set(fileName(), QSettings::IniFormat);
        QString result = set.value(ip, "none").toString();

        return result;
    }

    static QStringList devIpAll() {
        QSettings set(fileName(), QSettings::IniFormat);
        QStringList result = set.allKeys();

        return result;
    }

    static void addDevice(QString &ip, QString &name) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue(ip, name);
    }

    static void removeDevice(QString &ip) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.remove(ip);
    }

    static void modifyDevName(QString &ip, QString &name) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue(ip, name);
    }

    /*
    static QString devIpFromName(QString &name) {
        QSettings set(fileName(), QSettings::IniFormat);
        QString result = set.value(name, "0.0.0.0").toString();

        return result;
    }

    static QStringList devNameAll() {
        QSettings set(fileName(), QSettings::IniFormat);
        QStringList result = set.allKeys();

        return result;
    }

    static void addDevice(QString &name, QString &ip) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.setValue(name, ip);
    }

    static void removeDevice(QString &name) {
        QSettings set(fileName(), QSettings::IniFormat);
        set.remove(name);
    }

    static void modifyDevName(QString &before, QString &after) {
        if (before == after) return;

        QString ip = devIpFromName(before);
        removeDevice(before);
        addDevice(after, ip);
    }

    static void modifyDevName(QString &ip, QString &name) {
        QStringList listDevName = devNameAll();

        foreach (QString devName, listDevName) {
            QString devIp = devIpFromName(devName);

            if (devIp == ip) {
                removeDevice(devName);
                addDevice(name, devIp);
            }
        }
    }
    */
};

#endif // INI_H
