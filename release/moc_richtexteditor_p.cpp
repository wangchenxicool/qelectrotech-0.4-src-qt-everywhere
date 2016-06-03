/****************************************************************************
** Meta object code from reading C++ file 'richtexteditor_p.h'
**
** Created: Sat Feb 27 15:11:43 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/richtext/richtexteditor_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'richtexteditor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__RichTextEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   65,   41,   41, 0x08,
      95,   41,   41,   41, 0x08,
     113,   41,   41,   41, 0x08,
     129,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__RichTextEditorDialog[] = {
    "qdesigner_internal::RichTextEditorDialog\0"
    "\0applyEditText(QString)\0newIndex\0"
    "tabIndexChanged(int)\0richTextChanged()\0"
    "sourceChanged()\0on_buttonBox_accepted()\0"
};

void qdesigner_internal::RichTextEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RichTextEditorDialog *_t = static_cast<RichTextEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->applyEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->richTextChanged(); break;
        case 3: _t->sourceChanged(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::RichTextEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::RichTextEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__RichTextEditorDialog,
      qt_meta_data_qdesigner_internal__RichTextEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::RichTextEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::RichTextEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::RichTextEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__RichTextEditorDialog))
        return static_cast<void*>(const_cast< RichTextEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::RichTextEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::RichTextEditorDialog::applyEditText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
