/****************************************************************************
** Meta object code from reading C++ file 'elementselectorwidget.h'
**
** Created: Sat Feb 27 15:10:38 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/elementselectorwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementselectorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementSelectorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   23,   22,   22, 0x0a,
      47,   45,   22,   22, 0x08,
      71,   45,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ElementSelectorWidget[] = {
    "ElementSelectorWidget\0\0str\0filtered(QString)\0"
    "i\0setSelectedElement(int)\0"
    "showElementFromList(int)\0"
};

void ElementSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementSelectorWidget *_t = static_cast<ElementSelectorWidget *>(_o);
        switch (_id) {
        case 0: _t->filtered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSelectedElement((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->showElementFromList((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementSelectorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementSelectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ElementSelectorWidget,
      qt_meta_data_ElementSelectorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementSelectorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementSelectorWidget))
        return static_cast<void*>(const_cast< ElementSelectorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ElementSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
