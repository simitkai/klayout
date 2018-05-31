
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
*  @file gsiDeclQMediaContent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaContent>
#include <QMediaPlaylist>
#include <QMediaResource>
#include <QNetworkRequest>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaContent

//  Constructor QMediaContent::QMediaContent()


static void _init_ctor_QMediaContent_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaContent *> (new QMediaContent ());
}


//  Constructor QMediaContent::QMediaContent(const QUrl &contentUrl)


static void _init_ctor_QMediaContent_1701 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentUrl");
  decl->add_arg<const QUrl & > (argspec_0);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_1701 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QUrl &arg1 = args.read<const QUrl & > (heap);
  ret.write<QMediaContent *> (new QMediaContent (arg1));
}


//  Constructor QMediaContent::QMediaContent(const QNetworkRequest &contentRequest)


static void _init_ctor_QMediaContent_2885 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentRequest");
  decl->add_arg<const QNetworkRequest & > (argspec_0);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_2885 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkRequest &arg1 = args.read<const QNetworkRequest & > (heap);
  ret.write<QMediaContent *> (new QMediaContent (arg1));
}


//  Constructor QMediaContent::QMediaContent(const QMediaResource &contentResource)


static void _init_ctor_QMediaContent_2714 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentResource");
  decl->add_arg<const QMediaResource & > (argspec_0);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_2714 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaResource &arg1 = args.read<const QMediaResource & > (heap);
  ret.write<QMediaContent *> (new QMediaContent (arg1));
}


//  Constructor QMediaContent::QMediaContent(const QList<QMediaResource> &resources)


static void _init_ctor_QMediaContent_3329 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("resources");
  decl->add_arg<const QList<QMediaResource> & > (argspec_0);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_3329 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QMediaResource> &arg1 = args.read<const QList<QMediaResource> & > (heap);
  ret.write<QMediaContent *> (new QMediaContent (arg1));
}


//  Constructor QMediaContent::QMediaContent(const QMediaContent &other)


static void _init_ctor_QMediaContent_2605 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_2605 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = args.read<const QMediaContent & > (heap);
  ret.write<QMediaContent *> (new QMediaContent (arg1));
}


//  Constructor QMediaContent::QMediaContent(QMediaPlaylist *playlist, const QUrl &contentUrl, bool takeOwnership)


static void _init_ctor_QMediaContent_4382 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("playlist");
  decl->add_arg<QMediaPlaylist * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("contentUrl", true, "QUrl()");
  decl->add_arg<const QUrl & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("takeOwnership", true, "false");
  decl->add_arg<bool > (argspec_2);
  decl->set_return_new<QMediaContent> ();
}

static void _call_ctor_QMediaContent_4382 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaPlaylist *arg1 = args.read<QMediaPlaylist * > (heap);
  const QUrl &arg2 = args ? args.read<const QUrl & > (heap) : (const QUrl &)(QUrl());
  bool arg3 = args ? args.read<bool > (heap) : (bool)(false);
  ret.write<QMediaContent *> (new QMediaContent (arg1, arg2, arg3));
}


// QNetworkRequest QMediaContent::canonicalRequest()


static void _init_f_canonicalRequest_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkRequest > ();
}

static void _call_f_canonicalRequest_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkRequest > ((QNetworkRequest)((QMediaContent *)cls)->canonicalRequest ());
}


// QMediaResource QMediaContent::canonicalResource()


static void _init_f_canonicalResource_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaResource > ();
}

static void _call_f_canonicalResource_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaResource > ((QMediaResource)((QMediaContent *)cls)->canonicalResource ());
}


// QUrl QMediaContent::canonicalUrl()


static void _init_f_canonicalUrl_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QUrl > ();
}

static void _call_f_canonicalUrl_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QUrl > ((QUrl)((QMediaContent *)cls)->canonicalUrl ());
}


// bool QMediaContent::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaContent *)cls)->isNull ());
}


// bool QMediaContent::operator!=(const QMediaContent &other)


