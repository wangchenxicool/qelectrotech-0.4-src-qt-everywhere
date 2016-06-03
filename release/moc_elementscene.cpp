/****************************************************************************
** Meta object code from reading C++ file 'elementscene.h'
**
** Created: Sat Feb 27 15:10:53 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/elementscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      27,   13,   13,   13, 0x05,
      42,   13,   13,   13, 0x05,
      63,   13,   13,   13, 0x05,
      88,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   13,   13,   13, 0x0a,
     130,   13,   13,   13, 0x0a,
     147,   13,   13,   13, 0x0a,
     166,   13,   13,   13, 0x0a,
     189,   13,   13,   13, 0x0a,
     203,   13,   13,   13, 0x0a,
     220,   13,   13,   13, 0x0a,
     250,   13,   13,   13, 0x0a,
     272,   13,   13,   13, 0x0a,
     292,   13,   13,   13, 0x0a,
     305,   13,   13,   13, 0x0a,
     318,   13,   13,   13, 0x0a,
     338,   13,   13,   13, 0x0a,
     363,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ElementScene[] = {
    "ElementScene\0\0partsAdded()\0partsRemoved()\0"
    "partsZValueChanged()\0pasteAreaDefined(QRectF)\0"
    "needZoomFit()\0slot_select(ElementContent)\0"
    "slot_selectAll()\0slot_deselectAll()\0"
    "slot_invertSelection()\0slot_delete()\0"
    "slot_editNames()\0slot_editAuthorInformations()\0"
    "slot_editProperties()\0slot_bringForward()\0"
    "slot_raise()\0slot_lower()\0slot_sendBackward()\0"
    "managePrimitivesGroups()\0"
    "stackAction(ElementEditionCommand*)\0"
};

void ElementScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementScene *_t = static_cast<ElementScene *>(_o);
        switch (_id) {
        case 0: _t->partsAdded(); break;
        case 1: _t->partsRemoved(); break;
        case 2: _t->partsZValueChanged(); break;
        case 3: _t->pasteAreaDefined((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->needZoomFit(); break;
        case 5: _t->slot_select((*reinterpret_cast< const ElementContent(*)>(_a[1]))); break;
        case 6: _t->slot_selectAll(); break;
        case 7: _t->slot_deselectAll(); break;
        case 8: _t->slot_invertSelection(); break;
        case 9: _t->slot_delete(); break;
        case 10: _t->slot_editNames(); break;
        case 11: _t->slot_editAuthorInformations(); break;
        case 12: _t->slot_editProperties(); break;
        case 13: _t->slot_bringForward(); break;
        case 14: _t->slot_raise(); break;
        case 15: _t->slot_lower(); break;
        case 16: _t->slot_sendBackward(); break;
        case 17: _t->managePrimitivesGroups(); break;
        case 18: _t->stackAction((*reinterpret_cast< ElementEditionCommand*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_ElementScene,
      qt_meta_data_ElementScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementScene))
        return static_cast<void*>(const_cast< ElementScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int ElementScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ElementScene::partsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ElementScene::partsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ElementScene::partsZValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ElementScene::pasteAreaDefined(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ElementScene::needZoomFit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
