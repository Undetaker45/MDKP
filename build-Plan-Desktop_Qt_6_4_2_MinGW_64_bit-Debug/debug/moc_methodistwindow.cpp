/****************************************************************************
** Meta object code from reading C++ file 'methodistwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Plan/methodistwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'methodistwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MethodistWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[35];
    char stringdata4[25];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[22];
    char stringdata8[28];
    char stringdata9[8];
    char stringdata10[7];
    char stringdata11[24];
    char stringdata12[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MethodistWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MethodistWindow_t qt_meta_stringdata_MethodistWindow = {
    {
        QT_MOC_LITERAL(0, 15),  // "MethodistWindow"
        QT_MOC_LITERAL(16, 25),  // "signalLogoutButtonClicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 34),  // "slotBackButtonSettingsWidgetC..."
        QT_MOC_LITERAL(78, 24),  // "slotDoubleClikedOnLesson"
        QT_MOC_LITERAL(103, 11),  // "QModelIndex"
        QT_MOC_LITERAL(115, 5),  // "index"
        QT_MOC_LITERAL(121, 21),  // "slotClicedOnButtonAdd"
        QT_MOC_LITERAL(143, 27),  // "slotRefreshLessonInDatabase"
        QT_MOC_LITERAL(171, 7),  // "Lesson&"
        QT_MOC_LITERAL(179, 6),  // "lesson"
        QT_MOC_LITERAL(186, 23),  // "slotAddLessonInDatabase"
        QT_MOC_LITERAL(210, 22)   // "slotClicedOnButtonTime"
    },
    "MethodistWindow",
    "signalLogoutButtonClicked",
    "",
    "slotBackButtonSettingsWidgetCliked",
    "slotDoubleClikedOnLesson",
    "QModelIndex",
    "index",
    "slotClicedOnButtonAdd",
    "slotRefreshLessonInDatabase",
    "Lesson&",
    "lesson",
    "slotAddLessonInDatabase",
    "slotClicedOnButtonTime"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MethodistWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x0a,    2 /* Public */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       7,    0,   61,    2, 0x08,    5 /* Private */,
       8,    1,   62,    2, 0x08,    6 /* Private */,
      11,    1,   65,    2, 0x08,    8 /* Private */,
      12,    0,   68,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MethodistWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractUserWindow::staticMetaObject>(),
    qt_meta_stringdata_MethodistWindow.offsetsAndSizes,
    qt_meta_data_MethodistWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MethodistWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MethodistWindow, std::true_type>,
        // method 'signalLogoutButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBackButtonSettingsWidgetCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDoubleClikedOnLesson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'slotClicedOnButtonAdd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshLessonInDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Lesson &, std::false_type>,
        // method 'slotAddLessonInDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Lesson &, std::false_type>,
        // method 'slotClicedOnButtonTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MethodistWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MethodistWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalLogoutButtonClicked(); break;
        case 1: _t->slotBackButtonSettingsWidgetCliked(); break;
        case 2: _t->slotDoubleClikedOnLesson((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->slotClicedOnButtonAdd(); break;
        case 4: _t->slotRefreshLessonInDatabase((*reinterpret_cast< std::add_pointer_t<Lesson&>>(_a[1]))); break;
        case 5: _t->slotAddLessonInDatabase((*reinterpret_cast< std::add_pointer_t<Lesson&>>(_a[1]))); break;
        case 6: _t->slotClicedOnButtonTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MethodistWindow::*)();
            if (_t _q_method = &MethodistWindow::signalLogoutButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MethodistWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MethodistWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MethodistWindow.stringdata0))
        return static_cast<void*>(this);
    return AbstractUserWindow::qt_metacast(_clname);
}

int MethodistWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractUserWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MethodistWindow::signalLogoutButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
