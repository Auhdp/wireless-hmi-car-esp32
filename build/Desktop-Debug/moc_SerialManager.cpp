/****************************************************************************
** Meta object code from reading C++ file 'SerialManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SerialManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialManager_t {
    QByteArrayData data[17];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialManager_t qt_meta_stringdata_SerialManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialManager"
QT_MOC_LITERAL(1, 14, 22), // "wifiScanResultReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "scanData"
QT_MOC_LITERAL(4, 47, 20), // "wifiConnectionResult"
QT_MOC_LITERAL(5, 68, 4), // "ssid"
QT_MOC_LITERAL(6, 73, 7), // "success"
QT_MOC_LITERAL(7, 81, 20), // "wifiListModelChanged"
QT_MOC_LITERAL(8, 102, 12), // "callReceived"
QT_MOC_LITERAL(9, 115, 11), // "smsReceived"
QT_MOC_LITERAL(10, 127, 8), // "readData"
QT_MOC_LITERAL(11, 136, 11), // "sendCommand"
QT_MOC_LITERAL(12, 148, 3), // "cmd"
QT_MOC_LITERAL(13, 152, 13), // "connectToWiFi"
QT_MOC_LITERAL(14, 166, 8), // "password"
QT_MOC_LITERAL(15, 175, 13), // "wifiListModel"
QT_MOC_LITERAL(16, 189, 17) // "QStringListModel*"

    },
    "SerialManager\0wifiScanResultReceived\0"
    "\0scanData\0wifiConnectionResult\0ssid\0"
    "success\0wifiListModelChanged\0callReceived\0"
    "smsReceived\0readData\0sendCommand\0cmd\0"
    "connectToWiFi\0password\0wifiListModel\0"
    "QStringListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,
       7,    0,   62,    2, 0x06 /* Public */,
       8,    0,   63,    2, 0x06 /* Public */,
       9,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   65,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   66,    2, 0x02 /* Public */,
      13,    2,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x00495009,

 // properties: notify_signal_id
       2,

       0        // eod
};

void SerialManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wifiScanResultReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->wifiConnectionResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->wifiListModelChanged(); break;
        case 3: _t->callReceived(); break;
        case 4: _t->smsReceived(); break;
        case 5: _t->readData(); break;
        case 6: _t->sendCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->connectToWiFi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::wifiScanResultReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::wifiConnectionResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::wifiListModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::callReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::smsReceived)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SerialManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringListModel**>(_v) = _t->wifiListModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SerialManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SerialManager.data,
    qt_meta_data_SerialManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialManager::wifiScanResultReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialManager::wifiConnectionResult(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialManager::wifiListModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialManager::callReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialManager::smsReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
