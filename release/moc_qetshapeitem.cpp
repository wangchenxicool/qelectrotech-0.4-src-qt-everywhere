/****************************************************************************
** Meta object code from reading C++ file 'qetshapeitem.h'
**
** Created: Sat Feb 27 15:11:59 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetgraphicsitem/qetshapeitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetshapeitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QetShapeItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   19, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x08,

 // enums: name, flags, count, data
      39, 0x0,    4,   23,

 // enum data: key, value
      49, uint(QetShapeItem::Line),
      54, uint(QetShapeItem::Rectangle),
      64, uint(QetShapeItem::Ellipse),
      72, uint(QetShapeItem::Polyline),

       0        // eod
};

static const char qt_meta_stringdata_QetShapeItem[] = {
    "QetShapeItem\0\0factor\0previewScale(int)\0"
    "ShapeType\0Line\0Rectangle\0Ellipse\0"
    "Polyline\0"
};

void QetShapeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QetShapeItem *_t = static_cast<QetShapeItem *>(_o);
        switch (_id) {
        case 0: _t->previewScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QetShapeItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QetShapeItem::staticMetaObject = {
    { &QetGraphicsItem::staticMetaObject, qt_meta_stringdata_QetShapeItem,
      qt_meta_data_QetShapeItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QetShapeItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QetShapeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QetShapeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QetShapeItem))
        return static_cast<void*>(const_cast< QetShapeItem*>(this));
    return QetGraphicsItem::qt_metacast(_clname);
}

int QetShapeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QetGraphicsItem::qt_metacall(_c, _id, _a);
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
