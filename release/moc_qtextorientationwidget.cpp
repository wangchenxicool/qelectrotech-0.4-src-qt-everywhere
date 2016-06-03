/****************************************************************************
** Meta object code from reading C++ file 'qtextorientationwidget.h'
**
** Created: Sat Feb 27 15:10:13 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qtextorientationwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextorientationwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTextOrientationWidget[] = {

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
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QTextOrientationWidget[] = {
    "QTextOrientationWidget\0\0"
    "orientationChanged(double)\0"
    "setOrientation(double)\0"
};

void QTextOrientationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTextOrientationWidget *_t = static_cast<QTextOrientationWidget *>(_o);
        switch (_id) {
        case 0: _t->orientationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setOrientation((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTextOrientationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTextOrientationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTextOrientationWidget,
      qt_meta_data_QTextOrientationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTextOrientationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTextOrientationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTextOrientationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTextOrientationWidget))
        return static_cast<void*>(const_cast< QTextOrientationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTextOrientationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QTextOrientationWidget::orientationChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
