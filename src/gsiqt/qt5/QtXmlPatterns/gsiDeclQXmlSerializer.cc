
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
*  @file gsiDeclQXmlSerializer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlSerializer>
#include <QXmlQuery>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include "gsiDeclQtXmlPatternsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlSerializer

// (const QVariant &)


static void _init_f_atomicValue_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_atomicValue_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->atomicValue (arg1);
}


// (const QXmlName &, const QStringRef &)


static void _init_f_attribute_4286 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_attribute_4286 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QStringRef &arg2 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->attribute (arg1, arg2);
}


// (const QStringRef &)


static void _init_f_characters_2310 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_characters_2310 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->characters (arg1);
}


// const QTextCodec *QXmlSerializer::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QTextCodec * > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QTextCodec * > ((const QTextCodec *)((QXmlSerializer *)cls)->codec ());
}


// (const QString &)


static void _init_f_comment_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_comment_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->comment (arg1);
}


// ()


static void _init_f_endDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->endDocument ();
}


// ()


static void _init_f_endElement_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endElement_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->endElement ();
}


// ()


static void _init_f_endOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->endOfSequence ();
}


// (const QXmlName &)


static void _init_f_namespaceBinding_2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nb");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_namespaceBinding_2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->namespaceBinding (arg1);
}


// QIODevice *QXmlSerializer::outputDevice()


static void _init_f_outputDevice_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_outputDevice_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QXmlSerializer *)cls)->outputDevice ());
}


// (const QXmlName &, const QString &)


static void _init_f_processingInstruction_4001 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_processingInstruction_4001 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->processingInstruction (arg1, arg2);
}


// void QXmlSerializer::setCodec(const QTextCodec *codec)


static void _init_f_setCodec_2297 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("codec");
  decl->add_arg<const QTextCodec * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_2297 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCodec *arg1 = args.read<const QTextCodec * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->setCodec (arg1);
}


// ()


static void _init_f_startDocument_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startDocument_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->startDocument ();
}


// (const QXmlName &)


static void _init_f_startElement_2084 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_startElement_2084 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->startElement (arg1);
}


// ()


static void _init_f_startOfSequence_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_startOfSequence_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer *)cls)->startOfSequence ();
}


namespace gsi
{

static gsi::Methods methods_QXmlSerializer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Method (const QVariant &)\nThis is a reimplementation of QAbstractXmlReceiver::atomicValue", false, &_init_f_atomicValue_2119, &_call_f_atomicValue_2119);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method (const QXmlName &, const QStringRef &)\nThis is a reimplementation of QAbstractXmlReceiver::attribute", false, &_init_f_attribute_4286, &_call_f_attribute_4286);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Method (const QStringRef &)\nThis is a reimplementation of QAbstractXmlReceiver::characters", false, &_init_f_characters_2310, &_call_f_characters_2310);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method const QTextCodec *QXmlSerializer::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Method (const QString &)\nThis is a reimplementation of QAbstractXmlReceiver::comment", false, &_init_f_comment_2025, &_call_f_comment_2025);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Method ()\nThis is a reimplementation of QAbstractXmlReceiver::endDocument", false, &_init_f_endDocument_0, &_call_f_endDocument_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Method ()\nThis is a reimplementation of QAbstractXmlReceiver::endElement", false, &_init_f_endElement_0, &_call_f_endElement_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Method ()\nThis is a reimplementation of QAbstractXmlReceiver::endOfSequence", false, &_init_f_endOfSequence_0, &_call_f_endOfSequence_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@brief Method (const QXmlName &)\nThis is a reimplementation of QAbstractXmlReceiver::namespaceBinding", false, &_init_f_namespaceBinding_2084, &_call_f_namespaceBinding_2084);
  methods += new qt_gsi::GenericMethod ("outputDevice", "@brief Method QIODevice *QXmlSerializer::outputDevice()\n", true, &_init_f_outputDevice_c0, &_call_f_outputDevice_c0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Method (const QXmlName &, const QString &)\nThis is a reimplementation of QAbstractXmlReceiver::processingInstruction", false, &_init_f_processingInstruction_4001, &_call_f_processingInstruction_4001);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QXmlSerializer::setCodec(const QTextCodec *codec)\n", false, &_init_f_setCodec_2297, &_call_f_setCodec_2297);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Method ()\nThis is a reimplementation of QAbstractXmlReceiver::startDocument", false, &_init_f_startDocument_0, &_call_f_startDocument_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Method (const QXmlName &)\nThis is a reimplementation of QAbstractXmlReceiver::startElement", false, &_init_f_startElement_2084, &_call_f_startElement_2084);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Method ()\nThis is a reimplementation of QAbstractXmlReceiver::startOfSequence", false, &_init_f_startOfSequence_0, &_call_f_startOfSequence_0);
  return methods;
}

