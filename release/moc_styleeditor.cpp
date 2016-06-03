/****************************************************************************
** Meta object code from reading C++ file 'styleeditor.h'
**
** Created: Sat Feb 27 15:11:08 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/styleeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styleeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StyleEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      26,   12,   12,   12, 0x0a,
      39,   12,   12,   12, 0x0a,
      64,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
     104,   12,   12,   12, 0x0a,
     127,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StyleEditor[] = {
    "StyleEditor\0\0updatePart()\0updateForm()\0"
    "updatePartAntialiasing()\0updatePartColor()\0"
    "updatePartLineStyle()\0updatePartLineWeight()\0"
    "updatePartFilling()\0"
};

void StyleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StyleEditor *_t = static_cast<StyleEditor *>(_o);
        switch (_id) {
        case 0: _t->updatePart(); break;
        case 1: _t->updateForm(); break;
        case 2: _t->updatePartAntialiasing(); break;
        case 3: _t->updatePartColor(); break;
        case 4: _t->updatePartLineStyle(); break;
        case 5: _t->updatePartLineWeight(); break;
        case 6: _t->updatePartFilling(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StyleEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StyleEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_StyleEditor,
      qt_meta_data_StyleEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StyleEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StyleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StyleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StyleEditor))
        return static_cast<void*>(const_cast< StyleEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int StyleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
