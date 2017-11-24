/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata0[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "sigCloseMainWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "slotDeviceConnected"
QT_MOC_LITERAL(4, 51, 7), // "Device*"
QT_MOC_LITERAL(5, 59, 6), // "device"
QT_MOC_LITERAL(6, 66, 22), // "slotDeviceDisconnected"
QT_MOC_LITERAL(7, 89, 16), // "slotDeviceWindow"
QT_MOC_LITERAL(8, 106, 22), // "slotDeviceWindowClosed"
QT_MOC_LITERAL(9, 129, 15), // "slotAlarmStatus"
QT_MOC_LITERAL(10, 145, 11), // "alarmStatus"
QT_MOC_LITERAL(11, 157, 7), // "chIndex"
QT_MOC_LITERAL(12, 165, 7), // "mainSub"
QT_MOC_LITERAL(13, 173, 8), // "timeInfo"
QT_MOC_LITERAL(14, 182, 17), // "slotPortSwitching"
QT_MOC_LITERAL(15, 200, 20), // "slotResSetPortSwitch"
QT_MOC_LITERAL(16, 221, 10), // "bitMainSub"
QT_MOC_LITERAL(17, 232, 20), // "slotResSetAutoManual"
QT_MOC_LITERAL(18, 253, 10), // "bitAutoMan"
QT_MOC_LITERAL(19, 264, 24), // "on_btnClearEvent_clicked"
QT_MOC_LITERAL(20, 289, 18), // "on_btnTest_clicked"
QT_MOC_LITERAL(21, 308, 26), // "on_actionConnect_triggered"
QT_MOC_LITERAL(22, 335, 29), // "on_actionDisconnect_triggered"
QT_MOC_LITERAL(23, 365, 28), // "on_actionDeviceAdd_triggered"
QT_MOC_LITERAL(24, 394, 31), // "on_actionDeviceDelete_triggered"
QT_MOC_LITERAL(25, 426, 31), // "on_treeDeviceList_doubleClicked"
QT_MOC_LITERAL(26, 458, 5), // "index"
QT_MOC_LITERAL(27, 464, 29), // "on_actionConnectUSB_triggered"
QT_MOC_LITERAL(28, 494, 24) // "on_actionAbout_triggered"

    },
    "MainWindow\0sigCloseMainWindow\0\0"
    "slotDeviceConnected\0Device*\0device\0"
    "slotDeviceDisconnected\0slotDeviceWindow\0"
    "slotDeviceWindowClosed\0slotAlarmStatus\0"
    "alarmStatus\0chIndex\0mainSub\0timeInfo\0"
    "slotPortSwitching\0slotResSetPortSwitch\0"
    "bitMainSub\0slotResSetAutoManual\0"
    "bitAutoMan\0on_btnClearEvent_clicked\0"
    "on_btnTest_clicked\0on_actionConnect_triggered\0"
    "on_actionDisconnect_triggered\0"
    "on_actionDeviceAdd_triggered\0"
    "on_actionDeviceDelete_triggered\0"
    "on_treeDeviceList_doubleClicked\0index\0"
    "on_actionConnectUSB_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  110,    2, 0x0a /* Public */,
       6,    1,  113,    2, 0x0a /* Public */,
       7,    1,  116,    2, 0x0a /* Public */,
       8,    0,  119,    2, 0x0a /* Public */,
       9,    1,  120,    2, 0x0a /* Public */,
       9,    4,  123,    2, 0x0a /* Public */,
      14,    4,  132,    2, 0x0a /* Public */,
      15,    4,  141,    2, 0x0a /* Public */,
      17,    4,  150,    2, 0x0a /* Public */,
      19,    0,  159,    2, 0x08 /* Private */,
      20,    0,  160,    2, 0x08 /* Private */,
      21,    0,  161,    2, 0x08 /* Private */,
      22,    0,  162,    2, 0x08 /* Private */,
      23,    0,  163,    2, 0x08 /* Private */,
      24,    0,  164,    2, 0x08 /* Private */,
      25,    1,  165,    2, 0x08 /* Private */,
      27,    0,  168,    2, 0x08 /* Private */,
      28,    0,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    5,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UChar, QMetaType::UShort, QMetaType::QString,    5,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    5,   11,   16,   13,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    5,   11,   18,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   26,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigCloseMainWindow(); break;
        case 1: _t->slotDeviceConnected((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 2: _t->slotDeviceDisconnected((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 3: _t->slotDeviceWindow((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 4: _t->slotDeviceWindowClosed(); break;
        case 5: _t->slotAlarmStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slotAlarmStatus((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->slotPortSwitching((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< ushort(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: _t->slotResSetPortSwitch((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->slotResSetAutoManual((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 10: _t->on_btnClearEvent_clicked(); break;
        case 11: _t->on_btnTest_clicked(); break;
        case 12: _t->on_actionConnect_triggered(); break;
        case 13: _t->on_actionDisconnect_triggered(); break;
        case 14: _t->on_actionDeviceAdd_triggered(); break;
        case 15: _t->on_actionDeviceDelete_triggered(); break;
        case 16: _t->on_treeDeviceList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->on_actionConnectUSB_triggered(); break;
        case 18: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sigCloseMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sigCloseMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
