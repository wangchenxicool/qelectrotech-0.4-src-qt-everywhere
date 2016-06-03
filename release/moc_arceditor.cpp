/****************************************************************************
** Meta object code from reading C++ file 'arceditor.h'
**
** Created: Sat Feb 27 15:10:47 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/arceditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arceditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArcEditor[] = {

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
      11,   10,   10,   10, 0x0a,
      23,   10,   10,   10, 0x0a,
      36,   10,   10,   10, 0x0a,
      49,   10,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      75,   10,   10,   10, 0x0a,
      88,   10,   10,   10, 0x0a,
     101,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ArcEditor[] = {
    "ArcEditor\0\0updateArc()\0updateArcX()\0"
    "updateArcY()\0updateArcH()\0updateArcV()\0"
    "updateArcS()\0updateArcA()\0updateForm()\0"
};

void ArcEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArcEditor *_t = static_cast<ArcEditor *>(_o);
        switch (_id) {
        case 0: _t->updateArc(); break;
        case 1: _t->updateArcX(); break;
        case 2: _t->updateArcY(); break;
        case 3: _t->updateArcH(); break;
        case 4: _t->updateArcV(); break;
        case 5: _t->updateArcS(); break;
        case 6: _t->updateArcA(); break;
        case 7: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ArcEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArcEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_ArcEditor,
      qt_meta_data_ArcEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArcEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArcEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArcEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArcEditor))
        return static_cast<void*>(const_cast< ArcEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int ArcEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
