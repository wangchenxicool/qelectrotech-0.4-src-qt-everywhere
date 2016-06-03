/****************************************************************************
** Meta object code from reading C++ file 'rectangleeditor.h'
**
** Created: Sat Feb 27 15:11:06 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/rectangleeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rectangleeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RectangleEditor[] = {

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
      17,   16,   16,   16, 0x0a,
      35,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      73,   16,   16,   16, 0x0a,
      92,   16,   16,   16, 0x0a,
     111,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RectangleEditor[] = {
    "RectangleEditor\0\0updateRectangle()\0"
    "updateRectangleX()\0updateRectangleY()\0"
    "updateRectangleW()\0updateRectangleH()\0"
    "updateForm()\0"
};

void RectangleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RectangleEditor *_t = static_cast<RectangleEditor *>(_o);
        switch (_id) {
        case 0: _t->updateRectangle(); break;
        case 1: _t->updateRectangleX(); break;
        case 2: _t->updateRectangleY(); break;
        case 3: _t->updateRectangleW(); break;
        case 4: _t->updateRectangleH(); break;
        case 5: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RectangleEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RectangleEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_RectangleEditor,
      qt_meta_data_RectangleEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RectangleEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RectangleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RectangleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RectangleEditor))
        return static_cast<void*>(const_cast< RectangleEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int RectangleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
