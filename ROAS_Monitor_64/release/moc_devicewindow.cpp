/****************************************************************************
** Meta object code from reading C++ file 'devicewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../devicewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceWindow_t {
    QByteArrayData data[45];
    char stringdata0[782];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceWindow_t qt_meta_stringdata_DeviceWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeviceWindow"
QT_MOC_LITERAL(1, 13, 21), // "sigDeviceWindowClosed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "sigChangeOver"
QT_MOC_LITERAL(4, 50, 7), // "chIndex"
QT_MOC_LITERAL(5, 58, 10), // "bitMainSub"
QT_MOC_LITERAL(6, 69, 10), // "sigBtnMain"
QT_MOC_LITERAL(7, 80, 9), // "sigBtnSub"
QT_MOC_LITERAL(8, 90, 14), // "slotDeviceInfo"
QT_MOC_LITERAL(9, 105, 7), // "Device*"
QT_MOC_LITERAL(10, 113, 6), // "device"
QT_MOC_LITERAL(11, 120, 18), // "slotDeviceNameAddr"
QT_MOC_LITERAL(12, 139, 13), // "slotPdMonitor"
QT_MOC_LITERAL(13, 153, 14), // "slotPortSwitch"
QT_MOC_LITERAL(14, 168, 14), // "slotAutoManual"
QT_MOC_LITERAL(15, 183, 19), // "slotDetectionPeriod"
QT_MOC_LITERAL(16, 203, 14), // "slotSwitchTime"
QT_MOC_LITERAL(17, 218, 15), // "slotPdThreshold"
QT_MOC_LITERAL(18, 234, 15), // "slotSetPortName"
QT_MOC_LITERAL(19, 250, 2), // "no"
QT_MOC_LITERAL(20, 253, 12), // "slotPortName"
QT_MOC_LITERAL(21, 266, 17), // "slotSetPortSwitch"
QT_MOC_LITERAL(22, 284, 19), // "slotSetPortSwitchCh"
QT_MOC_LITERAL(23, 304, 17), // "slotSetAutoManual"
QT_MOC_LITERAL(24, 322, 19), // "slotSetAutoManualCh"
QT_MOC_LITERAL(25, 342, 10), // "bitAutoMan"
QT_MOC_LITERAL(26, 353, 15), // "slotShowPdTable"
QT_MOC_LITERAL(27, 369, 11), // "slotBtnMain"
QT_MOC_LITERAL(28, 381, 7), // "portNum"
QT_MOC_LITERAL(29, 389, 10), // "slotBtnSub"
QT_MOC_LITERAL(30, 400, 11), // "slotBtnAuto"
QT_MOC_LITERAL(31, 412, 13), // "slotBtnManual"
QT_MOC_LITERAL(32, 426, 21), // "on_btnAutoAll_clicked"
QT_MOC_LITERAL(33, 448, 23), // "on_btnManualAll_clicked"
QT_MOC_LITERAL(34, 472, 21), // "on_btnMainAll_clicked"
QT_MOC_LITERAL(35, 494, 20), // "on_btnSubAll_clicked"
QT_MOC_LITERAL(36, 515, 30), // "on_actionSetPortName_triggered"
QT_MOC_LITERAL(37, 546, 26), // "on_btnSetScanCycle_clicked"
QT_MOC_LITERAL(38, 573, 32), // "on_btnSetDetectionPeriod_clicked"
QT_MOC_LITERAL(39, 606, 30), // "on_btnSetSwitchingTime_clicked"
QT_MOC_LITERAL(40, 637, 26), // "on_btnSetThreshold_clicked"
QT_MOC_LITERAL(41, 664, 32), // "on_actionSetDeviceInfo_triggered"
QT_MOC_LITERAL(42, 697, 31), // "on_actionSetAlarmMask_triggered"
QT_MOC_LITERAL(43, 729, 26), // "on_actionPdTable_triggered"
QT_MOC_LITERAL(44, 756, 25) // "on_actionGetLog_triggered"

    },
    "DeviceWindow\0sigDeviceWindowClosed\0\0"
    "sigChangeOver\0chIndex\0bitMainSub\0"
    "sigBtnMain\0sigBtnSub\0slotDeviceInfo\0"
    "Device*\0device\0slotDeviceNameAddr\0"
    "slotPdMonitor\0slotPortSwitch\0"
    "slotAutoManual\0slotDetectionPeriod\0"
    "slotSwitchTime\0slotPdThreshold\0"
    "slotSetPortName\0no\0slotPortName\0"
    "slotSetPortSwitch\0slotSetPortSwitchCh\0"
    "slotSetAutoManual\0slotSetAutoManualCh\0"
    "bitAutoMan\0slotShowPdTable\0slotBtnMain\0"
    "portNum\0slotBtnSub\0slotBtnAuto\0"
    "slotBtnManual\0on_btnAutoAll_clicked\0"
    "on_btnManualAll_clicked\0on_btnMainAll_clicked\0"
    "on_btnSubAll_clicked\0"
    "on_actionSetPortName_triggered\0"
    "on_btnSetScanCycle_clicked\0"
    "on_btnSetDetectionPeriod_clicked\0"
    "on_btnSetSwitchingTime_clicked\0"
    "on_btnSetThreshold_clicked\0"
    "on_actionSetDeviceInfo_triggered\0"
    "on_actionSetAlarmMask_triggered\0"
    "on_actionPdTable_triggered\0"
    "on_actionGetLog_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    2,  195,    2, 0x06 /* Public */,
       6,    1,  200,    2, 0x06 /* Public */,
       7,    1,  203,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  206,    2, 0x0a /* Public */,
      11,    1,  209,    2, 0x0a /* Public */,
      12,    1,  212,    2, 0x0a /* Public */,
      13,    1,  215,    2, 0x0a /* Public */,
      14,    1,  218,    2, 0x0a /* Public */,
      15,    1,  221,    2, 0x0a /* Public */,
      16,    1,  224,    2, 0x0a /* Public */,
      17,    1,  227,    2, 0x0a /* Public */,
      18,    2,  230,    2, 0x0a /* Public */,
      20,    2,  235,    2, 0x0a /* Public */,
      21,    1,  240,    2, 0x0a /* Public */,
      22,    3,  243,    2, 0x0a /* Public */,
      23,    1,  250,    2, 0x0a /* Public */,
      24,    3,  253,    2, 0x0a /* Public */,
      26,    0,  260,    2, 0x0a /* Public */,
      27,    1,  261,    2, 0x0a /* Public */,
      29,    1,  264,    2, 0x0a /* Public */,
      30,    1,  267,    2, 0x0a /* Public */,
      31,    1,  270,    2, 0x0a /* Public */,
      32,    0,  273,    2, 0x08 /* Private */,
      33,    0,  274,    2, 0x08 /* Private */,
      34,    0,  275,    2, 0x08 /* Private */,
      35,    0,  276,    2, 0x08 /* Private */,
      36,    0,  277,    2, 0x08 /* Private */,
      37,    0,  278,    2, 0x08 /* Private */,
      38,    0,  279,    2, 0x08 /* Private */,
      39,    0,  280,    2, 0x08 /* Private */,
      40,    0,  281,    2, 0x08 /* Private */,
      41,    0,  282,    2, 0x08 /* Private */,
      42,    0,  283,    2, 0x08 /* Private */,
      43,    0,  284,    2, 0x08 /* Private */,
      44,    0,  285,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    4,    5,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   19,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   19,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UChar, QMetaType::UChar,   10,    4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UChar, QMetaType::UChar,   10,    4,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeviceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceWindow *_t = static_cast<DeviceWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigDeviceWindowClosed(); break;
        case 1: _t->sigChangeOver((*reinterpret_cast< uchar(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 2: _t->sigBtnMain((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 3: _t->sigBtnSub((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 4: _t->slotDeviceInfo((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 5: _t->slotDeviceNameAddr((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 6: _t->slotPdMonitor((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 7: _t->slotPortSwitch((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 8: _t->slotAutoManual((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 9: _t->slotDetectionPeriod((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 10: _t->slotSwitchTime((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 11: _t->slotPdThreshold((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 12: _t->slotSetPortName((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->slotPortName((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->slotSetPortSwitch((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 15: _t->slotSetPortSwitchCh((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 16: _t->slotSetAutoManual((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 17: _t->slotSetAutoManualCh((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 18: _t->slotShowPdTable(); break;
        case 19: _t->slotBtnMain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->slotBtnSub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->slotBtnAuto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->slotBtnManual((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_btnAutoAll_clicked(); break;
        case 24: _t->on_btnManualAll_clicked(); break;
        case 25: _t->on_btnMainAll_clicked(); break;
        case 26: _t->on_btnSubAll_clicked(); break;
        case 27: _t->on_actionSetPortName_triggered(); break;
        case 28: _t->on_btnSetScanCycle_clicked(); break;
        case 29: _t->on_btnSetDetectionPeriod_clicked(); break;
        case 30: _t->on_btnSetSwitchingTime_clicked(); break;
        case 31: _t->on_btnSetThreshold_clicked(); break;
        case 32: _t->on_actionSetDeviceInfo_triggered(); break;
        case 33: _t->on_actionSetAlarmMask_triggered(); break;
        case 34: _t->on_actionPdTable_triggered(); break;
        case 35: _t->on_actionGetLog_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 5:
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
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 17:
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
            typedef void (DeviceWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceWindow::sigDeviceWindowClosed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceWindow::*_t)(uchar , uchar );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceWindow::sigChangeOver)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeviceWindow::*_t)(uchar );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceWindow::sigBtnMain)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DeviceWindow::*_t)(uchar );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceWindow::sigBtnSub)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DeviceWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DeviceWindow.data,
      qt_meta_data_DeviceWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceWindow.stringdata0))
        return static_cast<void*>(const_cast< DeviceWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DeviceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void DeviceWindow::sigDeviceWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DeviceWindow::sigChangeOver(uchar _t1, uchar _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceWindow::sigBtnMain(uchar _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceWindow::sigBtnSub(uchar _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
