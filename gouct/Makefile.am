noinst_LIBRARIES = libdeltago_gouct.a

libdeltago_gouct_a_SOURCES = \
GoUctBoard.cpp \
GoUctUtil.cpp


noinst_HEADERS = \
GoUctBoard.h \
GoUctPureRandomGenerator.h \
GoUctUtil.h


libdeltago_gouct_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/go \
-I@top_srcdir@/smartgame

DISTCLEANFILES = *~
