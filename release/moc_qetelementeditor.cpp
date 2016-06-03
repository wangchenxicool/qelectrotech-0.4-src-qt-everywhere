/****************************************************************************
** Meta object code from reading C++ file 'qetelementeditor.h'
**
** Created: Sat Feb 27 15:11:03 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/qetelementeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetelementeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETElementEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      28,   17,   17,   17, 0x0a,
      38,   17,   17,   17, 0x0a,
      51,   17,   17,   17, 0x0a,
      64,   17,   17,   17, 0x0a,
      73,   17,   17,   17, 0x0a,
      83,   17,   17,   17, 0x0a,
      98,   17,   17,   17, 0x0a,
     112,   17,   17,   17, 0x0a,
     134,   17,   17,   17, 0x0a,
     145,   17,   17,   17, 0x0a,
     157,   17,   17,   17, 0x0a,
     173,   17,   17,   17, 0x0a,
     197,   17,   17,   17, 0x0a,
     218,   17,   17,   17, 0x0a,
     237,   17,  232,   17, 0x0a,
     249,   17,  232,   17, 0x0a,
     263,   17,  232,   17, 0x0a,
     281,   17,   17,   17, 0x0a,
     308,   17,   17,   17, 0x0a,
     331,   17,   17,   17, 0x0a,
     357,   17,   17,   17, 0x0a,
     376,   17,   17,   17, 0x0a,
     395,   17,   17,   17, 0x0a,
     418,   17,   17,   17, 0x0a,
     441,   17,   17,   17, 0x0a,
     477,   17,   17,   17, 0x0a,
     490,   17,  232,   17, 0x0a,
     505,   17,   17,   17, 0x0a,
     521,   17,   17,   17, 0x0a,
     540,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QETElementEditor[] = {
    "QETElementEditor\0\0addLine()\0addRect()\0"
    "addEllipse()\0addPolygon()\0addArc()\0"
    "addText()\0addTextField()\0addTerminal()\0"
    "UncheckAddPrimitive()\0slot_new()\0"
    "slot_open()\0slot_openFile()\0"
    "openRecentFile(QString)\0openElement(QString)\0"
    "slot_reload()\0bool\0slot_save()\0"
    "slot_saveAs()\0slot_saveAsFile()\0"
    "slot_setRubberBandToView()\0"
    "slot_setNoDragToView()\0slot_updateInformations()\0"
    "slot_updateMenus()\0slot_updateTitle()\0"
    "slot_createPartsList()\0slot_updatePartsList()\0"
    "slot_updateSelectionFromPartsList()\0"
    "xmlPreview()\0checkElement()\0pasteFromFile()\0"
    "pasteFromElement()\0updateCurrentPartEditor()\0"
};

void QETElementEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETElementEditor *_t = static_cast<QETElementEditor *>(_o);
        switch (_id) {
        case 0: _t->addLine(); break;
        case 1: _t->addRect(); break;
        case 2: _t->addEllipse(); break;
        case 3: _t->addPolygon(); break;
        case 4: _t->addArc(); break;
        case 5: _t->addText(); break;
        case 6: _t->addTextField(); break;
        case 7: _t->addTerminal(); break;
        case 8: _t->UncheckAddPrimitive(); break;
        case 9: _t->slot_new(); break;
        case 10: _t->slot_open(); break;
        case 11: _t->slot_openFile(); break;
        case 12: _t->openRecentFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->openElement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->slot_reload(); break;
        case 15: { bool _r = _t->slot_save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->slot_saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->slot_saveAsFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->slot_setRubberBandToView(); break;
        case 19: _t->slot_setNoDragToView(); break;
        case 20: _t->slot_updateInformations(); break;
        case 21: _t->slot_updateMenus(); break;
        case 22: _t->slot_updateTitle(); break;
        case 23: _t->slot_createPartsList(); break;
        case 24: _t->slot_updatePartsList(); break;
        case 25: _t->slot_updateSelectionFromPartsList(); break;
        case 26: _t->xmlPreview(); break;
        case 27: { bool _r = _t->checkElement();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->pasteFromFile(); break;
        case 29: _t->pasteFromElement(); break;
        case 30: _t->updateCurrentPartEditor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETElementEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETElementEditor::staticMetaObject = {
    { &QETMainWindow::staticMetaObject, qt_meta_stringdata_QETElementEditor,
      qt_meta_data_QETElementEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETElementEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETElementEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETElementEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETElementEditor))
        return static_cast<void*>(const_cast< QETElementEditor*>(this));
    return QETMainWindow::qt_metacast(_clname);
}

int QETElementEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QETMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
