
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
*  @file gsiDeclQMetaObject_Connection.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaObject::Connection

//  Constructor QMetaObject::Connection::Connection()


static void _init_ctor_QMetaObject_Connection_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaObject::Connection> ();
}

static void _call_ctor_QMetaObject_Connection_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaObject::Connection *> (new QMetaObject::Connection ());
}


//  Constructor QMetaObject::Connection::Connection(const QMetaObject::Connection &other)


static void _init_ctor_QMetaObject_Connection_3540 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMetaObject::Connection & > (argspec_0);
  decl->set_return_new<QMetaObject::Connection> ();
}

static void _call_ctor_QMetaObject_Connection_3540 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaObject::Connection &arg1 = args.read<const QMetaObject::Connection & > (heap);
  ret.write<QMetaObject::Connection *> (new QMetaObject::Connection (arg1));
}


// QMetaObject::Connection &QMetaObject::Connection::operator=(const QMetaObject::Connection &other)


static void _init_f_operator_eq__3540 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMetaObject::Connection & > (argspec_0);
  decl->set_return<QMetaObject::Connection & > ();
}

static void _call_f_operator_eq__3540 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaObject::Connection &arg1 = args.read<const QMetaObject::Connection & > (heap);
  ret.write<QMetaObject::Connection & > ((QMetaObject::Connection &)((QMetaObject::Connection *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QMetaObject_Connection () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::Connection::Connection()\nThis method creates an object of class QMetaObject::Connection.", &_init_ctor_QMetaObject_Connection_0, &_call_ctor_QMetaObject_Connection_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::Connection::Connection(const QMetaObject::Connection &other)\nThis method creates an object of class QMetaObject::Connection.", &_init_ctor_QMetaObject_Connection_3540, &_call_ctor_QMetaObject_Connection_3540);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMetaObject::Connection &QMetaObject::Connection::operator=(const QMetaObject::Connection &other)\n", false, &_init_f_operator_eq__3540, &_call_f_operator_eq__3540);
  return methods;
}

gsi::Class<QMetaObject::Connection> decl_QMetaObject_Connection ("QtCore", "QMetaObject_Connection",
  methods_QMetaObject_Connection (),
  "@qt\n@brief Binding of QMetaObject::Connection");

gsi::ClassExt<QMetaObject> decl_QMetaObject_Connection_as_child (decl_QMetaObject_Connection, "Connection");

GSI_QTCORE_PUBLIC gsi::Class<QMetaObject::Connection> &qtdecl_QMetaObject_Connection () { return decl_QMetaObject_Connection; }

}