gsi::Class<QAbstractXmlReceiver> &qtdecl_QAbstractXmlReceiver ();

gsi::Class<QXmlSerializer> decl_QXmlSerializer (qtdecl_QAbstractXmlReceiver (), "QtXmlPatterns", "QXmlSerializer_Native",
  methods_QXmlSerializer (),
  "@hide\n@alias QXmlSerializer");

GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QXmlSerializer> &qtdecl_QXmlSerializer () { return decl_QXmlSerializer; }

}


class QXmlSerializer_Adaptor : public QXmlSerializer, public qt_gsi::QtObjectBase
{
public:

  virtual ~QXmlSerializer_Adaptor();

  //  [adaptor ctor] QXmlSerializer::QXmlSerializer(const QXmlQuery &query, QIODevice *outputDevice)
  QXmlSerializer_Adaptor(const QXmlQuery &query, QIODevice *outputDevice) : QXmlSerializer(query, outputDevice)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QXmlSerializer::atomicValue(const QVariant &value)
  void cbs_atomicValue_2119_0(const QVariant &value)
  {
    QXmlSerializer::atomicValue(value);
  }

  virtual void atomicValue(const QVariant &value)
  {
    if (cb_atomicValue_2119_0.can_issue()) {
      cb_atomicValue_2119_0.issue<QXmlSerializer_Adaptor, const QVariant &>(&QXmlSerializer_Adaptor::cbs_atomicValue_2119_0, value);
    } else {
      QXmlSerializer::atomicValue(value);
    }
  }

  //  [adaptor impl] void QXmlSerializer::attribute(const QXmlName &name, const QStringRef &value)
  void cbs_attribute_4286_0(const QXmlName &name, const QStringRef &value)
  {
    QXmlSerializer::attribute(name, value);
  }

  virtual void attribute(const QXmlName &name, const QStringRef &value)
  {
    if (cb_attribute_4286_0.can_issue()) {
      cb_attribute_4286_0.issue<QXmlSerializer_Adaptor, const QXmlName &, const QStringRef &>(&QXmlSerializer_Adaptor::cbs_attribute_4286_0, name, value);
    } else {
      QXmlSerializer::attribute(name, value);
    }
  }

  //  [adaptor impl] void QXmlSerializer::characters(const QStringRef &value)
  void cbs_characters_2310_0(const QStringRef &value)
  {
    QXmlSerializer::characters(value);
  }

  virtual void characters(const QStringRef &value)
  {
    if (cb_characters_2310_0.can_issue()) {
      cb_characters_2310_0.issue<QXmlSerializer_Adaptor, const QStringRef &>(&QXmlSerializer_Adaptor::cbs_characters_2310_0, value);
    } else {
      QXmlSerializer::characters(value);
    }
  }

  //  [adaptor impl] void QXmlSerializer::comment(const QString &value)
  void cbs_comment_2025_0(const QString &value)
  {
    QXmlSerializer::comment(value);
  }

  virtual void comment(const QString &value)
  {
    if (cb_comment_2025_0.can_issue()) {
      cb_comment_2025_0.issue<QXmlSerializer_Adaptor, const QString &>(&QXmlSerializer_Adaptor::cbs_comment_2025_0, value);
    } else {
      QXmlSerializer::comment(value);
    }
  }

  //  [adaptor impl] void QXmlSerializer::endDocument()
  void cbs_endDocument_0_0()
  {
    QXmlSerializer::endDocument();
  }

  virtual void endDocument()
  {
    if (cb_endDocument_0_0.can_issue()) {
      cb_endDocument_0_0.issue<QXmlSerializer_Adaptor>(&QXmlSerializer_Adaptor::cbs_endDocument_0_0);
    } else {
      QXmlSerializer::endDocument();
    }
  }

  //  [adaptor impl] void QXmlSerializer::endElement()
  void cbs_endElement_0_0()
  {
    QXmlSerializer::endElement();
  }

  virtual void endElement()
  {
    if (cb_endElement_0_0.can_issue()) {
      cb_endElement_0_0.issue<QXmlSerializer_Adaptor>(&QXmlSerializer_Adaptor::cbs_endElement_0_0);
    } else {
      QXmlSerializer::endElement();
    }
  }

