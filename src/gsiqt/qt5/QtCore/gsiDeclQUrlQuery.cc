
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
*  @file gsiDeclQUrlQuery.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QUrlQuery>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QUrlQuery

//  Constructor QUrlQuery::QUrlQuery()


static void _init_ctor_QUrlQuery_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QUrlQuery> ();
}

static void _call_ctor_QUrlQuery_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrlQuery *> (new QUrlQuery ());
}


//  Constructor QUrlQuery::QUrlQuery(const QUrl &url)


static void _init_ctor_QUrlQuery_1701 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("url");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return_new<QUrlQuery> ();
}

static void _call_ctor_QUrlQuery_1701 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  ret.write<QUrlQuery *> (new QUrlQuery (arg1));
}


//  Constructor QUrlQuery::QUrlQuery(const QString &queryString)


static void _init_ctor_QUrlQuery_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("queryString");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QUrlQuery> ();
}

static void _call_ctor_QUrlQuery_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QUrlQuery *> (new QUrlQuery (arg1));
}


//  Constructor QUrlQuery::QUrlQuery(const QUrlQuery &other)


static void _init_ctor_QUrlQuery_2235 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUrlQuery & > (argspec_0);
  decl->set_return_new<QUrlQuery> ();
}

static void _call_ctor_QUrlQuery_2235 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrlQuery &arg1 = args.read<const QUrlQuery & > (heap);
  ret.write<QUrlQuery *> (new QUrlQuery (arg1));
}


// void QUrlQuery::addQueryItem(const QString &key, const QString &value)


static void _init_f_addQueryItem_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addQueryItem_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->addQueryItem (arg1, arg2);
}


// QStringList QUrlQuery::allQueryItemValues(const QString &key, QFlags<QUrl::ComponentFormattingOption> encoding)


static void _init_f_allQueryItemValues_c6184 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("encoding", true, "QUrl::PrettyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_1);
  decl->set_return<QStringList > ();
}

static void _call_f_allQueryItemValues_c6184 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  QFlags<QUrl::ComponentFormattingOption> arg2 = args ? args.read<QFlags<QUrl::ComponentFormattingOption> > (heap) : (QFlags<QUrl::ComponentFormattingOption>)(QUrl::PrettyDecoded);
  ret.write<QStringList > ((QStringList)((QUrlQuery *)cls)->allQueryItemValues (arg1, arg2));
}


// void QUrlQuery::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->clear ();
}


// bool QUrlQuery::hasQueryItem(const QString &key)


static void _init_f_hasQueryItem_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasQueryItem_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QUrlQuery *)cls)->hasQueryItem (arg1));
}


// bool QUrlQuery::isDetached()


static void _init_f_isDetached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUrlQuery *)cls)->isDetached ());
}


// bool QUrlQuery::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUrlQuery *)cls)->isEmpty ());
}


// bool QUrlQuery::operator!=(const QUrlQuery &other)


static void _init_f_operator_excl__eq__c2235 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUrlQuery & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2235 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrlQuery &arg1 = args.read<const QUrlQuery & > (heap);
  ret.write<bool > ((bool)((QUrlQuery *)cls)->operator!= (arg1));
}


// QUrlQuery &QUrlQuery::operator=(const QUrlQuery &other)


static void _init_f_operator_eq__2235 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUrlQuery & > (argspec_0);
  decl->set_return<QUrlQuery & > ();
}

static void _call_f_operator_eq__2235 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrlQuery &arg1 = args.read<const QUrlQuery & > (heap);
  ret.write<QUrlQuery & > ((QUrlQuery &)((QUrlQuery *)cls)->operator= (arg1));
}


// bool QUrlQuery::operator==(const QUrlQuery &other)


static void _init_f_operator_eq__eq__c2235 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QUrlQuery & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2235 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrlQuery &arg1 = args.read<const QUrlQuery & > (heap);
  ret.write<bool > ((bool)((QUrlQuery *)cls)->operator== (arg1));
}


// QString QUrlQuery::query(QFlags<QUrl::ComponentFormattingOption> encoding)


static void _init_f_query_c4267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoding", true, "QUrl::PrettyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_query_c4267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QUrl::ComponentFormattingOption> arg1 = args ? args.read<QFlags<QUrl::ComponentFormattingOption> > (heap) : (QFlags<QUrl::ComponentFormattingOption>)(QUrl::PrettyDecoded);
  ret.write<QString > ((QString)((QUrlQuery *)cls)->query (arg1));
}


// QString QUrlQuery::queryItemValue(const QString &key, QFlags<QUrl::ComponentFormattingOption> encoding)


static void _init_f_queryItemValue_c6184 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("encoding", true, "QUrl::PrettyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_queryItemValue_c6184 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  QFlags<QUrl::ComponentFormattingOption> arg2 = args ? args.read<QFlags<QUrl::ComponentFormattingOption> > (heap) : (QFlags<QUrl::ComponentFormattingOption>)(QUrl::PrettyDecoded);
  ret.write<QString > ((QString)((QUrlQuery *)cls)->queryItemValue (arg1, arg2));
}


