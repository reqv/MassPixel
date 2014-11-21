/****************************************************************************
** Meta object code from reading C++ file 'massmain.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "massmain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'massmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MassMain[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      22,   18,    9,    9, 0x0a,
      39,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      64,    9,    9,    9, 0x0a,
      82,    9,    9,    9, 0x0a,
      94,    9,    9,    9, 0x0a,
     105,    9,    9,    9, 0x0a,
     118,    9,    9,    9, 0x0a,
     123,    9,    9,    9, 0x0a,
     141,  136,    9,    9, 0x0a,
     163,    9,    9,    9, 0x0a,
     171,    9,    9,    9, 0x0a,
     177,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MassMain[] = {
    "MassMain\0\0reset()\0ile\0zmienjakosc(int)\0"
    "stopthem()\0ZmienFormat()\0aktualizujliste()\0"
    "load_file()\0load_dir()\0czyscliste()\0"
    "go()\0ustawienia()\0item\0one(QListWidgetItem*)\0"
    "one_r()\0oqt()\0oprogramie()\0"
};

void MassMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MassMain *_t = static_cast<MassMain *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->zmienjakosc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stopthem(); break;
        case 3: _t->ZmienFormat(); break;
        case 4: _t->aktualizujliste(); break;
        case 5: _t->load_file(); break;
        case 6: _t->load_dir(); break;
        case 7: _t->czyscliste(); break;
        case 8: _t->go(); break;
        case 9: _t->ustawienia(); break;
        case 10: _t->one((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->one_r(); break;
        case 12: _t->oqt(); break;
        case 13: _t->oprogramie(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MassMain::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MassMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MassMain,
      qt_meta_data_MassMain, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MassMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MassMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MassMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MassMain))
        return static_cast<void*>(const_cast< MassMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MassMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
