/****************************************************************************
** Meta object code from reading C++ file 'qetproject.h'
**
** Created: Sat Feb 27 15:10:02 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetproject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETProject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       1,  129, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,
      58,   12,   11,   11, 0x05,
      99,   11,   11,   11, 0x05,
     139,   12,   11,   11, 0x05,
     174,   12,   11,   11, 0x05,
     211,   12,   11,   11, 0x05,
     248,  245,   11,   11, 0x05,
     297,   12,   11,   11, 0x05,
     345,   12,   11,   11, 0x05,
     405,   12,   11,   11, 0x05,
     439,   11,   11,   11, 0x05,
     472,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     496,   11,   11,   11, 0x0a,
     524,   11,  515,   11, 0x0a,
     556,   11,  540,   11, 0x0a,
     581,   11,   11,   11, 0x0a,
     605,   12,   11,   11, 0x0a,
     634,   11,   11,   11, 0x0a,
     652,   11,   11,   11, 0x08,
     678,   12,   11,   11, 0x08,
     751,   12,   11,   11, 0x08,
     824,   11,   11,   11, 0x08,
     865,  863,   11,   11, 0x08,

 // properties: name, type, flags
     893,  888, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QETProject[] = {
    "QETProject\0\0,\0projectFilePathChanged(QETProject*,QString)\0"
    "projectTitleChanged(QETProject*,QString)\0"
    "projectInformationsChanged(QETProject*)\0"
    "diagramAdded(QETProject*,Diagram*)\0"
    "diagramRemoved(QETProject*,Diagram*)\0"
    "projectModified(QETProject*,bool)\0,,\0"
    "projectDiagramsOrderChanged(QETProject*,int,int)\0"
    "elementIntegrated(QETProject*,ElementsLocation)\0"
    "diagramUsedTemplate(TitleBlockTemplatesCollection*,QString)\0"
    "readOnlyChanged(QETProject*,bool)\0"
    "reportPropertiesChanged(QString)\0"
    "XRefPropertiesChanged()\0componentWritten()\0"
    "Diagram*\0addNewDiagram()\0QList<Diagram*>\0"
    "addNewDiagramFolioList()\0"
    "removeDiagram(Diagram*)\0"
    "diagramOrderChanged(int,int)\0"
    "setModified(bool)\0updateDiagramsFolioData()\0"
    "updateDiagramsTitleBlockTemplate(TitleBlockTemplatesCollection*,QStrin"
    "g)\0"
    "removeDiagramsTitleBlockTemplate(TitleBlockTemplatesCollection*,QStrin"
    "g)\0"
    "usedTitleBlockTemplateChanged(QString)\0"
    "a\0undoStackChanged(bool)\0bool\0"
    "autoConductor\0"
};

void QETProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETProject *_t = static_cast<QETProject *>(_o);
        switch (_id) {
        case 0: _t->projectFilePathChanged((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->projectTitleChanged((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->projectInformationsChanged((*reinterpret_cast< QETProject*(*)>(_a[1]))); break;
        case 3: _t->diagramAdded((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< Diagram*(*)>(_a[2]))); break;
        case 4: _t->diagramRemoved((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< Diagram*(*)>(_a[2]))); break;
        case 5: _t->projectModified((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->projectDiagramsOrderChanged((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->elementIntegrated((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const ElementsLocation(*)>(_a[2]))); break;
        case 8: _t->diagramUsedTemplate((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->readOnlyChanged((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->reportPropertiesChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->XRefPropertiesChanged(); break;
        case 12: _t->componentWritten(); break;
        case 13: { Diagram* _r = _t->addNewDiagram();
            if (_a[0]) *reinterpret_cast< Diagram**>(_a[0]) = _r; }  break;
        case 14: { QList<Diagram*> _r = _t->addNewDiagramFolioList();
            if (_a[0]) *reinterpret_cast< QList<Diagram*>*>(_a[0]) = _r; }  break;
        case 15: _t->removeDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 16: _t->diagramOrderChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->updateDiagramsFolioData(); break;
        case 19: _t->updateDiagramsTitleBlockTemplate((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->removeDiagramsTitleBlockTemplate((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->usedTitleBlockTemplateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->undoStackChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETProject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETProject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QETProject,
      qt_meta_data_QETProject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETProject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETProject))
        return static_cast<void*>(const_cast< QETProject*>(this));
    return QObject::qt_metacast(_clname);
}

int QETProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = autoConductor(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAutoConductor(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QETProject::projectFilePathChanged(QETProject * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QETProject::projectTitleChanged(QETProject * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QETProject::projectInformationsChanged(QETProject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QETProject::diagramAdded(QETProject * _t1, Diagram * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QETProject::diagramRemoved(QETProject * _t1, Diagram * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QETProject::projectModified(QETProject * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QETProject::projectDiagramsOrderChanged(QETProject * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QETProject::elementIntegrated(QETProject * _t1, const ElementsLocation & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QETProject::diagramUsedTemplate(TitleBlockTemplatesCollection * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QETProject::readOnlyChanged(QETProject * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QETProject::reportPropertiesChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QETProject::XRefPropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
