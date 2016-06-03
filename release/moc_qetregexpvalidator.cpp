/****************************************************************************
** Meta object code from reading C++ file 'qetregexpvalidator.h'
**
** Created: Sat Feb 27 15:10:05 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetregexpvalidator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetregexpvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETRegExpValidator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QETRegExpValidator[] = {
    "QETRegExpValidator\0\0validationFailed()\0"
};

void QETRegExpValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETRegExpValidator *_t = static_cast<QETRegExpValidator *>(_o);
        switch (_id) {
        case 0: _t->validationFailed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QETRegExpValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETRegExpValidator::staticMetaObject = {
    { &QRegExpValidator::staticMetaObject, qt_meta_stringdata_QETRegExpValidator,
      qt_meta_data_QETRegExpValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETRegExpValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETRegExpValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETRegExpValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETRegExpValidator))
        return static_cast<void*>(const_cast< QETRegExpValidator*>(this));
    return QRegExpValidator::qt_metacast(_clname);
}

int QETRegExpValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRegExpValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QETRegExpValidator::validationFailed()const
{
    QMetaObject::activate(const_cast< QETRegExpValidator *>(this), &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
