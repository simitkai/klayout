
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
*  @file gsiDeclQJsonArray_Iterator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonArray>
#include <QJsonArray>
#include <QJsonValueRef>
#include <QJsonValueRefPtr>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonArray::iterator

//  Constructor QJsonArray::iterator::iterator()


static void _init_ctor_QJsonArray_Iterator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonArray::iterator> ();
}

static void _call_ctor_QJsonArray_Iterator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::iterator *> (new QJsonArray::iterator ());
}


//  Constructor QJsonArray::iterator::iterator(QJsonArray *array, int index)


static void _init_ctor_QJsonArray_Iterator_2283 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<QJsonArray * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("index");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QJsonArray::iterator> ();
}

static void _call_ctor_QJsonArray_Iterator_2283 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray *arg1 = args.read<QJsonArray * > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QJsonArray::iterator *> (new QJsonArray::iterator (arg1, arg2));
}


// bool QJsonArray::iterator::operator!=(const QJsonArray::iterator &o)


static void _init_f_operator_excl__eq__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator!= (arg1));
}


// bool QJsonArray::iterator::operator!=(const QJsonArray::const_iterator &o)


static void _init_f_operator_excl__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator!= (arg1));
}


// QJsonValueRef QJsonArray::iterator::operator*()


static void _init_f_operator_star__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_operator_star__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonArray::iterator *)cls)->operator* ());
}


// QJsonArray::iterator QJsonArray::iterator::operator+(int j)


static void _init_f_operator_plus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_operator_plus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray::iterator *)cls)->operator+ (arg1));
}


// QJsonArray::iterator &QJsonArray::iterator::operator++()


static void _init_f_operator_plus__plus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::iterator & > ();
}

static void _call_f_operator_plus__plus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::iterator & > ((QJsonArray::iterator &)((QJsonArray::iterator *)cls)->operator++ ());
}


// QJsonArray::iterator QJsonArray::iterator::operator++(int)


static void _init_f_operator_plus__plus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_operator_plus__plus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray::iterator *)cls)->operator++ (arg1));
}


// QJsonArray::iterator &QJsonArray::iterator::operator+=(int j)


static void _init_f_operator_plus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator & > ();
}

static void _call_f_operator_plus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator & > ((QJsonArray::iterator &)((QJsonArray::iterator *)cls)->operator+= (arg1));
}


// QJsonArray::iterator QJsonArray::iterator::operator-(int j)


static void _init_f_operator_minus__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_operator_minus__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray::iterator *)cls)->operator- (arg1));
}


// int QJsonArray::iterator::operator-(QJsonArray::iterator j)


static void _init_f_operator_minus__c2428 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<QJsonArray::iterator > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_operator_minus__c2428 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray::iterator arg1 = args.read<QJsonArray::iterator > (heap);
  ret.write<int > ((int)((QJsonArray::iterator *)cls)->operator- (arg1));
}


// QJsonArray::iterator &QJsonArray::iterator::operator--()


static void _init_f_operator_minus__minus__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray::iterator & > ();
}

static void _call_f_operator_minus__minus__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray::iterator & > ((QJsonArray::iterator &)((QJsonArray::iterator *)cls)->operator-- ());
}


// QJsonArray::iterator QJsonArray::iterator::operator--(int)


static void _init_f_operator_minus__minus__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator > ();
}

static void _call_f_operator_minus__minus__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator > ((QJsonArray::iterator)((QJsonArray::iterator *)cls)->operator-- (arg1));
}


// QJsonArray::iterator &QJsonArray::iterator::operator-=(int j)


static void _init_f_operator_minus__eq__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonArray::iterator & > ();
}

static void _call_f_operator_minus__eq__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonArray::iterator & > ((QJsonArray::iterator &)((QJsonArray::iterator *)cls)->operator-= (arg1));
}


// QJsonValueRefPtr QJsonArray::iterator::operator->()


static void _init_f_operator_minus__gt__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRefPtr > ();
}

static void _call_f_operator_minus__gt__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRefPtr > ((QJsonValueRefPtr)((QJsonArray::iterator *)cls)->operator-> ());
}


// bool QJsonArray::iterator::operator<(const QJsonArray::iterator &other)


static void _init_f_operator_lt__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator< (arg1));
}


// bool QJsonArray::iterator::operator<(const QJsonArray::const_iterator &other)


static void _init_f_operator_lt__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator< (arg1));
}


// bool QJsonArray::iterator::operator<=(const QJsonArray::iterator &other)


static void _init_f_operator_lt__eq__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator<= (arg1));
}


// bool QJsonArray::iterator::operator<=(const QJsonArray::const_iterator &other)


static void _init_f_operator_lt__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator<= (arg1));
}


// bool QJsonArray::iterator::operator==(const QJsonArray::iterator &o)


static void _init_f_operator_eq__eq__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator== (arg1));
}


// bool QJsonArray::iterator::operator==(const QJsonArray::const_iterator &o)


static void _init_f_operator_eq__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator== (arg1));
}


// bool QJsonArray::iterator::operator>(const QJsonArray::iterator &other)


static void _init_f_operator_gt__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator> (arg1));
}


// bool QJsonArray::iterator::operator>(const QJsonArray::const_iterator &other)


static void _init_f_operator_gt__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator> (arg1));
}


// bool QJsonArray::iterator::operator>=(const QJsonArray::iterator &other)


static void _init_f_operator_gt__eq__c3305 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c3305 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::iterator &arg1 = args.read<const QJsonArray::iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator>= (arg1));
}


