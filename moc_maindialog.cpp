/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created: Sat Mar 5 17:19:20 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "maindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   12,   11,   11, 0x0a,
      61,   11,   11,   11, 0x08,
      95,   90,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     155,   11,   11,   11, 0x08,
     185,   11,   11,   11, 0x08,
     221,   11,   11,   11, 0x08,
     258,   11,   11,   11, 0x08,
     295,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainDialog[] = {
    "MainDialog\0\0strIp,strMask\0"
    "on_StNewIpEntered(QString,QString)\0"
    "on_St_ipPushButton_clicked()\0arg1\0"
    "on_Se_CSComboBox_activated(QString)\0"
    "run_keyboard_lineEdit()\0"
    "on_Se_SetpushButton_clicked()\0"
    "on_St_serialRunPushButton_clicked()\0"
    "on_St_serialStopPushButton_clicked()\0"
    "on_St_nbdConnectPushButton_clicked()\0"
    "on_St_nbdStopPushButton_clicked()\0"
    "on_Se_nbdPushButton_clicked()\0"
};

const QMetaObject MainDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainDialog,
      qt_meta_data_MainDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog))
        return static_cast<void*>(const_cast< MainDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_StNewIpEntered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: on_St_ipPushButton_clicked(); break;
        case 2: on_Se_CSComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: run_keyboard_lineEdit(); break;
        case 4: on_Se_SetpushButton_clicked(); break;
        case 5: on_St_serialRunPushButton_clicked(); break;
        case 6: on_St_serialStopPushButton_clicked(); break;
        case 7: on_St_nbdConnectPushButton_clicked(); break;
        case 8: on_St_nbdStopPushButton_clicked(); break;
        case 9: on_Se_nbdPushButton_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
