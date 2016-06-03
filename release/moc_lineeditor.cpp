/****************************************************************************
** Meta object code from reading C++ file 'lineeditor.h'
**
** Created: Sat Feb 27 15:10:59 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/lineeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      25,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      55,   11,   11,   11, 0x0a,
      70,   11,   11,   11, 0x0a,
      85,   11,   11,   11, 0x0a,
     106,   11,   11,   11, 0x0a,
     129,   11,   11,   11, 0x0a,
     150,   11,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LineEditor[] = {
    "LineEditor\0\0updateLine()\0updateLineX1()\0"
    "updateLineY1()\0updateLineX2()\0"
    "updateLineY2()\0updateLineEndType1()\0"
    "updateLineEndLength1()\0updateLineEndType2()\0"
    "updateLineEndLength2()\0updateForm()\0"
};

void LineEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineEditor *_t = static_cast<LineEditor *>(_o);
        switch (_id) {
        case 0: _t->updateLine(); break;
        case 1: _t->updateLineX1(); break;
        case 2: _t->updateLineY1(); break;
        case 3: _t->updateLineX2(); break;
        case 4: _t->updateLineY2(); break;
        case 5: _t->updateLineEndType1(); break;
        case 6: _t->updateLineEndLength1(); break;
        case 7: _t->updateLineEndType2(); break;
        case 8: _t->updateLineEndLength2(); break;
        case 9: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LineEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_LineEditor,
      qt_meta_data_LineEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineEditor))
        return static_cast<void*>(const_cast< LineEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int LineEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementItemEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
