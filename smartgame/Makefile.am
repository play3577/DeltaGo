AUTOMAKE_OPTIONS=foreign  

bin_PROGRAMS = SimpleMain
SimpleMain_SOURCES = SimpleMain.cpp

noinst_LIBRARIES = libdeltago_smartgame.a

libdeltago_smartgame_a_SOURCES = \
SgDebug.cpp \
SgSystem.cpp \
SgTime.cpp \
SgException.cpp

noinst_HEADERS = \
SgDebug.h \
SgSystem.h \
SgTime.h \
SgException.h

libdeltago_smartgame_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/gtpengine

DISTCLEANFILES = *~