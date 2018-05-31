
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
*  @file gsiDeclQXmlStreamWriter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamWriter>
#include <QIODevice>
#include <QTextCodec>
#include <QXmlStreamAttribute>
#include <QXmlStreamAttributes>
#include <QXmlStreamReader>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamWriter

//  Constructor QXmlStreamWriter::QXmlStreamWriter()


static void _init_ctor_QXmlStreamWriter_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamWriter> ();
}

static void _call_ctor_QXmlStreamWriter_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamWriter *> (new QXmlStreamWriter ());
}


//  Constructor QXmlStreamWriter::QXmlStreamWriter(QIODevice *device)


static void _init_ctor_QXmlStreamWriter_1447 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return_new<QXmlStreamWriter> ();
}

static void _call_ctor_QXmlStreamWriter_1447 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  ret.write<QXmlStreamWriter *> (new QXmlStreamWriter (arg1));
}


//  Constructor QXmlStreamWriter::QXmlStreamWriter(QByteArray *array)


static void _init_ctor_QXmlStreamWriter_1618 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<QByteArray * > (argspec_0);
  decl->set_return_new<QXmlStreamWriter> ();
}

static void _call_ctor_QXmlStreamWriter_1618 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QByteArray *arg1 = args.read<QByteArray * > (heap);
  ret.write<QXmlStreamWriter *> (new QXmlStreamWriter (arg1));
}


//  Constructor QXmlStreamWriter::QXmlStreamWriter(QString *string)


static void _init_ctor_QXmlStreamWriter_1334 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<QString * > (argspec_0);
  decl->set_return_new<QXmlStreamWriter> ();
}

static void _call_ctor_QXmlStreamWriter_1334 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString *arg1 = args.read<QString * > (heap);
  ret.write<QXmlStreamWriter *> (new QXmlStreamWriter (arg1));
}


// bool QXmlStreamWriter::autoFormatting()


static void _init_f_autoFormatting_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoFormatting_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlStreamWriter *)cls)->autoFormatting ());
}


// int QXmlStreamWriter::autoFormattingIndent()


static void _init_f_autoFormattingIndent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_autoFormattingIndent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QXmlStreamWriter *)cls)->autoFormattingIndent ());
}


// QTextCodec *QXmlStreamWriter::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCodec * > ((QTextCodec *)((QXmlStreamWriter *)cls)->codec ());
}


// QIODevice *QXmlStreamWriter::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QXmlStreamWriter *)cls)->device ());
}


// bool QXmlStreamWriter::hasError()


static void _init_f_hasError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlStreamWriter *)cls)->hasError ());
}


// void QXmlStreamWriter::setAutoFormatting(bool)


static void _init_f_setAutoFormatting_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoFormatting_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->setAutoFormatting (arg1);
}


// void QXmlStreamWriter::setAutoFormattingIndent(int spacesOrTabs)


static void _init_f_setAutoFormattingIndent_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spacesOrTabs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoFormattingIndent_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->setAutoFormattingIndent (arg1);
}


// void QXmlStreamWriter::setCodec(QTextCodec *codec)


static void _init_f_setCodec_1602 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<QTextCodec * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_1602 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextCodec *arg1 = args.read<QTextCodec * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->setCodec (arg1);
}


// void QXmlStreamWriter::setCodec(const char *codecName)


static void _init_f_setCodec_1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codecName");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->setCodec (arg1);
}


// void QXmlStreamWriter::setDevice(QIODevice *device)


static void _init_f_setDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = args.read<QIODevice * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->setDevice (arg1);
}


// void QXmlStreamWriter::writeAttribute(const QString &qualifiedName, const QString &value)


static void _init_f_writeAttribute_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeAttribute_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeAttribute (arg1, arg2);
}


// void QXmlStreamWriter::writeAttribute(const QString &namespaceUri, const QString &name, const QString &value)


static void _init_f_writeAttribute_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_writeAttribute_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeAttribute (arg1, arg2, arg3);
}


// void QXmlStreamWriter::writeAttribute(const QXmlStreamAttribute &attribute)


static void _init_f_writeAttribute_3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("attribute");
  decl->add_arg<const QXmlStreamAttribute & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeAttribute_3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttribute &arg1 = args.read<const QXmlStreamAttribute & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeAttribute (arg1);
}


// void QXmlStreamWriter::writeAttributes(const QXmlStreamAttributes &attributes)


