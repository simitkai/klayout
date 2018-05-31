
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
*  @file gsiDeclQXmlStreamEntityDeclaration.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamEntityDeclaration>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamEntityDeclaration

//  Constructor QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration()


static void _init_ctor_QXmlStreamEntityDeclaration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamEntityDeclaration> ();
}

static void _call_ctor_QXmlStreamEntityDeclaration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamEntityDeclaration *> (new QXmlStreamEntityDeclaration ());
}


//  Constructor QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration &)


static void _init_ctor_QXmlStreamEntityDeclaration_4082 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamEntityDeclaration & > (argspec_0);
  decl->set_return_new<QXmlStreamEntityDeclaration> ();
}

static void _call_ctor_QXmlStreamEntityDeclaration_4082 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamEntityDeclaration &arg1 = args.read<const QXmlStreamEntityDeclaration & > (heap);
  ret.write<QXmlStreamEntityDeclaration *> (new QXmlStreamEntityDeclaration (arg1));
}


// QStringRef QXmlStreamEntityDeclaration::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamEntityDeclaration *)cls)->name ());
}


// QStringRef QXmlStreamEntityDeclaration::notationName()


static void _init_f_notationName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_notationName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamEntityDeclaration *)cls)->notationName ());
}


// bool QXmlStreamEntityDeclaration::operator!=(const QXmlStreamEntityDeclaration &other)


static void _init_f_operator_excl__eq__c4082 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamEntityDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c4082 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamEntityDeclaration &arg1 = args.read<const QXmlStreamEntityDeclaration & > (heap);
  ret.write<bool > ((bool)((QXmlStreamEntityDeclaration *)cls)->operator!= (arg1));
}


// QXmlStreamEntityDeclaration &QXmlStreamEntityDeclaration::operator=(const QXmlStreamEntityDeclaration &)


static void _init_f_operator_eq__4082 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamEntityDeclaration & > (argspec_0);
  decl->set_return<QXmlStreamEntityDeclaration & > ();
}

static void _call_f_operator_eq__4082 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamEntityDeclaration &arg1 = args.read<const QXmlStreamEntityDeclaration & > (heap);
  ret.write<QXmlStreamEntityDeclaration & > ((QXmlStreamEntityDeclaration &)((QXmlStreamEntityDeclaration *)cls)->operator= (arg1));
}


// bool QXmlStreamEntityDeclaration::operator==(const QXmlStreamEntityDeclaration &other)


static void _init_f_operator_eq__eq__c4082 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamEntityDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c4082 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamEntityDeclaration &arg1 = args.read<const QXmlStreamEntityDeclaration & > (heap);
  ret.write<bool > ((bool)((QXmlStreamEntityDeclaration *)cls)->operator== (arg1));
}


// QStringRef QXmlStreamEntityDeclaration::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamEntityDeclaration *)cls)->publicId ());
}


// QStringRef QXmlStreamEntityDeclaration::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamEntityDeclaration *)cls)->systemId ());
}


// QStringRef QXmlStreamEntityDeclaration::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamEntityDeclaration *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamEntityDeclaration () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration()\nThis method creates an object of class QXmlStreamEntityDeclaration.", &_init_ctor_QXmlStreamEntityDeclaration_0, &_call_ctor_QXmlStreamEntityDeclaration_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamEntityDeclaration::QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration &)\nThis method creates an object of class QXmlStreamEntityDeclaration.", &_init_ctor_QXmlStreamEntityDeclaration_4082, &_call_ctor_QXmlStreamEntityDeclaration_4082);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QStringRef QXmlStreamEntityDeclaration::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("notationName", "@brief Method QStringRef QXmlStreamEntityDeclaration::notationName()\n", true, &_init_f_notationName_c0, &_call_f_notationName_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlStreamEntityDeclaration::operator!=(const QXmlStreamEntityDeclaration &other)\n", true, &_init_f_operator_excl__eq__c4082, &_call_f_operator_excl__eq__c4082);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlStreamEntityDeclaration &QXmlStreamEntityDeclaration::operator=(const QXmlStreamEntityDeclaration &)\n", false, &_init_f_operator_eq__4082, &_call_f_operator_eq__4082);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlStreamEntityDeclaration::operator==(const QXmlStreamEntityDeclaration &other)\n", true, &_init_f_operator_eq__eq__c4082, &_call_f_operator_eq__eq__c4082);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QStringRef QXmlStreamEntityDeclaration::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QStringRef QXmlStreamEntityDeclaration::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QStringRef QXmlStreamEntityDeclaration::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QXmlStreamEntityDeclaration> decl_QXmlStreamEntityDeclaration ("QtCore", "QXmlStreamEntityDeclaration",
  methods_QXmlStreamEntityDeclaration (),
  "@qt\n@brief Binding of QXmlStreamEntityDeclaration");


GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamEntityDeclaration> &qtdecl_QXmlStreamEntityDeclaration () { return decl_QXmlStreamEntityDeclaration; }

}

