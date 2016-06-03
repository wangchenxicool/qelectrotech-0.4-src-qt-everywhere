/****************************************************************************
** Meta object code from reading C++ file 'integrationmovetemplateshandler.h'
**
** Created: Sat Feb 27 15:11:20 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/integrationmovetemplateshandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'integrationmovetemplateshandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IntegrationMoveTitleBlockTemplatesHandler[] = {

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
      43,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IntegrationMoveTitleBlockTemplatesHandler[] = {
    "IntegrationMoveTitleBlockTemplatesHandler\0"
    "\0correctRadioButtons()\0"
};

void IntegrationMoveTitleBlockTemplatesHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IntegrationMoveTitleBlockTemplatesHandler *_t = static_cast<IntegrationMoveTitleBlockTemplatesHandler *>(_o);
        switch (_id) {
        case 0: _t->correctRadioButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IntegrationMoveTitleBlockTemplatesHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IntegrationMoveTitleBlockTemplatesHandler::staticMetaObject = {
    { &MoveTitleBlockTemplatesHandler::staticMetaObject, qt_meta_stringdata_IntegrationMoveTitleBlockTemplatesHandler,
      qt_meta_data_IntegrationMoveTitleBlockTemplatesHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntegrationMoveTitleBlockTemplatesHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntegrationMoveTitleBlockTemplatesHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntegrationMoveTitleBlockTemplatesHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntegrationMoveTitleBlockTemplatesHandler))
        return static_cast<void*>(const_cast< IntegrationMoveTitleBlockTemplatesHandler*>(this));
    return MoveTitleBlockTemplatesHandler::qt_metacast(_clname);
}

int IntegrationMoveTitleBlockTemplatesHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MoveTitleBlockTemplatesHandler::qt_metacall(_c, _id, _a);
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