// bool QJsonArray::iterator::operator>=(const QJsonArray::const_iterator &other)


static void _init_f_operator_gt__eq__c3951 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonArray::const_iterator & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c3951 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray::const_iterator &arg1 = args.read<const QJsonArray::const_iterator & > (heap);
  ret.write<bool > ((bool)((QJsonArray::iterator *)cls)->operator>= (arg1));
}


// QJsonValueRef QJsonArray::iterator::operator[](int j)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("j");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonArray::iterator *)cls)->operator[] (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonArray_Iterator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::iterator::iterator()\nThis method creates an object of class QJsonArray::iterator.", &_init_ctor_QJsonArray_Iterator_0, &_call_ctor_QJsonArray_Iterator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonArray::iterator::iterator(QJsonArray *array, int index)\nThis method creates an object of class QJsonArray::iterator.", &_init_ctor_QJsonArray_Iterator_2283, &_call_ctor_QJsonArray_Iterator_2283);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonArray::iterator::operator!=(const QJsonArray::iterator &o)\n", true, &_init_f_operator_excl__eq__c3305, &_call_f_operator_excl__eq__c3305);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonArray::iterator::operator!=(const QJsonArray::const_iterator &o)\n", true, &_init_f_operator_excl__eq__c3951, &_call_f_operator_excl__eq__c3951);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QJsonValueRef QJsonArray::iterator::operator*()\n", true, &_init_f_operator_star__c0, &_call_f_operator_star__c0);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QJsonArray::iterator QJsonArray::iterator::operator+(int j)\n", true, &_init_f_operator_plus__c767, &_call_f_operator_plus__c767);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonArray::iterator &QJsonArray::iterator::operator++()\n", false, &_init_f_operator_plus__plus__0, &_call_f_operator_plus__plus__0);
  methods += new qt_gsi::GenericMethod ("++", "@brief Method QJsonArray::iterator QJsonArray::iterator::operator++(int)\n", false, &_init_f_operator_plus__plus__767, &_call_f_operator_plus__plus__767);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QJsonArray::iterator &QJsonArray::iterator::operator+=(int j)\n", false, &_init_f_operator_plus__eq__767, &_call_f_operator_plus__eq__767);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method QJsonArray::iterator QJsonArray::iterator::operator-(int j)\n", true, &_init_f_operator_minus__c767, &_call_f_operator_minus__c767);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method int QJsonArray::iterator::operator-(QJsonArray::iterator j)\n", true, &_init_f_operator_minus__c2428, &_call_f_operator_minus__c2428);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonArray::iterator &QJsonArray::iterator::operator--()\n", false, &_init_f_operator_minus__minus__0, &_call_f_operator_minus__minus__0);
  methods += new qt_gsi::GenericMethod ("--", "@brief Method QJsonArray::iterator QJsonArray::iterator::operator--(int)\n", false, &_init_f_operator_minus__minus__767, &_call_f_operator_minus__minus__767);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QJsonArray::iterator &QJsonArray::iterator::operator-=(int j)\n", false, &_init_f_operator_minus__eq__767, &_call_f_operator_minus__eq__767);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QJsonValueRefPtr QJsonArray::iterator::operator->()\n", true, &_init_f_operator_minus__gt__c0, &_call_f_operator_minus__gt__c0);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QJsonArray::iterator::operator<(const QJsonArray::iterator &other)\n", true, &_init_f_operator_lt__c3305, &_call_f_operator_lt__c3305);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QJsonArray::iterator::operator<(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_lt__c3951, &_call_f_operator_lt__c3951);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QJsonArray::iterator::operator<=(const QJsonArray::iterator &other)\n", true, &_init_f_operator_lt__eq__c3305, &_call_f_operator_lt__eq__c3305);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QJsonArray::iterator::operator<=(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_lt__eq__c3951, &_call_f_operator_lt__eq__c3951);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonArray::iterator::operator==(const QJsonArray::iterator &o)\n", true, &_init_f_operator_eq__eq__c3305, &_call_f_operator_eq__eq__c3305);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonArray::iterator::operator==(const QJsonArray::const_iterator &o)\n", true, &_init_f_operator_eq__eq__c3951, &_call_f_operator_eq__eq__c3951);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QJsonArray::iterator::operator>(const QJsonArray::iterator &other)\n", true, &_init_f_operator_gt__c3305, &_call_f_operator_gt__c3305);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QJsonArray::iterator::operator>(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_gt__c3951, &_call_f_operator_gt__c3951);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QJsonArray::iterator::operator>=(const QJsonArray::iterator &other)\n", true, &_init_f_operator_gt__eq__c3305, &_call_f_operator_gt__eq__c3305);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QJsonArray::iterator::operator>=(const QJsonArray::const_iterator &other)\n", true, &_init_f_operator_gt__eq__c3951, &_call_f_operator_gt__eq__c3951);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValueRef QJsonArray::iterator::operator[](int j)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  return methods;
}

gsi::Class<QJsonArray::iterator> decl_QJsonArray_Iterator ("QtCore", "QJsonArray_Iterator",
  methods_QJsonArray_Iterator (),
  "@qt\n@brief Binding of QJsonArray::iterator");

gsi::ClassExt<QJsonArray> decl_QJsonArray_Iterator_as_child (decl_QJsonArray_Iterator, "Iterator");

GSI_QTCORE_PUBLIC gsi::Class<QJsonArray::iterator> &qtdecl_QJsonArray_Iterator () { return decl_QJsonArray_Iterator; }

}

