/****************************************************************************
** Meta object code from reading C++ file 'QmitkTemplateView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/QmitkTemplateView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmitkTemplateView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MypluginNameUIControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      43,   22,   22,   22, 0x09,
      57,   22,   22,   22, 0x09,
      66,   22,   22,   22, 0x09,
      77,   22,   22,   22, 0x09,
      88,   22,   22,   22, 0x09,
      99,   22,   22,   22, 0x09,
     108,   22,   22,   22, 0x09,
     120,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MypluginNameUIControl[] = {
    "MypluginNameUIControl\0\0DoImageProcessing()\0"
    "Createimage()\0qwidge()\0qwidge_2()\0"
    "qwidge_3()\0qwidge_4()\0Delete()\0"
    "onedelete()\0Readdata()\0"
};

void MypluginNameUIControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MypluginNameUIControl *_t = static_cast<MypluginNameUIControl *>(_o);
        switch (_id) {
        case 0: _t->DoImageProcessing(); break;
        case 1: _t->Createimage(); break;
        case 2: _t->qwidge(); break;
        case 3: _t->qwidge_2(); break;
        case 4: _t->qwidge_3(); break;
        case 5: _t->qwidge_4(); break;
        case 6: _t->Delete(); break;
        case 7: _t->onedelete(); break;
        case 8: _t->Readdata(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MypluginNameUIControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MypluginNameUIControl::staticMetaObject = {
    { &QmitkAbstractView::staticMetaObject, qt_meta_stringdata_MypluginNameUIControl,
      qt_meta_data_MypluginNameUIControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MypluginNameUIControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MypluginNameUIControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MypluginNameUIControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MypluginNameUIControl))
        return static_cast<void*>(const_cast< MypluginNameUIControl*>(this));
    return QmitkAbstractView::qt_metacast(_clname);
}

int MypluginNameUIControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmitkAbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
