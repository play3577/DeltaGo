noinst_LIBRARIES = libdeltago_go.a

libdeltago_go_a_SOURCES = \
GoPlayerMove.cpp \
GoRules.cpp \
GoKomi.cpp \
GoInit.cpp \
GoRegion.cpp \
GoBoardUtil.cpp \
GoEyeCount.cpp \
GoBlock.cpp \
GoChain.cpp \
GoEyeUtil.cpp \
GoRegionBoard.cpp \
GoRegionUtil.cpp \
GoSafetyUtil.cpp \
GoSafetySolver.cpp \
GoStaticSafetySolver.cpp \
GoBoard.cpp 

noinst_HEADERS = \
GoPlayerMove.h \
GoRules.h \
GoKomi.h \
GoSetup.h \
GoInit.h \
GoRegion.h \
GoBoardUtil.h \
GoEyeCount.h \
GoBlock.h \
GoChain.h \
GoEyeUtil.h \
GoRegionBoard.h \
GoRegionUtil.h \
GoSafetyUtil.h \
GoModBoard.h \
GoAssertBoardRestored.h \
GoMoveExecutor.h \
GoSafetySolver.h \
GoStaticSafetySolver.h \
GoBoard.h 

libdeltago_go_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame

DISTCLEANFILES = *~
