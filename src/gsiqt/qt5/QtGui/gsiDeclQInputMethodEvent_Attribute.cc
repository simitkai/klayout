
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
*  @file gsiDeclQInputMethodEvent_Attribute.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputMethodEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputMethodEvent::Attribute

//  Constructor QInputMethodEvent::Attribute::Attribute(QInputMethodEvent::AttributeType t, int s, int l, QVariant val)


static void _init_ctor_QInputMethodEvent_Attribute_6102 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QInputMethodEvent::AttributeType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("s");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("l");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("val");
  decl->add_arg<QVariant > (argspec_3);
  decl->set_return_new<QInputMethodEvent::Attribute> ();
}

static void _call_ctor_QInputMethodEvent_Attribute_6102 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QInputMethodEvent::AttributeType>::target_type & arg1 = args.read<const qt_gsi::Converter<QInputMethodEvent::AttributeType>::target_type & > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  QVariant arg4 = args.read<QVariant > (heap);
  ret.write<QInputMethodEvent::Attribute *> (new QInputMethodEvent::Attribute (qt_gsi::QtToCppAdaptor<QInputMethodEvent::AttributeType>(arg1).cref(), arg2, arg3, arg4));
}



namespace gsi
{

static gsi::Methods methods_QInputMethodEvent_Attribute () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputMethodEvent::Attribute::Attribute(QInputMethodEvent::AttributeType t, int s, int l, QVariant val)\nThis method creates an object of class QInputMethodEvent::Attribute.", &_init_ctor_QInputMethodEvent_Attribute_6102, &_call_ctor_QInputMethodEvent_Attribute_6102);
  return methods;
}

gsi::Class<QInputMethodEvent::Attribute> decl_QInputMethodEvent_Attribute ("QtGui", "QInputMethodEvent_Attribute",
  methods_QInputMethodEvent_Attribute (),
  "@qt\n@brief Binding of QInputMethodEvent::Attribute");

gsi::ClassExt<QInputMethodEvent> decl_QInputMethodEvent_Attribute_as_child (decl_QInputMethodEvent_Attribute, "Attribute");

GSI_QTGUI_PUBLIC gsi::Class<QInputMethodEvent::Attribute> &qtdecl_QInputMethodEvent_Attribute () { return decl_QInputMethodEvent_Attribute; }

}