static void _init_f_operator_excl__eq__c2605 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2605 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = args.read<const QMediaContent & > (heap);
  ret.write<bool > ((bool)((QMediaContent *)cls)->operator!= (arg1));
}


// QMediaContent &QMediaContent::operator=(const QMediaContent &other)


static void _init_f_operator_eq__2605 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<QMediaContent & > ();
}

static void _call_f_operator_eq__2605 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = args.read<const QMediaContent & > (heap);
  ret.write<QMediaContent & > ((QMediaContent &)((QMediaContent *)cls)->operator= (arg1));
}


// bool QMediaContent::operator==(const QMediaContent &other)


static void _init_f_operator_eq__eq__c2605 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QMediaContent & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2605 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaContent &arg1 = args.read<const QMediaContent & > (heap);
  ret.write<bool > ((bool)((QMediaContent *)cls)->operator== (arg1));
}


// QMediaPlaylist *QMediaContent::playlist()


static void _init_f_playlist_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaPlaylist * > ();
}

static void _call_f_playlist_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaPlaylist * > ((QMediaPlaylist *)((QMediaContent *)cls)->playlist ());
}


// QList<QMediaResource> QMediaContent::resources()


static void _init_f_resources_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QMediaResource> > ();
}

static void _call_f_resources_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QMediaResource> > ((QList<QMediaResource>)((QMediaContent *)cls)->resources ());
}



namespace gsi
{

static gsi::Methods methods_QMediaContent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent()\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_0, &_call_ctor_QMediaContent_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(const QUrl &contentUrl)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_1701, &_call_ctor_QMediaContent_1701);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(const QNetworkRequest &contentRequest)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_2885, &_call_ctor_QMediaContent_2885);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(const QMediaResource &contentResource)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_2714, &_call_ctor_QMediaContent_2714);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(const QList<QMediaResource> &resources)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_3329, &_call_ctor_QMediaContent_3329);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(const QMediaContent &other)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_2605, &_call_ctor_QMediaContent_2605);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaContent::QMediaContent(QMediaPlaylist *playlist, const QUrl &contentUrl, bool takeOwnership)\nThis method creates an object of class QMediaContent.", &_init_ctor_QMediaContent_4382, &_call_ctor_QMediaContent_4382);
  methods += new qt_gsi::GenericMethod ("canonicalRequest", "@brief Method QNetworkRequest QMediaContent::canonicalRequest()\n", true, &_init_f_canonicalRequest_c0, &_call_f_canonicalRequest_c0);
  methods += new qt_gsi::GenericMethod ("canonicalResource", "@brief Method QMediaResource QMediaContent::canonicalResource()\n", true, &_init_f_canonicalResource_c0, &_call_f_canonicalResource_c0);
  methods += new qt_gsi::GenericMethod ("canonicalUrl", "@brief Method QUrl QMediaContent::canonicalUrl()\n", true, &_init_f_canonicalUrl_c0, &_call_f_canonicalUrl_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QMediaContent::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QMediaContent::operator!=(const QMediaContent &other)\n", true, &_init_f_operator_excl__eq__c2605, &_call_f_operator_excl__eq__c2605);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMediaContent &QMediaContent::operator=(const QMediaContent &other)\n", false, &_init_f_operator_eq__2605, &_call_f_operator_eq__2605);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QMediaContent::operator==(const QMediaContent &other)\n", true, &_init_f_operator_eq__eq__c2605, &_call_f_operator_eq__eq__c2605);
  methods += new qt_gsi::GenericMethod ("playlist", "@brief Method QMediaPlaylist *QMediaContent::playlist()\n", true, &_init_f_playlist_c0, &_call_f_playlist_c0);
  methods += new qt_gsi::GenericMethod ("resources", "@brief Method QList<QMediaResource> QMediaContent::resources()\n", true, &_init_f_resources_c0, &_call_f_resources_c0);
  return methods;
}

gsi::Class<QMediaContent> decl_QMediaContent ("QtMultimedia", "QMediaContent",
  methods_QMediaContent (),
  "@qt\n@brief Binding of QMediaContent");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaContent> &qtdecl_QMediaContent () { return decl_QMediaContent; }

}

