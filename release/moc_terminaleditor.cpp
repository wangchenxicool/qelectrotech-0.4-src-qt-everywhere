/****************************************************************************
** Meta object code from reading C++ file 'terminaleditor.h'
**
** Created: Sat Feb 27 15:11:10 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/terminaleditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'terminaleditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TerminalEditor[] = {

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
      16,   15,   15,   15, 0x0a,
      33,   15,   15,   15, 0x0a,
      51,   15,   15,   15, 0x0a,
      69,   15,   15,   15, 0x0a,
      87,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TerminalEditor[] = {
    "TerminalEditor\0\0updateTerminal()\0"
    "updateTerminalX()\0updateTerminalY()\0"
    "updateTerminalO()\0updateForm()\0"
};

void TerminalEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TerminalEditor *_t = static_cast<TerminalEditor *>(_o);
        switch (_id) {
        case 0: _t->updateTerminal(); break;
        case 1: _t->updateTerminalX(); break;
        case 2: _t->updateTerminalY(); break;
        case 3: _t->updateTerminalO(); break;
        case 4: _t->updateForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TerminalEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TerminalEditor::staticMetaObject = {
    { &ElementItemEditor::staticMetaObject, qt_meta_stringdata_TerminalEditor,
      qt_meta_data_TerminalEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TerminalEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TerminalEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TerminalEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalEditor))
        return static_cast<void*>(const_cast< TerminalEditor*>(this));
    return ElementItemEditor::qt_metacast(_clname);
}

int TerminalEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementItemEditor::qt_metacall(_c, _id, _a);
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
