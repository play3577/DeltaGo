AC_INIT([MXNetMain], [1.0], [bug-automake@gnu.org])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
CXXFLAGS="$CXXFLAGS -std=c++0x"
AC_CONFIG_HEADERS(config.h)
AC_PROG_CC
AC_PROG_CXX
AC_PROG_RANLIB
AC_CONFIG_MACRO_DIR([m4])
AX_BOOST_BASE([1.50.0])
AX_BOOST_THREAD
AX_BOOST_SYSTEM
AX_BOOST_DATE_TIME
AX_BOOST_FILESYSTEM
AX_BOOST_PROGRAM_OPTIONS
AX_BOOST_UNIT_TEST_FRAMEWORK

AM_PROG_AR
AC_CONFIG_FILES([
 Makefile
 mxnet/Makefile
 smartgame/Makefile
 go/Makefile
 gouct/Makefile
 deltagomain/Makefile
 simpleplayers/Makefile
 gtpengine/Makefile
])
AC_OUTPUT

