/****************************************************************************
** Meta object code from reading C++ file 'texteditor.h'
**
** Created: Sat Feb 27 15:11:12 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/texteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      25,   11,   11,   11, 0x0a,
      39,   11,   11,   11, 0x0a,
      53,   11,   11,   11, 0x0a,
      67,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
      95,   11,   11,   11, 0x0a,
     121,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextEditor[] = {
    "TextEditor\0\0updateText()\0updateTextX()\0"
    "updateTextY()\0updateTextT()\0updateTextS()\0"
    "updateTextC()\0updateTextRotationAngle()\0"
    "updateForm()\0"
};

void TextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextEditor *_t = static_cast<TextEditor *>(_o);
        switch (_id) {
        case 0: _t->updateText(); break;
        case 1: _t->updateTextX(); break;
        case 2: _t->updateTextY(); break;
        case 3: _t->updateTextT(); break;
        case 4: _t->updateTextS(); break;
        case 5: _t->updateTextC(); break;
        case 6: _t->updateTextRotationAngle(); break;
        case 7: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_TextEditor,
      qt_meta_data_TextEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditor))
        return static_cast<void*>(const_cast< TextEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int TextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
