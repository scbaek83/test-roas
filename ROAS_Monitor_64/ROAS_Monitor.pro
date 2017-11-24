#-------------------------------------------------
#
# Project created by QtCreator 2017-05-15T10:58:06
#
#-------------------------------------------------

QT       += core gui network serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ROAS_Monitor
TEMPLATE = app

VERSION = 1.00
DEFINES += APP_VERSION=\\\"$$VERSION\\\"
#DEFINES += QT_NO_DEBUG_OUTPUT

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    device.cpp \
    dialog/adddevicedialog.cpp \
    proto.cpp \
    devicewindow.cpp \
    formport.cpp \
    dialog/setportnamedialog.cpp \
    serialcomm.cpp \
    dialog/connectdialog.cpp \
    dialog/alarmmaskdialog.cpp \
    dialog/setdevinfodialog.cpp \
    dialog/passworddialog.cpp \
    qcustomplot.cpp \
    dialog/alarmdialog.cpp \
    dialog/pdtabledialog.cpp \
    dialog/logdatadialog.cpp \
    dialog/aboutdialog.cpp

HEADERS  += mainwindow.h \
    device.h \
    define.h \
    ini.h \
    settings.h \
    dialog/adddevicedialog.h \
    proto.h \
    devicewindow.h \
    formport.h \
    dialog/setportnamedialog.h \
    serialcomm.h \
    dialog/connectdialog.h \
    dialog/alarmmaskdialog.h \
    dialog/setdevinfodialog.h \
    dialog/passworddialog.h \
    qcustomplot.h \
    dialog/alarmdialog.h \
    dialog/pdtabledialog.h \
    dialog/logdatadialog.h \
    dialog/aboutdialog.h

FORMS    += mainwindow.ui \
    dialog/adddevicedialog.ui \
    devicewindow.ui \
    formport.ui \
    dialog/setportnamedialog.ui \
    dialog/connectdialog.ui \
    dialog/alarmmaskdialog.ui \
    dialog/setdevinfodialog.ui \
    dialog/passworddialog.ui \
    dialog/alarmdialog.ui \
    dialog/pdtabledialog.ui \
    dialog/logdatadialog.ui \
    dialog/aboutdialog.ui

RESOURCES += \
    roas_resource.qrc