  //  [adaptor impl] void QXmlSerializer::endOfSequence()
  void cbs_endOfSequence_0_0()
  {
    QXmlSerializer::endOfSequence();
  }

  virtual void endOfSequence()
  {
    if (cb_endOfSequence_0_0.can_issue()) {
      cb_endOfSequence_0_0.issue<QXmlSerializer_Adaptor>(&QXmlSerializer_Adaptor::cbs_endOfSequence_0_0);
    } else {
      QXmlSerializer::endOfSequence();
    }
  }

  //  [adaptor impl] void QXmlSerializer::namespaceBinding(const QXmlName &nb)
  void cbs_namespaceBinding_2084_0(const QXmlName &nb)
  {
    QXmlSerializer::namespaceBinding(nb);
  }

  virtual void namespaceBinding(const QXmlName &nb)
  {
    if (cb_namespaceBinding_2084_0.can_issue()) {
      cb_namespaceBinding_2084_0.issue<QXmlSerializer_Adaptor, const QXmlName &>(&QXmlSerializer_Adaptor::cbs_namespaceBinding_2084_0, nb);
    } else {
      QXmlSerializer::namespaceBinding(nb);
    }
  }

  //  [adaptor impl] void QXmlSerializer::processingInstruction(const QXmlName &name, const QString &value)
  void cbs_processingInstruction_4001_0(const QXmlName &name, const QString &value)
  {
    QXmlSerializer::processingInstruction(name, value);
  }

  virtual void processingInstruction(const QXmlName &name, const QString &value)
  {
    if (cb_processingInstruction_4001_0.can_issue()) {
      cb_processingInstruction_4001_0.issue<QXmlSerializer_Adaptor, const QXmlName &, const QString &>(&QXmlSerializer_Adaptor::cbs_processingInstruction_4001_0, name, value);
    } else {
      QXmlSerializer::processingInstruction(name, value);
    }
  }

  //  [adaptor impl] void QXmlSerializer::startDocument()
  void cbs_startDocument_0_0()
  {
    QXmlSerializer::startDocument();
  }

  virtual void startDocument()
  {
    if (cb_startDocument_0_0.can_issue()) {
      cb_startDocument_0_0.issue<QXmlSerializer_Adaptor>(&QXmlSerializer_Adaptor::cbs_startDocument_0_0);
    } else {
      QXmlSerializer::startDocument();
    }
  }

  //  [adaptor impl] void QXmlSerializer::startElement(const QXmlName &name)
  void cbs_startElement_2084_0(const QXmlName &name)
  {
    QXmlSerializer::startElement(name);
  }

  virtual void startElement(const QXmlName &name)
  {
    if (cb_startElement_2084_0.can_issue()) {
      cb_startElement_2084_0.issue<QXmlSerializer_Adaptor, const QXmlName &>(&QXmlSerializer_Adaptor::cbs_startElement_2084_0, name);
    } else {
      QXmlSerializer::startElement(name);
    }
  }

  //  [adaptor impl] void QXmlSerializer::startOfSequence()
  void cbs_startOfSequence_0_0()
  {
    QXmlSerializer::startOfSequence();
  }

  virtual void startOfSequence()
  {
    if (cb_startOfSequence_0_0.can_issue()) {
      cb_startOfSequence_0_0.issue<QXmlSerializer_Adaptor>(&QXmlSerializer_Adaptor::cbs_startOfSequence_0_0);
    } else {
      QXmlSerializer::startOfSequence();
    }
  }

  //  [adaptor impl] void QXmlSerializer::whitespaceOnly(const QStringRef &value)
  void cbs_whitespaceOnly_2310_0(const QStringRef &value)
  {
    QXmlSerializer::whitespaceOnly(value);
  }

  virtual void whitespaceOnly(const QStringRef &value)
  {
    if (cb_whitespaceOnly_2310_0.can_issue()) {
      cb_whitespaceOnly_2310_0.issue<QXmlSerializer_Adaptor, const QStringRef &>(&QXmlSerializer_Adaptor::cbs_whitespaceOnly_2310_0, value);
    } else {
      QXmlSerializer::whitespaceOnly(value);
    }
  }

