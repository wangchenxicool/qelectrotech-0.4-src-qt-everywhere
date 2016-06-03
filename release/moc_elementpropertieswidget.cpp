/****************************************************************************
** Meta object code from reading C++ file 'elementpropertieswidget.h'
**
** Created: Sat Feb 27 15:10:38 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/elementpropertieswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_elementpropertieswidget[] = {

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
      25,   24,   24,   24, 0x05,
      63,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   24,   24,   24, 0x0a,
     141,   24,   24,   24, 0x0a,
     155,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_elementpropertieswidget[] = {
    "elementpropertieswidget\0\0"
    "findElementRequired(ElementsLocation)\0"
    "editElementRequired(ElementsLocation)\0"
    "standardButtonClicked(QAbstractButton*)\0"
    "findInPanel()\0editElement()\0"
};

void elementpropertieswidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        elementpropertieswidget *_t = static_cast<elementpropertieswidget *>(_o);
        switch (_id) {
        case 0: _t->findElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 1: _t->editElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 2: _t->standardButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->findInPanel(); break;
        case 4: _t->editElement(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData elementpropertieswidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject elementpropertieswidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_elementpropertieswidget,
      qt_meta_data_elementpropertieswidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &elementpropertieswidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *elementpropertieswidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *elementpropertieswidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_elementpropertieswidget))
        return static_cast<void*>(const_cast< elementpropertieswidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int elementpropertieswidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void elementpropertieswidget::findElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void elementpropertieswidget::editElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
