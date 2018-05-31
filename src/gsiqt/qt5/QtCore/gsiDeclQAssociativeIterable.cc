
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
*  @file gsiDeclQAssociativeIterable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAssociativeIterable>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAssociativeIterable

// int QAssociativeIterable::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAssociativeIterable *)cls)->size ());
}


// QVariant QAssociativeIterable::value(const QVariant &key)


static void _init_f_value_c2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_value_c2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  ret.write<QVariant > ((QVariant)((QAssociativeIterable *)cls)->value (arg1));
}



namespace gsi
{

static gsi::Methods methods_QAssociativeIterable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QAssociativeIterable::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QVariant QAssociativeIterable::value(const QVariant &key)\n", true, &_init_f_value_c2119, &_call_f_value_c2119);
  return methods;
}

gsi::Class<QAssociativeIterable> decl_QAssociativeIterable ("QtCore", "QAssociativeIterable",
  methods_QAssociativeIterable (),
  "@qt\n@brief Binding of QAssociativeIterable");


GSI_QTCORE_PUBLIC gsi::Class<QAssociativeIterable> &qtdecl_QAssociativeIterable () { return decl_QAssociativeIterable; }

}

