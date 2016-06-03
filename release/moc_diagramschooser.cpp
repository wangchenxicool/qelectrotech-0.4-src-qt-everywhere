/****************************************************************************
** Meta object code from reading C++ file 'diagramschooser.h'
**
** Created: Sat Feb 27 15:09:00 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/diagramschooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramschooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramsChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DiagramsChooser[] = {
    "DiagramsChooser\0\0selectionChanged()\0"
    "updateList()\0"
};

void DiagramsChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramsChooser *_t = static_cast<DiagramsChooser *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->updateList(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DiagramsChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramsChooser::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_DiagramsChooser,
      qt_meta_data_DiagramsChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramsChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramsChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramsChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramsChooser))
        return static_cast<void*>(const_cast< DiagramsChooser*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int DiagramsChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DiagramsChooser::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
