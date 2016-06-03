/****************************************************************************
** Meta object code from reading C++ file 'ellipseeditor.h'
**
** Created: Sat Feb 27 15:10:57 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/ellipseeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ellipseeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EllipseEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      31,   14,   14,   14, 0x0a,
      48,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,
      82,   14,   14,   14, 0x0a,
      99,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EllipseEditor[] = {
    "EllipseEditor\0\0updateEllipse()\0"
    "updateEllipseX()\0updateEllipseY()\0"
    "updateEllipseH()\0updateEllipseV()\0"
    "updateForm()\0"
};

void EllipseEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EllipseEditor *_t = static_cast<EllipseEditor *>(_o);
        switch (_id) {
        case 0: _t->updateEllipse(); break;
        case 1: _t->updateEllipseX(); break;
        case 2: _t->updateEllipseY(); break;
        case 3: _t->updateEllipseH(); break;
        case 4: _t->updateEllipseV(); break;
        case 5: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EllipseEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EllipseEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_EllipseEditor,
      qt_meta_data_EllipseEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EllipseEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EllipseEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EllipseEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EllipseEditor))
        return static_cast<void*>(const_cast< EllipseEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int EllipseEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
