/****************************************************************************
** Meta object code from reading C++ file 'nameslistwidget.h'
**
** Created: Sat Feb 27 15:09:40 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/nameslistwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nameslistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NamesListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   16,   16,   16, 0x0a,
      42,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NamesListWidget[] = {
    "NamesListWidget\0\0inputChecked()\0"
    "addLine()\0check()\0"
};

void NamesListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NamesListWidget *_t = static_cast<NamesListWidget *>(_o);
        switch (_id) {
        case 0: _t->inputChecked(); break;
        case 1: _t->addLine(); break;
        case 2: _t->check(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NamesListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NamesListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NamesListWidget,
      qt_meta_data_NamesListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NamesListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NamesListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NamesListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NamesListWidget))
        return static_cast<void*>(const_cast< NamesListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NamesListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void NamesListWidget::inputChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
