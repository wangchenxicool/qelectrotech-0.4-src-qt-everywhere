/****************************************************************************
** Meta object code from reading C++ file 'qetmainwindow.h'
**
** Created: Sat Feb 27 15:09:59 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETMainWindow[] = {

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
      15,   14,   14,   14, 0x0a,
      34,   14,   14,   14, 0x0a,
      59,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QETMainWindow[] = {
    "QETMainWindow\0\0toggleFullScreen()\0"
    "updateFullScreenAction()\0checkToolbarsmenu()\0"
};

void QETMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETMainWindow *_t = static_cast<QETMainWindow *>(_o);
        switch (_id) {
        case 0: _t->toggleFullScreen(); break;
        case 1: _t->updateFullScreenAction(); break;
        case 2: _t->checkToolbarsmenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QETMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QETMainWindow,
      qt_meta_data_QETMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETMainWindow))
        return static_cast<void*>(const_cast< QETMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QETMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