// QList<QPair<QString, QString> > QUrlQuery::queryItems(QFlags<QUrl::ComponentFormattingOption> encoding)


static void _init_f_queryItems_c4267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoding", true, "QUrl::PrettyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_0);
  decl->set_return<QList<QPair<QString, QString> > > ();
}

static void _call_f_queryItems_c4267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QUrl::ComponentFormattingOption> arg1 = args ? args.read<QFlags<QUrl::ComponentFormattingOption> > (heap) : (QFlags<QUrl::ComponentFormattingOption>)(QUrl::PrettyDecoded);
  ret.write<QList<QPair<QString, QString> > > ((QList<QPair<QString, QString> >)((QUrlQuery *)cls)->queryItems (arg1));
}


// QChar QUrlQuery::queryPairDelimiter()


static void _init_f_queryPairDelimiter_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_queryPairDelimiter_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(((QUrlQuery *)cls)->queryPairDelimiter ()));
}


// QChar QUrlQuery::queryValueDelimiter()


static void _init_f_queryValueDelimiter_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_queryValueDelimiter_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(((QUrlQuery *)cls)->queryValueDelimiter ()));
}


// void QUrlQuery::removeAllQueryItems(const QString &key)


static void _init_f_removeAllQueryItems_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAllQueryItems_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->removeAllQueryItems (arg1);
}


// void QUrlQuery::removeQueryItem(const QString &key)


static void _init_f_removeQueryItem_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeQueryItem_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->removeQueryItem (arg1);
}


// void QUrlQuery::setQuery(const QString &queryString)


static void _init_f_setQuery_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("queryString");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuery_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->setQuery (arg1);
}


// void QUrlQuery::setQueryDelimiters(QChar valueDelimiter, QChar pairDelimiter)


static void _init_f_setQueryDelimiters_1690 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("valueDelimiter");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pairDelimiter");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setQueryDelimiters_1690 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  const qt_gsi::Converter<QChar>::target_type & arg2 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->setQueryDelimiters (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref(), qt_gsi::QtToCppAdaptor<QChar>(arg2).cref());
}


// void QUrlQuery::setQueryItems(const QList<QPair<QString, QString> > &query)


static void _init_f_setQueryItems_4283 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QList<QPair<QString, QString> > & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQueryItems_4283 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QPair<QString, QString> > &arg1 = args.read<const QList<QPair<QString, QString> > & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->setQueryItems (arg1);
}


// void QUrlQuery::swap(QUrlQuery &other)


static void _init_f_swap_1540 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QUrlQuery & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1540 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUrlQuery &arg1 = args.read<QUrlQuery & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUrlQuery *)cls)->swap (arg1);
}


// QString QUrlQuery::toString(QFlags<QUrl::ComponentFormattingOption> encoding)


static void _init_f_toString_c4267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoding", true, "QUrl::PrettyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c4267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QUrl::ComponentFormattingOption> arg1 = args ? args.read<QFlags<QUrl::ComponentFormattingOption> > (heap) : (QFlags<QUrl::ComponentFormattingOption>)(QUrl::PrettyDecoded);
  ret.write<QString > ((QString)((QUrlQuery *)cls)->toString (arg1));
}


// static QChar QUrlQuery::defaultQueryPairDelimiter()


static void _init_f_defaultQueryPairDelimiter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_defaultQueryPairDelimiter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(QUrlQuery::defaultQueryPairDelimiter ()));
}


// static QChar QUrlQuery::defaultQueryValueDelimiter()


static void _init_f_defaultQueryValueDelimiter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QChar>::target_type > ();
}

static void _call_f_defaultQueryValueDelimiter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QChar>::target_type > ((qt_gsi::Converter<QChar>::target_type)qt_gsi::CppToQtAdaptor<QChar>(QUrlQuery::defaultQueryValueDelimiter ()));
}



