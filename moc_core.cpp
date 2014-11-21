/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "core.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Obraz[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      14,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,    6,    6,    6, 0x0a,
      29,    6,    6,    6, 0x0a,
      37,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Obraz[] = {
    "Obraz\0\0done()\0sprawdz()\0ok()\0error()\0"
    "killsignal()\0"
};

void Obraz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Obraz *_t = static_cast<Obraz *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->sprawdz(); break;
        case 2: _t->ok(); break;
        case 3: _t->error(); break;
        case 4: _t->killsignal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Obraz::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Obraz::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Obraz,
      qt_meta_data_Obraz, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Obraz::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Obraz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Obraz::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Obraz))
        return static_cast<void*>(const_cast< Obraz*>(this));
    return QObject::qt_metacast(_clname);
}

int Obraz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Obraz::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Obraz::sprawdz()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