  gsi::Callback cb_atomicValue_2119_0;
  gsi::Callback cb_attribute_4286_0;
  gsi::Callback cb_characters_2310_0;
  gsi::Callback cb_comment_2025_0;
  gsi::Callback cb_endDocument_0_0;
  gsi::Callback cb_endElement_0_0;
  gsi::Callback cb_endOfSequence_0_0;
  gsi::Callback cb_namespaceBinding_2084_0;
  gsi::Callback cb_processingInstruction_4001_0;
  gsi::Callback cb_startDocument_0_0;
  gsi::Callback cb_startElement_2084_0;
  gsi::Callback cb_startOfSequence_0_0;
  gsi::Callback cb_whitespaceOnly_2310_0;
};

QXmlSerializer_Adaptor::~QXmlSerializer_Adaptor() { }

//  Constructor QXmlSerializer::QXmlSerializer(const QXmlQuery &query, QIODevice *outputDevice) (adaptor class)

static void _init_ctor_QXmlSerializer_Adaptor_3572 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("query");
  decl->add_arg<const QXmlQuery & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("outputDevice");
  decl->add_arg<QIODevice * > (argspec_1);
  decl->set_return_new<QXmlSerializer_Adaptor> ();
}

static void _call_ctor_QXmlSerializer_Adaptor_3572 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlQuery &arg1 = args.read<const QXmlQuery & > (heap);
  QIODevice *arg2 = args.read<QIODevice * > (heap);
  ret.write<QXmlSerializer_Adaptor *> (new QXmlSerializer_Adaptor (arg1, arg2));
}


// void QXmlSerializer::atomicValue(const QVariant &value)

static void _init_cbs_atomicValue_2119_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_atomicValue_2119_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_atomicValue_2119_0 (arg1);
}

static void _set_callback_cbs_atomicValue_2119_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_atomicValue_2119_0 = cb;
}


// void QXmlSerializer::attribute(const QXmlName &name, const QStringRef &value)

static void _init_cbs_attribute_4286_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_attribute_4286_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QStringRef &arg2 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_attribute_4286_0 (arg1, arg2);
}

static void _set_callback_cbs_attribute_4286_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_attribute_4286_0 = cb;
}


// void QXmlSerializer::characters(const QStringRef &value)

static void _init_cbs_characters_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_characters_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_characters_2310_0 (arg1);
}

static void _set_callback_cbs_characters_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_characters_2310_0 = cb;
}


// void QXmlSerializer::comment(const QString &value)

static void _init_cbs_comment_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_comment_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_comment_2025_0 (arg1);
}

static void _set_callback_cbs_comment_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_comment_2025_0 = cb;
}


// void QXmlSerializer::endDocument()

static void _init_cbs_endDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_endDocument_0_0 ();
}

static void _set_callback_cbs_endDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_endDocument_0_0 = cb;
}


// void QXmlSerializer::endElement()

static void _init_cbs_endElement_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endElement_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_endElement_0_0 ();
}

static void _set_callback_cbs_endElement_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_endElement_0_0 = cb;
}


// void QXmlSerializer::endOfSequence()

static void _init_cbs_endOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_endOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_endOfSequence_0_0 ();
}

static void _set_callback_cbs_endOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_endOfSequence_0_0 = cb;
}


// void QXmlSerializer::namespaceBinding(const QXmlName &nb)

static void _init_cbs_namespaceBinding_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nb");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_namespaceBinding_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_namespaceBinding_2084_0 (arg1);
}

static void _set_callback_cbs_namespaceBinding_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_namespaceBinding_2084_0 = cb;
}


// void QXmlSerializer::processingInstruction(const QXmlName &name, const QString &value)

static void _init_cbs_processingInstruction_4001_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_processingInstruction_4001_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_processingInstruction_4001_0 (arg1, arg2);
}

static void _set_callback_cbs_processingInstruction_4001_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_processingInstruction_4001_0 = cb;
}


// void QXmlSerializer::startDocument()

static void _init_cbs_startDocument_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startDocument_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_startDocument_0_0 ();
}

static void _set_callback_cbs_startDocument_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_startDocument_0_0 = cb;
}


// void QXmlSerializer::startElement(const QXmlName &name)

static void _init_cbs_startElement_2084_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QXmlName & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_startElement_2084_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlName &arg1 = args.read<const QXmlName & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_startElement_2084_0 (arg1);
}

static void _set_callback_cbs_startElement_2084_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_startElement_2084_0 = cb;
}


// void QXmlSerializer::startOfSequence()

static void _init_cbs_startOfSequence_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_startOfSequence_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_startOfSequence_0_0 ();
}

