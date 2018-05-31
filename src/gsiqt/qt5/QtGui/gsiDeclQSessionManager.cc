
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
*  @file gsiDeclQSessionManager.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSessionManager>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSessionManager

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QSessionManager::staticMetaObject);
}


// bool QSessionManager::allowsErrorInteraction()


static void _init_f_allowsErrorInteraction_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_allowsErrorInteraction_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSessionManager *)cls)->allowsErrorInteraction ());
}


// bool QSessionManager::allowsInteraction()


static void _init_f_allowsInteraction_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_allowsInteraction_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSessionManager *)cls)->allowsInteraction ());
}


// void QSessionManager::cancel()


static void _init_f_cancel_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_cancel_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->cancel ();
}


// QStringList QSessionManager::discardCommand()


static void _init_f_discardCommand_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_discardCommand_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QSessionManager *)cls)->discardCommand ());
}


// bool QSessionManager::isPhase2()


static void _init_f_isPhase2_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isPhase2_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSessionManager *)cls)->isPhase2 ());
}


// void QSessionManager::release()


static void _init_f_release_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_release_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->release ();
}


// void QSessionManager::requestPhase2()


static void _init_f_requestPhase2_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_requestPhase2_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->requestPhase2 ();
}


// QStringList QSessionManager::restartCommand()


static void _init_f_restartCommand_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_restartCommand_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QSessionManager *)cls)->restartCommand ());
}


// QSessionManager::RestartHint QSessionManager::restartHint()


static void _init_f_restartHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSessionManager::RestartHint>::target_type > ();
}

static void _call_f_restartHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSessionManager::RestartHint>::target_type > ((qt_gsi::Converter<QSessionManager::RestartHint>::target_type)qt_gsi::CppToQtAdaptor<QSessionManager::RestartHint>(((QSessionManager *)cls)->restartHint ()));
}


// QString QSessionManager::sessionId()


static void _init_f_sessionId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_sessionId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSessionManager *)cls)->sessionId ());
}


// QString QSessionManager::sessionKey()


static void _init_f_sessionKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_sessionKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSessionManager *)cls)->sessionKey ());
}


// void QSessionManager::setDiscardCommand(const QStringList &)


static void _init_f_setDiscardCommand_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDiscardCommand_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = args.read<const QStringList & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->setDiscardCommand (arg1);
}


// void QSessionManager::setManagerProperty(const QString &name, const QString &value)


static void _init_f_setManagerProperty_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setManagerProperty_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->setManagerProperty (arg1, arg2);
}


// void QSessionManager::setManagerProperty(const QString &name, const QStringList &value)


static void _init_f_setManagerProperty_4354 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringList & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setManagerProperty_4354 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QStringList &arg2 = args.read<const QStringList & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->setManagerProperty (arg1, arg2);
}


// void QSessionManager::setRestartCommand(const QStringList &)


static void _init_f_setRestartCommand_2437 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRestartCommand_2437 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = args.read<const QStringList & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->setRestartCommand (arg1);
}


// void QSessionManager::setRestartHint(QSessionManager::RestartHint)


static void _init_f_setRestartHint_3216 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QSessionManager::RestartHint>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRestartHint_3216 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSessionManager::RestartHint>::target_type & arg1 = args.read<const qt_gsi::Converter<QSessionManager::RestartHint>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSessionManager *)cls)->setRestartHint (qt_gsi::QtToCppAdaptor<QSessionManager::RestartHint>(arg1).cref());
}


// static QString QSessionManager::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSessionManager::tr (arg1, arg2, arg3));
}