static void _init_f_writeAttributes_3382 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("attributes");
  decl->add_arg<const QXmlStreamAttributes & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeAttributes_3382 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttributes &arg1 = args.read<const QXmlStreamAttributes & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeAttributes (arg1);
}


// void QXmlStreamWriter::writeCDATA(const QString &text)


static void _init_f_writeCDATA_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeCDATA_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeCDATA (arg1);
}


// void QXmlStreamWriter::writeCharacters(const QString &text)


static void _init_f_writeCharacters_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeCharacters_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeCharacters (arg1);
}


// void QXmlStreamWriter::writeComment(const QString &text)


static void _init_f_writeComment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeComment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeComment (arg1);
}


// void QXmlStreamWriter::writeCurrentToken(const QXmlStreamReader &reader)


static void _init_f_writeCurrentToken_2914 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("reader");
  decl->add_arg<const QXmlStreamReader & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeCurrentToken_2914 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamReader &arg1 = args.read<const QXmlStreamReader & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeCurrentToken (arg1);
}


// void QXmlStreamWriter::writeDTD(const QString &dtd)


static void _init_f_writeDTD_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dtd");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeDTD_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeDTD (arg1);
}


// void QXmlStreamWriter::writeDefaultNamespace(const QString &namespaceUri)


static void _init_f_writeDefaultNamespace_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeDefaultNamespace_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeDefaultNamespace (arg1);
}


// void QXmlStreamWriter::writeEmptyElement(const QString &qualifiedName)


static void _init_f_writeEmptyElement_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeEmptyElement_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeEmptyElement (arg1);
}


// void QXmlStreamWriter::writeEmptyElement(const QString &namespaceUri, const QString &name)


static void _init_f_writeEmptyElement_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeEmptyElement_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeEmptyElement (arg1, arg2);
}


// void QXmlStreamWriter::writeEndDocument()


static void _init_f_writeEndDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_writeEndDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeEndDocument ();
}


// void QXmlStreamWriter::writeEndElement()


static void _init_f_writeEndElement_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_writeEndElement_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeEndElement ();
}


// void QXmlStreamWriter::writeEntityReference(const QString &name)


static void _init_f_writeEntityReference_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeEntityReference_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeEntityReference (arg1);
}


// void QXmlStreamWriter::writeNamespace(const QString &namespaceUri, const QString &prefix)


static void _init_f_writeNamespace_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("prefix", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeNamespace_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeNamespace (arg1, arg2);
}


// void QXmlStreamWriter::writeProcessingInstruction(const QString &target, const QString &data)


static void _init_f_writeProcessingInstruction_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("data", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeProcessingInstruction_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeProcessingInstruction (arg1, arg2);
}


// void QXmlStreamWriter::writeStartDocument()


static void _init_f_writeStartDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_writeStartDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeStartDocument ();
}


// void QXmlStreamWriter::writeStartDocument(const QString &version)


static void _init_f_writeStartDocument_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("version");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeStartDocument_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeStartDocument (arg1);
}


// void QXmlStreamWriter::writeStartDocument(const QString &version, bool standalone)


static void _init_f_writeStartDocument_2781 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("version");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("standalone");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeStartDocument_2781 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeStartDocument (arg1, arg2);
}


// void QXmlStreamWriter::writeStartElement(const QString &qualifiedName)


static void _init_f_writeStartElement_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_writeStartElement_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeStartElement (arg1);
}


// void QXmlStreamWriter::writeStartElement(const QString &namespaceUri, const QString &name)


static void _init_f_writeStartElement_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeStartElement_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeStartElement (arg1, arg2);
}


// void QXmlStreamWriter::writeTextElement(const QString &qualifiedName, const QString &text)


static void _init_f_writeTextElement_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_writeTextElement_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeTextElement (arg1, arg2);
}


// void QXmlStreamWriter::writeTextElement(const QString &namespaceUri, const QString &name, const QString &text)


