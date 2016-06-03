/****************************************************************************
** Meta object code from reading C++ file 'diagramcontextwidget.h'
**
** Created: Sat Feb 27 15:08:56 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/diagramcontextwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramcontextwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramContextWidget[] = {

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
      22,   21,   21,   21, 0x0a,
      40,   21,   21,   21, 0x0a,
      52,   21,   48,   21, 0x0a,
      81,   21,   21,   21, 0x0a,
     102,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiagramContextWidget[] = {
    "DiagramContextWidget\0\0setReadOnly(bool)\0"
    "clear()\0int\0highlightNonAcceptableKeys()\0"
    "refreshFormatLabel()\0checkTableRows()\0"
};

void DiagramContextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramContextWidget *_t = static_cast<DiagramContextWidget *>(_o);
        switch (_id) {
        case 0: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: { int _r = _t->highlightNonAcceptableKeys();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->refreshFormatLabel(); break;
        case 4: _t->checkTableRows(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagramContextWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramContextWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DiagramContextWidget,
      qt_meta_data_DiagramContextWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramContextWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramContextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramContextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramContextWidget))
        return static_cast<void*>(const_cast< DiagramContextWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DiagramContextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
