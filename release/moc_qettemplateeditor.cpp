/****************************************************************************
** Meta object code from reading C++ file 'qettemplateeditor.h'
**
** Created: Sat Feb 27 15:11:23 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/qettemplateeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qettemplateeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETTitleBlockTemplateEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      44,   28,   28,   28, 0x0a,
      60,   28,   28,   28, 0x0a,
     105,   28,   28,   28, 0x0a,
     137,   28,  132,   28, 0x0a,
     172,  170,  132,   28, 0x0a,
     198,   28,  132,   28, 0x0a,
     212,   28,  132,   28, 0x0a,
     250,   28,  132,   28, 0x0a,
     276,   28,   28,   28, 0x0a,
     288,   28,   28,   28, 0x0a,
     302,   28,   28,   28, 0x0a,
     309,   28,   28,   28, 0x0a,
     324,   28,  132,   28, 0x0a,
     331,   28,  132,   28, 0x0a,
     340,   28,  132,   28, 0x0a,
     353,   28,   28,   28, 0x0a,
     371,   28,   28,   28, 0x0a,
     378,  170,   28,   28, 0x0a,
     425,   28,   28,   28, 0x0a,
     493,  478,  451,   28, 0x08,
     545,   28,  451,   28, 0x28,
     592,   28,  451,   28, 0x28,
     632,   28,   28,   28, 0x08,
     682,   28,   28,   28, 0x08,
     730,   28,   28,   28, 0x08,
     761,   28,   28,   28, 0x08,
     781,   28,   28,   28, 0x08,
     797,   28,  132,   28, 0x08,
     832,   28,  132,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QETTitleBlockTemplateEditor[] = {
    "QETTitleBlockTemplateEditor\0\0"
    "readSettings()\0writeSettings()\0"
    "selectedCellsChanged(QList<TitleBlockCell*>)\0"
    "duplicateCurrentLocation()\0bool\0"
    "edit(TitleBlockTemplateLocation)\0,\0"
    "edit(QETProject*,QString)\0edit(QString)\0"
    "editCopyOf(const TitleBlockTemplate*)\0"
    "edit(TitleBlockTemplate*)\0editLogos()\0"
    "newTemplate()\0open()\0openFromFile()\0"
    "save()\0saveAs()\0saveAsFile()\0"
    "setReadOnly(bool)\0quit()\0"
    "savePreviewWidthToApplicationSettings(int,int)\0"
    "editTemplateInformation()\0"
    "TitleBlockTemplateLocation\0,existing_only\0"
    "getTitleBlockTemplateLocationFromUser(QString,bool)\0"
    "getTitleBlockTemplateLocationFromUser(QString)\0"
    "getTitleBlockTemplateLocationFromUser()\0"
    "pushCellUndoCommand(ModifyTitleBlockCellCommand*)\0"
    "pushGridUndoCommand(TitleBlockTemplateCommand*)\0"
    "pushUndoCommand(QUndoCommand*)\0"
    "updateEditorTitle()\0updateActions()\0"
    "saveAs(TitleBlockTemplateLocation)\0"
    "saveAs(QString)\0"
};

void QETTitleBlockTemplateEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETTitleBlockTemplateEditor *_t = static_cast<QETTitleBlockTemplateEditor *>(_o);
        switch (_id) {
        case 0: _t->readSettings(); break;
        case 1: _t->writeSettings(); break;
        case 2: _t->selectedCellsChanged((*reinterpret_cast< QList<TitleBlockCell*>(*)>(_a[1]))); break;
        case 3: _t->duplicateCurrentLocation(); break;
        case 4: { bool _r = _t->edit((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->edit((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->edit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->editCopyOf((*reinterpret_cast< const TitleBlockTemplate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->edit((*reinterpret_cast< TitleBlockTemplate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->editLogos(); break;
        case 10: _t->newTemplate(); break;
        case 11: _t->open(); break;
        case 12: _t->openFromFile(); break;
        case 13: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->saveAsFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->quit(); break;
        case 18: _t->savePreviewWidthToApplicationSettings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->editTemplateInformation(); break;
        case 20: { TitleBlockTemplateLocation _r = _t->getTitleBlockTemplateLocationFromUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TitleBlockTemplateLocation*>(_a[0]) = _r; }  break;
        case 21: { TitleBlockTemplateLocation _r = _t->getTitleBlockTemplateLocationFromUser((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TitleBlockTemplateLocation*>(_a[0]) = _r; }  break;
        case 22: { TitleBlockTemplateLocation _r = _t->getTitleBlockTemplateLocationFromUser();
            if (_a[0]) *reinterpret_cast< TitleBlockTemplateLocation*>(_a[0]) = _r; }  break;
        case 23: _t->pushCellUndoCommand((*reinterpret_cast< ModifyTitleBlockCellCommand*(*)>(_a[1]))); break;
        case 24: _t->pushGridUndoCommand((*reinterpret_cast< TitleBlockTemplateCommand*(*)>(_a[1]))); break;
        case 25: _t->pushUndoCommand((*reinterpret_cast< QUndoCommand*(*)>(_a[1]))); break;
        case 26: _t->updateEditorTitle(); break;
        case 27: _t->updateActions(); break;
        case 28: { bool _r = _t->saveAs((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->saveAs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETTitleBlockTemplateEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETTitleBlockTemplateEditor::staticMetaObject = {
    { &QETMainWindow::staticMetaObject, qt_meta_stringdata_QETTitleBlockTemplateEditor,
      qt_meta_data_QETTitleBlockTemplateEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETTitleBlockTemplateEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETTitleBlockTemplateEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETTitleBlockTemplateEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETTitleBlockTemplateEditor))
        return static_cast<void*>(const_cast< QETTitleBlockTemplateEditor*>(this));
    return QETMainWindow::qt_metacast(_clname);
}

int QETTitleBlockTemplateEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QETMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
