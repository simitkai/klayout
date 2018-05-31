
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
*  @file gsiDeclQTextFrame_Iterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextFrame>
#include <QTextBlock>
#include <QTextFrame>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextFrame::iterator

//  Constructor QTextFrame::iterator::iterator()


static void _init_ctor_QTextFrame_Iterator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextFrame::iterator> ();
}

static void _call_ctor_QTextFrame_Iterator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame::iterator *> (new QTextFrame::iterator ());
}


//  Constructor QTextFrame::iterator::iterator(const QTextFrame::iterator &o)


static void _init_ctor_QTextFrame_Iterator_3296u1 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFrame::iterator & > (argspec_0);
  decl->set_return_new<QTextFrame::iterator> ();
}

static void _call_ctor_QTextFrame_Iterator_3296u1 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFrame::iterator &arg1 = args.read<const QTextFrame::iterator & > (heap);
  ret.write<QTextFrame::iterator *> (new QTextFrame::iterator (arg1));
}


// bool QTextFrame::iterator::atEnd()


static void _init_f_atEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_atEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFrame::iterator *)cls)->atEnd ());
}


// QTextBlock QTextFrame::iterator::currentBlock()


static void _init_f_currentBlock_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlock > ();
}

static void _call_f_currentBlock_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlock > ((QTextBlock)((QTextFrame::iterator *)cls)->currentBlock ());
}


// QTextFrame *QTextFrame::iterator::currentFrame()


static void _init_f_currentFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrame * > ();
}

static void _call_f_currentFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame * > ((QTextFrame *)((QTextFrame::iterator *)cls)->currentFrame ());
}


// bool QTextFrame::iterator::operator!=(const QTextFrame::iterator &o)


static void _init_f_operator_excl__eq__c3296u1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFrame::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3296u1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFrame::iterator &arg1 = args.read<const QTextFrame::iterator & > (heap);
  ret.write<bool > ((bool)((QTextFrame::iterator *)cls)->operator!= (arg1));
}


// QTextFrame::iterator &QTextFrame::iterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrame::iterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame::iterator & > ((QTextFrame::iterator &)((QTextFrame::iterator *)cls)->operator++ ());
}


// QTextFrame::iterator QTextFrame::iterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextFrame::iterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTextFrame::iterator > ((QTextFrame::iterator)((QTextFrame::iterator *)cls)->operator++ (arg1));
}


// QTextFrame::iterator &QTextFrame::iterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrame::iterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame::iterator & > ((QTextFrame::iterator &)((QTextFrame::iterator *)cls)->operator-- ());
}


// QTextFrame::iterator QTextFrame::iterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextFrame::iterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTextFrame::iterator > ((QTextFrame::iterator)((QTextFrame::iterator *)cls)->operator-- (arg1));
}


// QTextFrame::iterator &QTextFrame::iterator::operator=(const QTextFrame::iterator &o)


static void _init_f_operator_eq__3296 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFrame::iterator & > (argspec_0);
  decl->set_return<QTextFrame::iterator & > ();
}

static void _call_f_operator_eq__3296 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFrame::iterator &arg1 = args.read<const QTextFrame::iterator & > (heap);
  ret.write<QTextFrame::iterator & > ((QTextFrame::iterator &)((QTextFrame::iterator *)cls)->operator= (arg1));
}


// bool QTextFrame::iterator::operator==(const QTextFrame::iterator &o)


static void _init_f_operator_eq__eq__c3296u1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextFrame::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3296u1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFrame::iterator &arg1 = args.read<const QTextFrame::iterator & > (heap);
  ret.write<bool > ((bool)((QTextFrame::iterator *)cls)->operator== (arg1));
}


// QTextFrame *QTextFrame::iterator::parentFrame()


static void _init_f_parentFrame_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrame * > ();
}

static void _call_f_parentFrame_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrame * > ((QTextFrame *)((QTextFrame::iterator *)cls)->parentFrame ());
}



namespace gsi
{

static gsi::Methods methods_QTextFrame_Iterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFrame::iterator::iterator()\nThis method creates an object of class QTextFrame::iterator.", &_init_ctor_QTextFrame_Iterator_0, &_call_ctor_QTextFrame_Iterator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFrame::iterator::iterator(const QTextFrame::iterator &o)\nThis method creates an object of class QTextFrame::iterator.", &_init_ctor_QTextFrame_Iterator_3296u1, &_call_ctor_QTextFrame_Iterator_3296u1);
  methods += new qt_gsi::GenericMethod ("atEnd", "@brief Method bool QTextFrame::iterator::atEnd()\n", true, &_init_f_atEnd_c0, &_call_f_atEnd_c0);
  methods += new qt_gsi::GenericMethod ("currentBlock", "@brief Method QTextBlock QTextFrame::iterator::currentBlock()\n", true, &_init_f_currentBlock_c0, &_call_f_currentBlock_c0);
  methods += new qt_gsi::GenericMethod ("currentFrame", "@brief Method QTextFrame *QTextFrame::iterator::currentFrame()\n", true, &_init_f_currentFrame_c0, &_call_f_currentFrame_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextFrame::iterator::operator!=(const QTextFrame::iterator &o)\n", true, &_init_f_operator_excl__eq__c3296u1, &_call_f_operator_excl__eq__c3296u1);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QTextFrame::iterator &QTextFrame::iterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QTextFrame::iterator QTextFrame::iterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QTextFrame::iterator &QTextFrame::iterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QTextFrame::iterator QTextFrame::iterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextFrame::iterator &QTextFrame::iterator::operator=(const QTextFrame::iterator &o)\n", false, &_init_f_operator_eq__3296, &_call_f_operator_eq__3296);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextFrame::iterator::operator==(const QTextFrame::iterator &o)\n", true, &_init_f_operator_eq__eq__c3296u1, &_call_f_operator_eq__eq__c3296u1);
  methods += new qt_gsi::GenericMethod ("parentFrame", "@brief Method QTextFrame *QTextFrame::iterator::parentFrame()\n", true, &_init_f_parentFrame_c0, &_call_f_parentFrame_c0);
  return methods;
}

gsi::Class<QTextFrame::iterator> decl_QTextFrame_Iterator ("QtGui", "QTextFrame_Iterator",
  methods_QTextFrame_Iterator (),
  "@qt\n@brief Binding of QTextFrame::iterator");

gsi::ClassExt<QTextFrame> decl_QTextFrame_Iterator_as_child (decl_QTextFrame_Iterator, "Iterator");

GSI_QTGUI_PUBLIC gsi::Class<QTextFrame::iterator> &qtdecl_QTextFrame_Iterator () { return decl_QTextFrame_Iterator; }

}

