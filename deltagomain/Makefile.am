bin_PROGRAMS = deltago

deltago_SOURCES = \
DeltagoMain.cpp \
DeltagoMainEngine.cpp

noinst_HEADERS = \
DeltagoMainEngine.h 

deltago_LDFLAGS = $(BOOST_LDFLAGS)

deltago_LDADD = \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../simpleplayers/libdeltago_simpleplayers.a \
../smartgame/libdeltago_smartgame.a \
../gtpengine/libfuego_gtpengine.a \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_THREAD_LIB) 

deltago_DEPENDENCIES = \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../simpleplayers/libdeltago_simpleplayers.a \
../smartgame/libdeltago_smartgame.a \
../gtpengine/libfuego_gtpengine.a

deltago_CPPFLAGS = \
-DDATADIR='"@datadir@"' \
-DABS_TOP_SRCDIR='"@abs_top_srcdir@"' \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/gtpengine \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/go \
-I@top_srcdir@/simpleplayers \
-I@top_srcdir@/gouct

DISTCLEANFILES = *~
