/****************************************************************************
** Meta object code from reading C++ file 'formport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../formport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormPort_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormPort_t qt_meta_stringdata_FormPort = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormPort"
QT_MOC_LITERAL(1, 9, 10), // "sigBtnMain"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "portNum"
QT_MOC_LITERAL(4, 29, 9), // "sigBtnSub"
QT_MOC_LITERAL(5, 39, 10), // "sigBtnAuto"
QT_MOC_LITERAL(6, 50, 12), // "sigBtnManual"
QT_MOC_LITERAL(7, 63, 18), // "on_btnMain_clicked"
QT_MOC_LITERAL(8, 82, 17), // "on_btnSub_clicked"
QT_MOC_LITERAL(9, 100, 18), // "on_btnAuto_clicked"
QT_MOC_LITERAL(10, 119, 20) // "on_btnManual_clicked"

    },
    "FormPort\0sigBtnMain\0\0portNum\0sigBtnSub\0"
    "sigBtnAuto\0sigBtnManual\0on_btnMain_clicked\0"
    "on_btnSub_clicked\0on_btnAuto_clicked\0"
    "on_btnManual_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormPort *_t = static_cast<FormPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigBtnMain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigBtnSub((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sigBtnAuto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sigBtnManual((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_btnMain_clicked(); break;
        case 5: _t->on_btnSub_clicked(); break;
        case 6: _t->on_btnAuto_clicked(); break;
        case 7: _t->on_btnManual_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormPort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormPort::sigBtnMain)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FormPort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormPort::sigBtnSub)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FormPort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormPort::sigBtnAuto)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FormPort::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormPort::sigBtnManual)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject FormPort::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormPort.data,
      qt_meta_data_FormPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormPort.stringdata0))
        return static_cast<void*>(const_cast< FormPort*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FormPort::sigBtnMain(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormPort::sigBtnSub(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormPort::sigBtnAuto(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormPort::sigBtnManual(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
