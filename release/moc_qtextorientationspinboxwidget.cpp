/****************************************************************************
** Meta object code from reading C++ file 'qtextorientationspinboxwidget.h'
**
** Created: Sat Feb 27 15:10:11 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qtextorientationspinboxwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextorientationspinboxwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTextOrientationSpinBoxWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      55,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   30,   30,   30, 0x0a,
      96,   30,   30,   30, 0x0a,
     113,   30,   30,   30, 0x0a,
     131,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTextOrientationSpinBoxWidget[] = {
    "QTextOrientationSpinBoxWidget\0\0"
    "editingFinished(double)\0editingFinished()\0"
    "setOrientation(double)\0setValue(double)\0"
    "setReadOnly(bool)\0emitChangeSignals()\0"
};

void QTextOrientationSpinBoxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTextOrientationSpinBoxWidget *_t = static_cast<QTextOrientationSpinBoxWidget *>(_o);
        switch (_id) {
        case 0: _t->editingFinished((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->setOrientation((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->setValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->emitChangeSignals(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTextOrientationSpinBoxWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTextOrientationSpinBoxWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTextOrientationSpinBoxWidget,
      qt_meta_data_QTextOrientationSpinBoxWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTextOrientationSpinBoxWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTextOrientationSpinBoxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTextOrientationSpinBoxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTextOrientationSpinBoxWidget))
        return static_cast<void*>(const_cast< QTextOrientationSpinBoxWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTextOrientationSpinBoxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QTextOrientationSpinBoxWidget::editingFinished(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTextOrientationSpinBoxWidget::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
