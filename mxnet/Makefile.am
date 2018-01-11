AUTOMAKE_OPTIONS=foreign  

bin_PROGRAMS = MXNetMain
MXNetMain_SOURCES = MXNetMain.cpp

MXNetMain_LDADD = \
../smartgame/libdeltago_smartgame.a \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_THREAD_LIB)

MXNetMain_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame
