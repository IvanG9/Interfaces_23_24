/****************************************************************************
** Meta object code from reading C++ file 'dtransferencia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dtransferencia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtransferencia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DTransferencia_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DTransferencia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DTransferencia_t qt_meta_stringdata_DTransferencia = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DTransferencia"
QT_MOC_LITERAL(1, 15, 25), // "ñalTransferenciaAceptada"
QT_MOC_LITERAL(2, 41, 2), // "se"
QT_MOC_LITERAL(3, 44, 4), // "void"
QT_MOC_LITERAL(4, 49, 8), // "QString&"
QT_MOC_LITERAL(5, 58, 0), // ""
QT_MOC_LITERAL(6, 59, 19), // "slotCompruebaCuenta"
QT_MOC_LITERAL(7, 79, 19), // "slotCalculaComision"
QT_MOC_LITERAL(8, 99, 11) // "slotAceptar"

    },
    "DTransferencia\0ñalTransferenciaAceptada\0"
    "se\0void\0QString&\0\0slotCompruebaCuenta\0"
    "slotCalculaComision\0slotAceptar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DTransferencia[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   39,    5, 0x0a /* Public */,
       7,    1,   42,    5, 0x0a /* Public */,
       8,    0,   45,    5, 0x0a /* Public */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::Float,    5,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void DTransferencia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DTransferencia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { se _r = _t->ñalTransferenciaAceptada((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< se*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->slotCompruebaCuenta((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotCalculaComision((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotAceptar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = se (DTransferencia::*)(QString & , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DTransferencia::ñalTransferenciaAceptada)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DTransferencia::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DTransferencia.data,
    qt_meta_data_DTransferencia,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DTransferencia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DTransferencia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DTransferencia.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DTransferencia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
se DTransferencia::ñalTransferenciaAceptada(QString & _t1, float _t2)
{
    se _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
