/****************************************************************************
** Meta object code from reading C++ file 'commentitem.h'
**
** Created: Sat Feb 27 15:11:44 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetgraphicsitem/commentitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commentitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommentItem[] = {

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
      13,   12,   12,   12, 0x0a,
      23,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CommentItem[] = {
    "CommentItem\0\0autoPos()\0updateLabel()\0"
};

void CommentItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommentItem *_t = static_cast<CommentItem *>(_o);
        switch (_id) {
        case 0: _t->autoPos(); break;
        case 1: _t->updateLabel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CommentItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommentItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_CommentItem,
      qt_meta_data_CommentItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommentItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommentItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommentItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommentItem))
        return static_cast<void*>(const_cast< CommentItem*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int CommentItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
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
