/****************************************************************************
** Meta object code from reading C++ file 'autonumselectorwidget.h'
**
** Created: Sat Feb 27 15:10:23 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/autonumselectorwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autonumselectorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutonumSelectorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AutonumSelectorWidget[] = {
    "AutonumSelectorWidget\0\0openAutonumEditor()\0"
    "on_m_edit_autonum_pb_clicked()\0"
};

void AutonumSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutonumSelectorWidget *_t = static_cast<AutonumSelectorWidget *>(_o);
        switch (_id) {
        case 0: _t->openAutonumEditor(); break;
        case 1: _t->on_m_edit_autonum_pb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AutonumSelectorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutonumSelectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AutonumSelectorWidget,
      qt_meta_data_AutonumSelectorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutonumSelectorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutonumSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutonumSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutonumSelectorWidget))
        return static_cast<void*>(const_cast< AutonumSelectorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AutonumSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AutonumSelectorWidget::openAutonumEditor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
