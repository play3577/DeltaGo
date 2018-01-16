AUTOMAKE_OPTIONS=foreign  

bin_PROGRAMS = MXNetExtract

MXNetExtract_SOURCES = feature_extract.cpp

MXNetExtract_LDFLAGS = $(BOOST_LDFLAGS)

MXNetExtract_LDADD = \
../smartgame/libdeltago_smartgame.a \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../lib/libmxnet.so \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_THREAD_LIB) \
-lboost_system

MXNetExtract_DEPENDENCIES = \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../smartgame/libdeltago_smartgame.a 

MXNetExtract_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/include \
-I@top_srcdir@/go \
-I@top_srcdir@/gouct


DISTCLEANFILES = *~