static void _init_f_writeTextElement_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("text");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_writeTextElement_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlStreamWriter *)cls)->writeTextElement (arg1, arg2, arg3);
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamWriter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamWriter::QXmlStreamWriter()\nThis method creates an object of class QXmlStreamWriter.", &_init_ctor_QXmlStreamWriter_0, &_call_ctor_QXmlStreamWriter_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamWriter::QXmlStreamWriter(QIODevice *device)\nThis method creates an object of class QXmlStreamWriter.", &_init_ctor_QXmlStreamWriter_1447, &_call_ctor_QXmlStreamWriter_1447);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamWriter::QXmlStreamWriter(QByteArray *array)\nThis method creates an object of class QXmlStreamWriter.", &_init_ctor_QXmlStreamWriter_1618, &_call_ctor_QXmlStreamWriter_1618);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamWriter::QXmlStreamWriter(QString *string)\nThis method creates an object of class QXmlStreamWriter.", &_init_ctor_QXmlStreamWriter_1334, &_call_ctor_QXmlStreamWriter_1334);
  methods += new qt_gsi::GenericMethod (":autoFormatting", "@brief Method bool QXmlStreamWriter::autoFormatting()\n", true, &_init_f_autoFormatting_c0, &_call_f_autoFormatting_c0);
  methods += new qt_gsi::GenericMethod (":autoFormattingIndent", "@brief Method int QXmlStreamWriter::autoFormattingIndent()\n", true, &_init_f_autoFormattingIndent_c0, &_call_f_autoFormattingIndent_c0);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method QTextCodec *QXmlStreamWriter::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod (":device", "@brief Method QIODevice *QXmlStreamWriter::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("hasError", "@brief Method bool QXmlStreamWriter::hasError()\n", true, &_init_f_hasError_c0, &_call_f_hasError_c0);
  methods += new qt_gsi::GenericMethod ("setAutoFormatting|autoFormatting=", "@brief Method void QXmlStreamWriter::setAutoFormatting(bool)\n", false, &_init_f_setAutoFormatting_864, &_call_f_setAutoFormatting_864);
  methods += new qt_gsi::GenericMethod ("setAutoFormattingIndent|autoFormattingIndent=", "@brief Method void QXmlStreamWriter::setAutoFormattingIndent(int spacesOrTabs)\n", false, &_init_f_setAutoFormattingIndent_767, &_call_f_setAutoFormattingIndent_767);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QXmlStreamWriter::setCodec(QTextCodec *codec)\n", false, &_init_f_setCodec_1602, &_call_f_setCodec_1602);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QXmlStreamWriter::setCodec(const char *codecName)\n", false, &_init_f_setCodec_1731, &_call_f_setCodec_1731);
  methods += new qt_gsi::GenericMethod ("setDevice|device=", "@brief Method void QXmlStreamWriter::setDevice(QIODevice *device)\n", false, &_init_f_setDevice_1447, &_call_f_setDevice_1447);
  methods += new qt_gsi::GenericMethod ("writeAttribute", "@brief Method void QXmlStreamWriter::writeAttribute(const QString &qualifiedName, const QString &value)\n", false, &_init_f_writeAttribute_3942, &_call_f_writeAttribute_3942);
  methods += new qt_gsi::GenericMethod ("writeAttribute", "@brief Method void QXmlStreamWriter::writeAttribute(const QString &namespaceUri, const QString &name, const QString &value)\n", false, &_init_f_writeAttribute_5859, &_call_f_writeAttribute_5859);
  methods += new qt_gsi::GenericMethod ("writeAttribute", "@brief Method void QXmlStreamWriter::writeAttribute(const QXmlStreamAttribute &attribute)\n", false, &_init_f_writeAttribute_3267, &_call_f_writeAttribute_3267);
  methods += new qt_gsi::GenericMethod ("writeAttributes", "@brief Method void QXmlStreamWriter::writeAttributes(const QXmlStreamAttributes &attributes)\n", false, &_init_f_writeAttributes_3382, &_call_f_writeAttributes_3382);
  methods += new qt_gsi::GenericMethod ("writeCDATA", "@brief Method void QXmlStreamWriter::writeCDATA(const QString &text)\n", false, &_init_f_writeCDATA_2025, &_call_f_writeCDATA_2025);
  methods += new qt_gsi::GenericMethod ("writeCharacters", "@brief Method void QXmlStreamWriter::writeCharacters(const QString &text)\n", false, &_init_f_writeCharacters_2025, &_call_f_writeCharacters_2025);
  methods += new qt_gsi::GenericMethod ("writeComment", "@brief Method void QXmlStreamWriter::writeComment(const QString &text)\n", false, &_init_f_writeComment_2025, &_call_f_writeComment_2025);
  methods += new qt_gsi::GenericMethod ("writeCurrentToken", "@brief Method void QXmlStreamWriter::writeCurrentToken(const QXmlStreamReader &reader)\n", false, &_init_f_writeCurrentToken_2914, &_call_f_writeCurrentToken_2914);
  methods += new qt_gsi::GenericMethod ("writeDTD", "@brief Method void QXmlStreamWriter::writeDTD(const QString &dtd)\n", false, &_init_f_writeDTD_2025, &_call_f_writeDTD_2025);
  methods += new qt_gsi::GenericMethod ("writeDefaultNamespace", "@brief Method void QXmlStreamWriter::writeDefaultNamespace(const QString &namespaceUri)\n", false, &_init_f_writeDefaultNamespace_2025, &_call_f_writeDefaultNamespace_2025);
  methods += new qt_gsi::GenericMethod ("writeEmptyElement", "@brief Method void QXmlStreamWriter::writeEmptyElement(const QString &qualifiedName)\n", false, &_init_f_writeEmptyElement_2025, &_call_f_writeEmptyElement_2025);
  methods += new qt_gsi::GenericMethod ("writeEmptyElement", "@brief Method void QXmlStreamWriter::writeEmptyElement(const QString &namespaceUri, const QString &name)\n", false, &_init_f_writeEmptyElement_3942, &_call_f_writeEmptyElement_3942);
  methods += new qt_gsi::GenericMethod ("writeEndDocument", "@brief Method void QXmlStreamWriter::writeEndDocument()\n", false, &_init_f_writeEndDocument_0, &_call_f_writeEndDocument_0);
  methods += new qt_gsi::GenericMethod ("writeEndElement", "@brief Method void QXmlStreamWriter::writeEndElement()\n", false, &_init_f_writeEndElement_0, &_call_f_writeEndElement_0);
  methods += new qt_gsi::GenericMethod ("writeEntityReference", "@brief Method void QXmlStreamWriter::writeEntityReference(const QString &name)\n", false, &_init_f_writeEntityReference_2025, &_call_f_writeEntityReference_2025);
  methods += new qt_gsi::GenericMethod ("writeNamespace", "@brief Method void QXmlStreamWriter::writeNamespace(const QString &namespaceUri, const QString &prefix)\n", false, &_init_f_writeNamespace_3942, &_call_f_writeNamespace_3942);
  methods += new qt_gsi::GenericMethod ("writeProcessingInstruction", "@brief Method void QXmlStreamWriter::writeProcessingInstruction(const QString &target, const QString &data)\n", false, &_init_f_writeProcessingInstruction_3942, &_call_f_writeProcessingInstruction_3942);
  methods += new qt_gsi::GenericMethod ("writeStartDocument", "@brief Method void QXmlStreamWriter::writeStartDocument()\n", false, &_init_f_writeStartDocument_0, &_call_f_writeStartDocument_0);
  methods += new qt_gsi::GenericMethod ("writeStartDocument", "@brief Method void QXmlStreamWriter::writeStartDocument(const QString &version)\n", false, &_init_f_writeStartDocument_2025, &_call_f_writeStartDocument_2025);
  methods += new qt_gsi::GenericMethod ("writeStartDocument", "@brief Method void QXmlStreamWriter::writeStartDocument(const QString &version, bool standalone)\n", false, &_init_f_writeStartDocument_2781, &_call_f_writeStartDocument_2781);
  methods += new qt_gsi::GenericMethod ("writeStartElement", "@brief Method void QXmlStreamWriter::writeStartElement(const QString &qualifiedName)\n", false, &_init_f_writeStartElement_2025, &_call_f_writeStartElement_2025);
  methods += new qt_gsi::GenericMethod ("writeStartElement", "@brief Method void QXmlStreamWriter::writeStartElement(const QString &namespaceUri, const QString &name)\n", false, &_init_f_writeStartElement_3942, &_call_f_writeStartElement_3942);
  methods += new qt_gsi::GenericMethod ("writeTextElement", "@brief Method void QXmlStreamWriter::writeTextElement(const QString &qualifiedName, const QString &text)\n", false, &_init_f_writeTextElement_3942, &_call_f_writeTextElement_3942);
  methods += new qt_gsi::GenericMethod ("writeTextElement", "@brief Method void QXmlStreamWriter::writeTextElement(const QString &namespaceUri, const QString &name, const QString &text)\n", false, &_init_f_writeTextElement_5859, &_call_f_writeTextElement_5859);
  return methods;
}

gsi::Class<QXmlStreamWriter> decl_QXmlStreamWriter ("QtCore", "QXmlStreamWriter",
  methods_QXmlStreamWriter (),
  "@qt\n@brief Binding of QXmlStreamWriter");


GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamWriter> &qtdecl_QXmlStreamWriter () { return decl_QXmlStreamWriter; }

}

