/****************************************************************************
** Meta object code from reading C++ file 'diagramselection.h'
**
** Created: Sat Feb 27 15:10:31 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/diagramselection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramselection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_diagramselection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_diagramselection[] = {
    "diagramselection\0\0pos\0"
    "on_tableDiagram_customContextMenuRequested(QPoint)\0"
};

void diagramselection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        diagramselection *_t = static_cast<diagramselection *>(_o);
        switch (_id) {
        case 0: _t->on_tableDiagram_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData diagramselection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject diagramselection::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_diagramselection,
      qt_meta_data_diagramselection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &diagramselection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *diagramselection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *diagramselection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_diagramselection))
        return static_cast<void*>(const_cast< diagramselection*>(this));
    return QWidget::qt_metacast(_clname);
}

int diagramselection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
