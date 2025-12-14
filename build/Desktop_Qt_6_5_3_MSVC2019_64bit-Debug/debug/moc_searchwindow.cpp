/****************************************************************************
** Meta object code from reading C++ file 'searchwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Role_Enquiry_System_copy/Role_Enquiry_System_copy/searchwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSsearchwindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSsearchwindowENDCLASS = QtMocHelpers::stringData(
    "searchwindow",
    "searching",
    "",
    "vector<int>",
    "a",
    "record"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSsearchwindowENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[13];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[2];
    char stringdata5[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSsearchwindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSsearchwindowENDCLASS_t qt_meta_stringdata_CLASSsearchwindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "searchwindow"
        QT_MOC_LITERAL(13, 9),  // "searching"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 11),  // "vector<int>"
        QT_MOC_LITERAL(36, 1),  // "a"
        QT_MOC_LITERAL(38, 6)   // "record"
    },
    "searchwindow",
    "searching",
    "",
    "vector<int>",
    "a",
    "record"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsearchwindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       5,    0,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject searchwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSsearchwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsearchwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsearchwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<searchwindow, std::true_type>,
        // method 'searching'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<int>, std::false_type>,
        // method 'record'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void searchwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<searchwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searching((*reinterpret_cast< std::add_pointer_t<vector<int>>>(_a[1]))); break;
        case 1: _t->record(); break;
        default: ;
        }
    }
}

const QMetaObject *searchwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *searchwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsearchwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int searchwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
