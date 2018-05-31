
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQGenericPlugin.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGenericPlugin>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGenericPlugin

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QGenericPlugin::staticMetaObject);
}


// QObject *QGenericPlugin::create(const QString &name, const QString &spec)


static void _init_f_create_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("spec");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_f_create_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QObject * > ((QObject *)((QGenericPlugin *)cls)->create (arg1, arg2));
}


// static QString QGenericPlugin::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QGenericPlugin::tr (arg1, arg2, arg3));
}


// static QString QGenericPlugin::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QGenericPlugin::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QGenericPlugin () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QObject *QGenericPlugin::create(const QString &name, const QString &spec)\n", false, &_init_f_create_3942, &_call_f_create_3942);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QGenericPlugin::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QGenericPlugin::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QGenericPlugin::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QGenericPlugin> decl_QGenericPlugin (qtdecl_QObject (), "QtGui", "QGenericPlugin_Native",
  methods_QGenericPlugin (),
  "@hide\n@alias QGenericPlugin");

GSI_QTGUI_PUBLIC gsi::Class<QGenericPlugin> &qtdecl_QGenericPlugin () { return decl_QGenericPlugin; }

}


class QGenericPlugin_Adaptor : public QGenericPlugin, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGenericPlugin_Adaptor();

  //  [adaptor ctor] QGenericPlugin::QGenericPlugin(QObject *parent)
  QGenericPlugin_Adaptor() : QGenericPlugin()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGenericPlugin::QGenericPlugin(QObject *parent)
  QGenericPlugin_Adaptor(QObject *parent) : QGenericPlugin(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QGenericPlugin::isSignalConnected(const QMetaMethod &signal)
  bool fp_QGenericPlugin_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QGenericPlugin::isSignalConnected(signal);
  }

  //  [expose] int QGenericPlugin::receivers(const char *signal)
  int fp_QGenericPlugin_receivers_c1731 (const char *signal) const {
    return QGenericPlugin::receivers(signal);
  }

  //  [expose] QObject *QGenericPlugin::sender()
  QObject * fp_QGenericPlugin_sender_c0 () const {
    return QGenericPlugin::sender();
  }

  //  [expose] int QGenericPlugin::senderSignalIndex()
  int fp_QGenericPlugin_senderSignalIndex_c0 () const {
    return QGenericPlugin::senderSignalIndex();
  }

  //  [adaptor impl] QObject *QGenericPlugin::create(const QString &name, const QString &spec)
  QObject * cbs_create_3942_0(const QString &name, const QString &spec)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    __SUPPRESS_UNUSED_WARNING (spec);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QObject * create(const QString &name, const QString &spec)
  {
    if (cb_create_3942_0.can_issue()) {
      return cb_create_3942_0.issue<QGenericPlugin_Adaptor, QObject *, const QString &, const QString &>(&QGenericPlugin_Adaptor::cbs_create_3942_0, name, spec);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [emitter impl] void QGenericPlugin::destroyed(QObject *)
  void emitter_QGenericPlugin_destroyed_1302(QObject *arg1)
  {
    emit QGenericPlugin::destroyed(arg1);
  }

  //  [adaptor impl] bool QGenericPlugin::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QGenericPlugin::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QGenericPlugin_Adaptor, bool, QEvent *>(&QGenericPlugin_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QGenericPlugin::event(arg1);
    }
  }

  //  [adaptor impl] bool QGenericPlugin::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QGenericPlugin::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QGenericPlugin_Adaptor, bool, QObject *, QEvent *>(&QGenericPlugin_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QGenericPlugin::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QGenericPlugin::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QGenericPlugin::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QGenericPlugin_Adaptor, QChildEvent *>(&QGenericPlugin_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QGenericPlugin::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QGenericPlugin::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QGenericPlugin::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QGenericPlugin_Adaptor, QEvent *>(&QGenericPlugin_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QGenericPlugin::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QGenericPlugin::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QGenericPlugin::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QGenericPlugin_Adaptor, const QMetaMethod &>(&QGenericPlugin_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QGenericPlugin::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QGenericPlugin::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QGenericPlugin::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QGenericPlugin_Adaptor, QTimerEvent *>(&QGenericPlugin_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QGenericPlugin::timerEvent(arg1);
    }
  }

  gsi::Callback cb_create_3942_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QGenericPlugin_Adaptor::~QGenericPlugin_Adaptor() { }

//  Constructor QGenericPlugin::QGenericPlugin(QObject *parent) (adaptor class)

static void _init_ctor_QGenericPlugin_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QGenericPlugin_Adaptor> ();
}

static void _call_ctor_QGenericPlugin_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QGenericPlugin_Adaptor *> (new QGenericPlugin_Adaptor (arg1));
}


// void QGenericPlugin::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGenericPlugin_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QObject *QGenericPlugin::create(const QString &name, const QString &spec)

static void _init_cbs_create_3942_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("spec");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_cbs_create_3942_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QObject * > ((QObject *)((QGenericPlugin_Adaptor *)cls)->cbs_create_3942_0 (arg1, arg2));
}

static void _set_callback_cbs_create_3942_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_create_3942_0 = cb;
}


// void QGenericPlugin::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGenericPlugin_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QGenericPlugin::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QGenericPlugin_Adaptor *)cls)->emitter_QGenericPlugin_destroyed_1302 (arg1);
}


// void QGenericPlugin::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGenericPlugin_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QGenericPlugin::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QGenericPlugin_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QGenericPlugin::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QGenericPlugin_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QGenericPlugin::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QGenericPlugin_Adaptor *)cls)->fp_QGenericPlugin_isSignalConnected_c2394 (arg1));
}


// exposed int QGenericPlugin::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QGenericPlugin_Adaptor *)cls)->fp_QGenericPlugin_receivers_c1731 (arg1));
}


// exposed QObject *QGenericPlugin::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QGenericPlugin_Adaptor *)cls)->fp_QGenericPlugin_sender_c0 ());
}


// exposed int QGenericPlugin::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QGenericPlugin_Adaptor *)cls)->fp_QGenericPlugin_senderSignalIndex_c0 ());
}


// void QGenericPlugin::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGenericPlugin_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QGenericPlugin_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QGenericPlugin> &qtdecl_QGenericPlugin ();

static gsi::Methods methods_QGenericPlugin_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGenericPlugin::QGenericPlugin(QObject *parent)\nThis method creates an object of class QGenericPlugin.", &_init_ctor_QGenericPlugin_Adaptor_1302, &_call_ctor_QGenericPlugin_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QGenericPlugin::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", false, &_init_cbs_create_3942_0, &_call_cbs_create_3942_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QObject *QGenericPlugin::create(const QString &name, const QString &spec)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_3942_0, &_call_cbs_create_3942_0, &_set_callback_cbs_create_3942_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QGenericPlugin::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QGenericPlugin::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QGenericPlugin::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QGenericPlugin::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QGenericPlugin::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QGenericPlugin::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QGenericPlugin::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QGenericPlugin::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QGenericPlugin::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QGenericPlugin::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QGenericPlugin_Adaptor> decl_QGenericPlugin_Adaptor (qtdecl_QGenericPlugin (), "QtGui", "QGenericPlugin",
  methods_QGenericPlugin_Adaptor (),
  "@qt\n@brief Binding of QGenericPlugin");

}