static void _set_callback_cbs_startOfSequence_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_startOfSequence_0_0 = cb;
}


// void QXmlSerializer::whitespaceOnly(const QStringRef &value)

static void _init_cbs_whitespaceOnly_2310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<const QStringRef & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_whitespaceOnly_2310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = args.read<const QStringRef & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QXmlSerializer_Adaptor *)cls)->cbs_whitespaceOnly_2310_0 (arg1);
}

static void _set_callback_cbs_whitespaceOnly_2310_0 (void *cls, const gsi::Callback &cb)
{
  ((QXmlSerializer_Adaptor *)cls)->cb_whitespaceOnly_2310_0 = cb;
}


namespace gsi
{

gsi::Class<QXmlSerializer> &qtdecl_QXmlSerializer ();

static gsi::Methods methods_QXmlSerializer_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlSerializer::QXmlSerializer(const QXmlQuery &query, QIODevice *outputDevice)\nThis method creates an object of class QXmlSerializer.", &_init_ctor_QXmlSerializer_Adaptor_3572, &_call_ctor_QXmlSerializer_Adaptor_3572);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@hide", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("atomicValue", "@brief Virtual method void QXmlSerializer::atomicValue(const QVariant &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_atomicValue_2119_0, &_call_cbs_atomicValue_2119_0, &_set_callback_cbs_atomicValue_2119_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@hide", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Virtual method void QXmlSerializer::attribute(const QXmlName &name, const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_attribute_4286_0, &_call_cbs_attribute_4286_0, &_set_callback_cbs_attribute_4286_0);
  methods += new qt_gsi::GenericMethod ("characters", "@hide", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("characters", "@brief Virtual method void QXmlSerializer::characters(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_characters_2310_0, &_call_cbs_characters_2310_0, &_set_callback_cbs_characters_2310_0);
  methods += new qt_gsi::GenericMethod ("comment", "@hide", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Virtual method void QXmlSerializer::comment(const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_comment_2025_0, &_call_cbs_comment_2025_0, &_set_callback_cbs_comment_2025_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@hide", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endDocument", "@brief Virtual method void QXmlSerializer::endDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endDocument_0_0, &_call_cbs_endDocument_0_0, &_set_callback_cbs_endDocument_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@hide", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endElement", "@brief Virtual method void QXmlSerializer::endElement()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endElement_0_0, &_call_cbs_endElement_0_0, &_set_callback_cbs_endElement_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@hide", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("endOfSequence", "@brief Virtual method void QXmlSerializer::endOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_endOfSequence_0_0, &_call_cbs_endOfSequence_0_0, &_set_callback_cbs_endOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@hide", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("namespaceBinding", "@brief Virtual method void QXmlSerializer::namespaceBinding(const QXmlName &nb)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_namespaceBinding_2084_0, &_call_cbs_namespaceBinding_2084_0, &_set_callback_cbs_namespaceBinding_2084_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@hide", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("processingInstruction", "@brief Virtual method void QXmlSerializer::processingInstruction(const QXmlName &name, const QString &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_processingInstruction_4001_0, &_call_cbs_processingInstruction_4001_0, &_set_callback_cbs_processingInstruction_4001_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@hide", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startDocument", "@brief Virtual method void QXmlSerializer::startDocument()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startDocument_0_0, &_call_cbs_startDocument_0_0, &_set_callback_cbs_startDocument_0_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@hide", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startElement", "@brief Virtual method void QXmlSerializer::startElement(const QXmlName &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startElement_2084_0, &_call_cbs_startElement_2084_0, &_set_callback_cbs_startElement_2084_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@hide", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("startOfSequence", "@brief Virtual method void QXmlSerializer::startOfSequence()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_startOfSequence_0_0, &_call_cbs_startOfSequence_0_0, &_set_callback_cbs_startOfSequence_0_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@hide", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0);
  methods += new qt_gsi::GenericMethod ("whitespaceOnly", "@brief Virtual method void QXmlSerializer::whitespaceOnly(const QStringRef &value)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_whitespaceOnly_2310_0, &_call_cbs_whitespaceOnly_2310_0, &_set_callback_cbs_whitespaceOnly_2310_0);
  return methods;
}

gsi::Class<QXmlSerializer_Adaptor> decl_QXmlSerializer_Adaptor (qtdecl_QXmlSerializer (), "QtXmlPatterns", "QXmlSerializer",
  methods_QXmlSerializer_Adaptor (),
  "@qt\n@brief Binding of QXmlSerializer");

}

