
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
*  @file gsiDeclQSequentialIterable.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSequentialIterable>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSequentialIterable

// QVariant QSequentialIterable::at(int idx)


static void _init_f_at_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("idx");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_at_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QVariant > ((QVariant)((QSequentialIterable *)cls)->at (arg1));
}


// bool QSequentialIterable::canReverseIterate()


static void _init_f_canReverseIterate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canReverseIterate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSequentialIterable *)cls)->canReverseIterate ());
}


// int QSequentialIterable::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSequentialIterable *)cls)->size ());
}



namespace gsi
{

static gsi::Methods methods_QSequentialIterable () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("at", "@brief Method QVariant QSequentialIterable::at(int idx)\n", true, &_init_f_at_c767, &_call_f_at_c767);
  methods += new qt_gsi::GenericMethod ("canReverseIterate", "@brief Method bool QSequentialIterable::canReverseIterate()\n", true, &_init_f_canReverseIterate_c0, &_call_f_canReverseIterate_c0);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QSequentialIterable::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  return methods;
}

gsi::Class<QSequentialIterable> decl_QSequentialIterable ("QtCore", "QSequentialIterable",
  methods_QSequentialIterable (),
  "@qt\n@brief Binding of QSequentialIterable");


GSI_QTCORE_PUBLIC gsi::Class<QSequentialIterable> &qtdecl_QSequentialIterable () { return decl_QSequentialIterable; }

}

