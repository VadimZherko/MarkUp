/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Dialog_t {
    uint offsetsAndSizes[36];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[2];
    char stringdata5[3];
    char stringdata6[8];
    char stringdata7[19];
    char stringdata8[16];
    char stringdata9[13];
    char stringdata10[13];
    char stringdata11[18];
    char stringdata12[18];
    char stringdata13[24];
    char stringdata14[21];
    char stringdata15[21];
    char stringdata16[25];
    char stringdata17[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Dialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
        QT_MOC_LITERAL(0, 6),  // "Dialog"
        QT_MOC_LITERAL(7, 9),  // "dataReady"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 1),  // "x"
        QT_MOC_LITERAL(20, 1),  // "y"
        QT_MOC_LITERAL(22, 2),  // "id"
        QT_MOC_LITERAL(25, 7),  // "angular"
        QT_MOC_LITERAL(33, 18),  // "dataDuplicateReady"
        QT_MOC_LITERAL(52, 15),  // "dataMoveToReady"
        QT_MOC_LITERAL(68, 12),  // "saveFilePath"
        QT_MOC_LITERAL(81, 12),  // "loadFilePath"
        QT_MOC_LITERAL(94, 17),  // "setScrollHandDrag"
        QT_MOC_LITERAL(112, 17),  // "showAddMarkDialog"
        QT_MOC_LITERAL(130, 23),  // "showDuplicateMarkDialog"
        QT_MOC_LITERAL(154, 20),  // "std::pair<qreal,int>"
        QT_MOC_LITERAL(175, 20),  // "showMoveToMarkDialog"
        QT_MOC_LITERAL(196, 24),  // "showSaveMarkInFileDialog"
        QT_MOC_LITERAL(221, 26)   // "showLoadMarkFromFileDialog"
    },
    "Dialog",
    "dataReady",
    "",
    "x",
    "y",
    "id",
    "angular",
    "dataDuplicateReady",
    "dataMoveToReady",
    "saveFilePath",
    "loadFilePath",
    "setScrollHandDrag",
    "showAddMarkDialog",
    "showDuplicateMarkDialog",
    "std::pair<qreal,int>",
    "showMoveToMarkDialog",
    "showSaveMarkInFileDialog",
    "showLoadMarkFromFileDialog"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Dialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   80,    2, 0x06,    1 /* Public */,
       7,    2,   89,    2, 0x06,    6 /* Public */,
       8,    2,   94,    2, 0x06,    9 /* Public */,
       9,    1,   99,    2, 0x06,   12 /* Public */,
      10,    1,  102,    2, 0x06,   14 /* Public */,
      11,    0,  105,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  106,    2, 0x0a,   17 /* Public */,
      13,    0,  107,    2, 0x0a,   18 /* Public */,
      15,    0,  108,    2, 0x0a,   19 /* Public */,
      16,    0,  109,    2, 0x0a,   20 /* Public */,
      17,    0,  110,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.offsetsAndSizes,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dialog, std::true_type>,
        // method 'dataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dataDuplicateReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dataMoveToReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'saveFilePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadFilePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setScrollHandDrag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAddMarkDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDuplicateMarkDialog'
        QtPrivate::TypeAndForceComplete<QPair<qreal,int>, std::false_type>,
        // method 'showMoveToMarkDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSaveMarkInFileDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showLoadMarkFromFileDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 1: _t->dataDuplicateReady((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->dataMoveToReady((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->saveFilePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->loadFilePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setScrollHandDrag(); break;
        case 6: _t->showAddMarkDialog(); break;
        case 7: { std::pair<qreal,int> _r = _t->showDuplicateMarkDialog();
            if (_a[0]) *reinterpret_cast< std::pair<qreal,int>*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->showMoveToMarkDialog(); break;
        case 9: _t->showSaveMarkInFileDialog(); break;
        case 10: _t->showLoadMarkFromFileDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dialog::*)(double , double , int , int );
            if (_t _q_method = &Dialog::dataReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(double , int );
            if (_t _q_method = &Dialog::dataDuplicateReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(double , double );
            if (_t _q_method = &Dialog::dataMoveToReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString );
            if (_t _q_method = &Dialog::saveFilePath; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString );
            if (_t _q_method = &Dialog::loadFilePath; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Dialog::*)();
            if (_t _q_method = &Dialog::setScrollHandDrag; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Dialog::dataReady(double _t1, double _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::dataDuplicateReady(double _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::dataMoveToReady(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Dialog::saveFilePath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Dialog::loadFilePath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Dialog::setScrollHandDrag()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
