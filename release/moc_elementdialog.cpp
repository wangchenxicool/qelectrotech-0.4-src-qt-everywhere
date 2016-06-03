/****************************************************************************
** Meta object code from reading C++ file 'elementdialog.h'
**
** Created: Sat Feb 27 15:09:08 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/elementdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      75,   14,   14,   14, 0x08,
      92,   14,   14,   14, 0x08,
     109,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ElementDialog[] = {
    "ElementDialog\0\0locationChanged(ElementsLocation)\0"
    "textFieldChanged(QString)\0dialogAccepted()\0"
    "dialogRejected()\0checkDialog()\0"
};

void ElementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementDialog *_t = static_cast<ElementDialog *>(_o);
        switch (_id) {
        case 0: _t->locationChanged((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 1: _t->textFieldChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->dialogAccepted(); break;
        case 3: _t->dialogRejected(); break;
        case 4: _t->checkDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementDialog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ElementDialog,
      qt_meta_data_ElementDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementDialog))
        return static_cast<void*>(const_cast< ElementDialog*>(this));
    return QObject::qt_metacast(_clname);
}

int ElementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