namespace gsi
{

static gsi::Methods methods_QUrlQuery () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUrlQuery::QUrlQuery()\nThis method creates an object of class QUrlQuery.", &_init_ctor_QUrlQuery_0, &_call_ctor_QUrlQuery_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUrlQuery::QUrlQuery(const QUrl &url)\nThis method creates an object of class QUrlQuery.", &_init_ctor_QUrlQuery_1701, &_call_ctor_QUrlQuery_1701);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUrlQuery::QUrlQuery(const QString &queryString)\nThis method creates an object of class QUrlQuery.", &_init_ctor_QUrlQuery_2025, &_call_ctor_QUrlQuery_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUrlQuery::QUrlQuery(const QUrlQuery &other)\nThis method creates an object of class QUrlQuery.", &_init_ctor_QUrlQuery_2235, &_call_ctor_QUrlQuery_2235);
  methods += new qt_gsi::GenericMethod ("addQueryItem", "@brief Method void QUrlQuery::addQueryItem(const QString &key, const QString &value)\n", false, &_init_f_addQueryItem_3942, &_call_f_addQueryItem_3942);
  methods += new qt_gsi::GenericMethod ("allQueryItemValues", "@brief Method QStringList QUrlQuery::allQueryItemValues(const QString &key, QFlags<QUrl::ComponentFormattingOption> encoding)\n", true, &_init_f_allQueryItemValues_c6184, &_call_f_allQueryItemValues_c6184);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QUrlQuery::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("hasQueryItem", "@brief Method bool QUrlQuery::hasQueryItem(const QString &key)\n", true, &_init_f_hasQueryItem_c2025, &_call_f_hasQueryItem_c2025);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QUrlQuery::isDetached()\n", true, &_init_f_isDetached_c0, &_call_f_isDetached_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QUrlQuery::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QUrlQuery::operator!=(const QUrlQuery &other)\n", true, &_init_f_operator_excl__eq__c2235, &_call_f_operator_excl__eq__c2235);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QUrlQuery &QUrlQuery::operator=(const QUrlQuery &other)\n", false, &_init_f_operator_eq__2235, &_call_f_operator_eq__2235);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QUrlQuery::operator==(const QUrlQuery &other)\n", true, &_init_f_operator_eq__eq__c2235, &_call_f_operator_eq__eq__c2235);
  methods += new qt_gsi::GenericMethod ("query", "@brief Method QString QUrlQuery::query(QFlags<QUrl::ComponentFormattingOption> encoding)\n", true, &_init_f_query_c4267, &_call_f_query_c4267);
  methods += new qt_gsi::GenericMethod ("queryItemValue", "@brief Method QString QUrlQuery::queryItemValue(const QString &key, QFlags<QUrl::ComponentFormattingOption> encoding)\n", true, &_init_f_queryItemValue_c6184, &_call_f_queryItemValue_c6184);
  methods += new qt_gsi::GenericMethod ("queryItems", "@brief Method QList<QPair<QString, QString> > QUrlQuery::queryItems(QFlags<QUrl::ComponentFormattingOption> encoding)\n", true, &_init_f_queryItems_c4267, &_call_f_queryItems_c4267);
  methods += new qt_gsi::GenericMethod ("queryPairDelimiter", "@brief Method QChar QUrlQuery::queryPairDelimiter()\n", true, &_init_f_queryPairDelimiter_c0, &_call_f_queryPairDelimiter_c0);
  methods += new qt_gsi::GenericMethod ("queryValueDelimiter", "@brief Method QChar QUrlQuery::queryValueDelimiter()\n", true, &_init_f_queryValueDelimiter_c0, &_call_f_queryValueDelimiter_c0);
  methods += new qt_gsi::GenericMethod ("removeAllQueryItems", "@brief Method void QUrlQuery::removeAllQueryItems(const QString &key)\n", false, &_init_f_removeAllQueryItems_2025, &_call_f_removeAllQueryItems_2025);
  methods += new qt_gsi::GenericMethod ("removeQueryItem", "@brief Method void QUrlQuery::removeQueryItem(const QString &key)\n", false, &_init_f_removeQueryItem_2025, &_call_f_removeQueryItem_2025);
  methods += new qt_gsi::GenericMethod ("setQuery|query=", "@brief Method void QUrlQuery::setQuery(const QString &queryString)\n", false, &_init_f_setQuery_2025, &_call_f_setQuery_2025);
  methods += new qt_gsi::GenericMethod ("setQueryDelimiters", "@brief Method void QUrlQuery::setQueryDelimiters(QChar valueDelimiter, QChar pairDelimiter)\n", false, &_init_f_setQueryDelimiters_1690, &_call_f_setQueryDelimiters_1690);
  methods += new qt_gsi::GenericMethod ("setQueryItems|queryItems=", "@brief Method void QUrlQuery::setQueryItems(const QList<QPair<QString, QString> > &query)\n", false, &_init_f_setQueryItems_4283, &_call_f_setQueryItems_4283);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QUrlQuery::swap(QUrlQuery &other)\n", false, &_init_f_swap_1540, &_call_f_swap_1540);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QUrlQuery::toString(QFlags<QUrl::ComponentFormattingOption> encoding)\n", true, &_init_f_toString_c4267, &_call_f_toString_c4267);
  methods += new qt_gsi::GenericStaticMethod ("defaultQueryPairDelimiter", "@brief Static method QChar QUrlQuery::defaultQueryPairDelimiter()\nThis method is static and can be called without an instance.", &_init_f_defaultQueryPairDelimiter_0, &_call_f_defaultQueryPairDelimiter_0);
  methods += new qt_gsi::GenericStaticMethod ("defaultQueryValueDelimiter", "@brief Static method QChar QUrlQuery::defaultQueryValueDelimiter()\nThis method is static and can be called without an instance.", &_init_f_defaultQueryValueDelimiter_0, &_call_f_defaultQueryValueDelimiter_0);
  return methods;
}

gsi::Class<QUrlQuery> decl_QUrlQuery ("QtCore", "QUrlQuery",
  methods_QUrlQuery (),
  "@qt\n@brief Binding of QUrlQuery");


GSI_QTCORE_PUBLIC gsi::Class<QUrlQuery> &qtdecl_QUrlQuery () { return decl_QUrlQuery; }

}

