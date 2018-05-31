

DESTDIR = $$OUT_PWD/../../..
TARGET = klayout_QtSvg

include($$PWD/../../../lib.pri)

DEFINES += MAKE_GSI_QTSVG_LIBRARY

INCLUDEPATH += $$TL_INC $$GSI_INC $$QTBASIC_INC
DEPENDPATH += $$TL_INC $$GSI_INC $$QTBASIC_INC

LIBS += -L$$DESTDIR -lklayout_tl -lklayout_gsi -lklayout_qtbasic

SOURCES += \

HEADERS += \

include(QtSvg.pri)

