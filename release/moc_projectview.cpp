/****************************************************************************
** Meta object code from reading C++ file 'projectview.h'
**
** Created: Sat Feb 27 15:09:48 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/projectview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProjectView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      40,   12,   12,   12, 0x05,
      69,   12,   12,   12, 0x05,
     103,  100,   12,   12, 0x05,
     145,   12,   12,   12, 0x05,
     173,   12,   12,   12, 0x05,
     199,   12,   12,   12, 0x05,
     237,   12,   12,   12, 0x05,
     277,  275,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     333,   12,   12,   12, 0x0a,
     349,   12,   12,   12, 0x0a,
     374,   12,   12,   12, 0x0a,
     399,   12,   12,   12, 0x0a,
     427,   12,   12,   12, 0x0a,
     451,   12,   12,   12, 0x0a,
     477,   12,   12,   12, 0x0a,
     499,   12,   12,   12, 0x0a,
     523,   12,   12,   12, 0x0a,
     554,   12,   12,   12, 0x0a,
     590,   12,   12,   12, 0x0a,
     622,   12,   12,   12, 0x0a,
     650,   12,   12,   12, 0x0a,
     674,   12,   12,   12, 0x0a,
     704,   12,   12,   12, 0x0a,
     730,   12,   12,   12, 0x0a,
     761,   12,   12,   12, 0x0a,
     788,   12,   12,   12, 0x0a,
     821,   12,   12,   12, 0x0a,
     850,   12,   12,   12, 0x0a,
     865,   12,   12,   12, 0x0a,
     891,   12,  881,   12, 0x0a,
     898,   12,  881,   12, 0x0a,
     925,   12,  881,   12, 0x2a,
     934,   12,  881,   12, 0x0a,
     961,   12,   12,   12, 0x0a,
     995,   12,  991,   12, 0x0a,
    1010,   12,   12,   12, 0x0a,
    1030,  275,   12,   12, 0x0a,
    1067,  275,   12,   12, 0x0a,
    1085,  275,   12,   12, 0x0a,
    1130,   12,   12,   12, 0x08,
    1146,   12,   12,   12, 0x08,
    1168,   12,   12,   12, 0x08,
    1187,   12,   12,   12, 0x08,
    1204,   12,   12,   12, 0x08,
    1235,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProjectView[] = {
    "ProjectView\0\0diagramAdded(DiagramView*)\0"
    "diagramRemoved(DiagramView*)\0"
    "diagramActivated(DiagramView*)\0,,\0"
    "diagramOrderChanged(ProjectView*,int,int)\0"
    "projectClosed(ProjectView*)\0"
    "errorEncountered(QString)\0"
    "findElementRequired(ElementsLocation)\0"
    "editElementRequired(ElementsLocation)\0"
    ",\0editTitleBlockTemplate(TitleBlockTemplateLocation,bool)\0"
    "addNewDiagram()\0addNewDiagramFolioList()\0"
    "addDiagram(DiagramView*)\0"
    "removeDiagram(DiagramView*)\0"
    "removeDiagram(Diagram*)\0"
    "showDiagram(DiagramView*)\0"
    "showDiagram(Diagram*)\0editProjectProperties()\0"
    "editCurrentDiagramProperties()\0"
    "editDiagramProperties(DiagramView*)\0"
    "editDiagramProperties(Diagram*)\0"
    "moveDiagramUp(DiagramView*)\0"
    "moveDiagramUp(Diagram*)\0"
    "moveDiagramDown(DiagramView*)\0"
    "moveDiagramDown(Diagram*)\0"
    "moveDiagramUpx10(DiagramView*)\0"
    "moveDiagramUpx10(Diagram*)\0"
    "moveDiagramDownx10(DiagramView*)\0"
    "moveDiagramDownx10(Diagram*)\0"
    "printProject()\0exportProject()\0QETResult\0"
    "save()\0saveAs(ProjectSaveOptions)\0"
    "saveAs()\0doSave(ProjectSaveOptions)\0"
    "saveDiagrams(QList<Diagram*>)\0int\0"
    "cleanProject()\0updateWindowTitle()\0"
    "updateTabTitle(DiagramView*,QString)\0"
    "tabMoved(int,int)\0"
    "editTitleBlockTemplateRequired(QString,bool)\0"
    "tabChanged(int)\0tabDoubleClicked(int)\0"
    "firstTabInserted()\0lastTabRemoved()\0"
    "setDisplayFallbackWidget(bool)\0"
    "adjustReadOnlyState()\0"
};

void ProjectView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectView *_t = static_cast<ProjectView *>(_o);
        switch (_id) {
        case 0: _t->diagramAdded((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 1: _t->diagramRemoved((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 2: _t->diagramActivated((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 3: _t->diagramOrderChanged((*reinterpret_cast< ProjectView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->projectClosed((*reinterpret_cast< ProjectView*(*)>(_a[1]))); break;
        case 5: _t->errorEncountered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->findElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 7: _t->editElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 8: _t->editTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->addNewDiagram(); break;
        case 10: _t->addNewDiagramFolioList(); break;
        case 11: _t->addDiagram((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 12: _t->removeDiagram((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 13: _t->removeDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 14: _t->showDiagram((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 15: _t->showDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 16: _t->editProjectProperties(); break;
        case 17: _t->editCurrentDiagramProperties(); break;
        case 18: _t->editDiagramProperties((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 19: _t->editDiagramProperties((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 20: _t->moveDiagramUp((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 21: _t->moveDiagramUp((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 22: _t->moveDiagramDown((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 23: _t->moveDiagramDown((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 24: _t->moveDiagramUpx10((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 25: _t->moveDiagramUpx10((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 26: _t->moveDiagramDownx10((*reinterpret_cast< DiagramView*(*)>(_a[1]))); break;
        case 27: _t->moveDiagramDownx10((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 28: _t->printProject(); break;
        case 29: _t->exportProject(); break;
        case 30: { QETResult _r = _t->save();
            if (_a[0]) *reinterpret_cast< QETResult*>(_a[0]) = _r; }  break;
        case 31: { QETResult _r = _t->saveAs((*reinterpret_cast< ProjectSaveOptions(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QETResult*>(_a[0]) = _r; }  break;
        case 32: { QETResult _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< QETResult*>(_a[0]) = _r; }  break;
        case 33: { QETResult _r = _t->doSave((*reinterpret_cast< ProjectSaveOptions(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QETResult*>(_a[0]) = _r; }  break;
        case 34: _t->saveDiagrams((*reinterpret_cast< const QList<Diagram*>(*)>(_a[1]))); break;
        case 35: { int _r = _t->cleanProject();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: _t->updateWindowTitle(); break;
        case 37: _t->updateTabTitle((*reinterpret_cast< DiagramView*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 38: _t->tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->editTitleBlockTemplateRequired((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->tabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->firstTabInserted(); break;
        case 43: _t->lastTabRemoved(); break;
        case 44: _t->setDisplayFallbackWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->adjustReadOnlyState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProjectView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProjectView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProjectView,
      qt_meta_data_ProjectView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectView))
        return static_cast<void*>(const_cast< ProjectView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProjectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}

// SIGNAL 0
void ProjectView::diagramAdded(DiagramView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProjectView::diagramRemoved(DiagramView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProjectView::diagramActivated(DiagramView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProjectView::diagramOrderChanged(ProjectView * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProjectView::projectClosed(ProjectView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProjectView::errorEncountered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ProjectView::findElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ProjectView::editElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ProjectView::editTitleBlockTemplate(const TitleBlockTemplateLocation & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
