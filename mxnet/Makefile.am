AUTOMAKE_OPTIONS=foreign  

bin_PROGRAMS = MXNetExtract \
MXNetMain

MXNetExtract_SOURCES = feature_extract.cpp

MXNetExtract_LDADD = \
../smartgame/libdeltago_smartgame.a \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../lib/libmxnet.so \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_THREAD_LIB)

MXNetExtract_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/include


# bin_PROGRAMS = MXNetMain
MXNetMain_SOURCES = MXNetMain.cpp

MXNetMain_LDADD = \
../smartgame/libdeltago_smartgame.a \
../gouct/libdeltago_gouct.a \
../go/libdeltago_go.a \
../lib/libmxnet.so \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_THREAD_LIB)

MXNetMain_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/include

