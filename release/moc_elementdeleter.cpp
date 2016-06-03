/****************************************************************************
** Meta object code from reading C++ file 'elementdeleter.h'
**
** Created: Sat Feb 27 15:09:06 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/elementdeleter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementdeleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementDeleter[] = {

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
      21,   15,   16,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ElementDeleter[] = {
    "ElementDeleter\0\0bool\0exec()\0"
};

void ElementDeleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementDeleter *_t = static_cast<ElementDeleter *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementDeleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementDeleter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ElementDeleter,
      qt_meta_data_ElementDeleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementDeleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementDeleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementDeleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementDeleter))
        return static_cast<void*>(const_cast< ElementDeleter*>(this));
    return QWidget::qt_metacast(_clname);
}

int ElementDeleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
