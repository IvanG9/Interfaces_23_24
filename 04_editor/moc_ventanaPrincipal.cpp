/****************************************************************************
** Meta object code from reading C++ file 'ventanaPrincipal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ventanaPrincipal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanaPrincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ventanaPrincipal_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ventanaPrincipal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ventanaPrincipal_t qt_meta_stringdata_ventanaPrincipal = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ventanaPrincipal"
QT_MOC_LITERAL(1, 17, 16), // "senyalEncontrada"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "buscarArchivo"
QT_MOC_LITERAL(4, 49, 12), // "abrirArchivo"
QT_MOC_LITERAL(5, 62, 14), // "guardarArchivo"
QT_MOC_LITERAL(6, 77, 5), // "salir"
QT_MOC_LITERAL(7, 83, 13), // "eliminarTexto"
QT_MOC_LITERAL(8, 97, 14), // "textModificado"
QT_MOC_LITERAL(9, 112, 10) // "slotBuscar"

    },
    "ventanaPrincipal\0senyalEncontrada\0\0"
    "buscarArchivo\0abrirArchivo\0guardarArchivo\0"
    "salir\0eliminarTexto\0textModificado\0"
    "slotBuscar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ventanaPrincipal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,
       4,    0,   58,    2, 0x0a /* Public */,
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

       0        // eod
};

void ventanaPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ventanaPrincipal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->senyalEncontrada((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->buscarArchivo(); break;
        case 2: _t->abrirArchivo(); break;
        case 3: _t->guardarArchivo(); break;
        case 4: _t->salir(); break;
        case 5: _t->eliminarTexto(); break;
        case 6: _t->textModificado(); break;
        case 7: _t->slotBuscar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ventanaPrincipal::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ventanaPrincipal::senyalEncontrada)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ventanaPrincipal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ventanaPrincipal.data,
    qt_meta_data_ventanaPrincipal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ventanaPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ventanaPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ventanaPrincipal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ventanaPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ventanaPrincipal::senyalEncontrada(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