// static QString QSessionManager::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QSessionManager::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QSessionManager () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("allowsErrorInteraction", "@brief Method bool QSessionManager::allowsErrorInteraction()\n", false, &_init_f_allowsErrorInteraction_0, &_call_f_allowsErrorInteraction_0);
  methods += new qt_gsi::GenericMethod ("allowsInteraction", "@brief Method bool QSessionManager::allowsInteraction()\n", false, &_init_f_allowsInteraction_0, &_call_f_allowsInteraction_0);
  methods += new qt_gsi::GenericMethod ("cancel", "@brief Method void QSessionManager::cancel()\n", false, &_init_f_cancel_0, &_call_f_cancel_0);
  methods += new qt_gsi::GenericMethod (":discardCommand", "@brief Method QStringList QSessionManager::discardCommand()\n", true, &_init_f_discardCommand_c0, &_call_f_discardCommand_c0);
  methods += new qt_gsi::GenericMethod ("isPhase2?", "@brief Method bool QSessionManager::isPhase2()\n", true, &_init_f_isPhase2_c0, &_call_f_isPhase2_c0);
  methods += new qt_gsi::GenericMethod ("release", "@brief Method void QSessionManager::release()\n", false, &_init_f_release_0, &_call_f_release_0);
  methods += new qt_gsi::GenericMethod ("requestPhase2", "@brief Method void QSessionManager::requestPhase2()\n", false, &_init_f_requestPhase2_0, &_call_f_requestPhase2_0);
  methods += new qt_gsi::GenericMethod (":restartCommand", "@brief Method QStringList QSessionManager::restartCommand()\n", true, &_init_f_restartCommand_c0, &_call_f_restartCommand_c0);
  methods += new qt_gsi::GenericMethod (":restartHint", "@brief Method QSessionManager::RestartHint QSessionManager::restartHint()\n", true, &_init_f_restartHint_c0, &_call_f_restartHint_c0);
  methods += new qt_gsi::GenericMethod ("sessionId", "@brief Method QString QSessionManager::sessionId()\n", true, &_init_f_sessionId_c0, &_call_f_sessionId_c0);
  methods += new qt_gsi::GenericMethod ("sessionKey", "@brief Method QString QSessionManager::sessionKey()\n", true, &_init_f_sessionKey_c0, &_call_f_sessionKey_c0);
  methods += new qt_gsi::GenericMethod ("setDiscardCommand|discardCommand=", "@brief Method void QSessionManager::setDiscardCommand(const QStringList &)\n", false, &_init_f_setDiscardCommand_2437, &_call_f_setDiscardCommand_2437);
  methods += new qt_gsi::GenericMethod ("setManagerProperty", "@brief Method void QSessionManager::setManagerProperty(const QString &name, const QString &value)\n", false, &_init_f_setManagerProperty_3942, &_call_f_setManagerProperty_3942);
  methods += new qt_gsi::GenericMethod ("setManagerProperty", "@brief Method void QSessionManager::setManagerProperty(const QString &name, const QStringList &value)\n", false, &_init_f_setManagerProperty_4354, &_call_f_setManagerProperty_4354);
  methods += new qt_gsi::GenericMethod ("setRestartCommand|restartCommand=", "@brief Method void QSessionManager::setRestartCommand(const QStringList &)\n", false, &_init_f_setRestartCommand_2437, &_call_f_setRestartCommand_2437);
  methods += new qt_gsi::GenericMethod ("setRestartHint|restartHint=", "@brief Method void QSessionManager::setRestartHint(QSessionManager::RestartHint)\n", false, &_init_f_setRestartHint_3216, &_call_f_setRestartHint_3216);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QSessionManager::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QSessionManager::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QSessionManager::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QSessionManager> decl_QSessionManager (qtdecl_QObject (), "QtGui", "QSessionManager",
  methods_QSessionManager (),
  "@qt\n@brief Binding of QSessionManager");


GSI_QTGUI_PUBLIC gsi::Class<QSessionManager> &qtdecl_QSessionManager () { return decl_QSessionManager; }

}


//  Implementation of the enum wrapper class for QSessionManager::RestartHint
namespace qt_gsi
{

static gsi::Enum<QSessionManager::RestartHint> decl_QSessionManager_RestartHint_Enum ("QtGui", "QSessionManager_RestartHint",
    gsi::enum_const ("RestartIfRunning", QSessionManager::RestartIfRunning, "@brief Enum constant QSessionManager::RestartIfRunning") +
    gsi::enum_const ("RestartAnyway", QSessionManager::RestartAnyway, "@brief Enum constant QSessionManager::RestartAnyway") +
    gsi::enum_const ("RestartImmediately", QSessionManager::RestartImmediately, "@brief Enum constant QSessionManager::RestartImmediately") +
    gsi::enum_const ("RestartNever", QSessionManager::RestartNever, "@brief Enum constant QSessionManager::RestartNever"),
  "@qt\n@brief This class represents the QSessionManager::RestartHint enum");

static gsi::QFlagsClass<QSessionManager::RestartHint > decl_QSessionManager_RestartHint_Enums ("QtGui", "QSessionManager_QFlags_RestartHint",
  "@qt\n@brief This class represents the QFlags<QSessionManager::RestartHint> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSessionManager> inject_QSessionManager_RestartHint_Enum_in_parent (decl_QSessionManager_RestartHint_Enum.defs ());
static gsi::ClassExt<QSessionManager> decl_QSessionManager_RestartHint_Enum_as_child (decl_QSessionManager_RestartHint_Enum, "RestartHint");
static gsi::ClassExt<QSessionManager> decl_QSessionManager_RestartHint_Enums_as_child (decl_QSessionManager_RestartHint_Enums, "QFlags_RestartHint");

}

