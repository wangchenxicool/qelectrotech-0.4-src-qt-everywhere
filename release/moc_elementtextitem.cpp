/****************************************************************************
** Meta object code from reading C++ file 'elementtextitem.h'
**
** Created: Sat Feb 27 15:11:53 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetgraphicsitem/elementtextitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementtextitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementTextItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      41,   16,   16,   16, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ElementTextItem[] = {
    "ElementTextItem\0\0adjustItemPosition(int)\0"
    "adjustItemPosition()\0"
};

void ElementTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementTextItem *_t = static_cast<ElementTextItem *>(_o);
        switch (_id) {
        case 0: _t->adjustItemPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->adjustItemPosition(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementTextItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementTextItem::staticMetaObject = {
    { &DiagramTextItem::staticMetaObject, qt_meta_stringdata_ElementTextItem,
      qt_meta_data_ElementTextItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementTextItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementTextItem))
        return static_cast<void*>(const_cast< ElementTextItem*>(this));
    return DiagramTextItem::qt_metacast(_clname);
}

int ElementTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DiagramTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
