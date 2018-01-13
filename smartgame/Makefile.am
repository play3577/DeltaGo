AUTOMAKE_OPTIONS=foreign  

bin_PROGRAMS = SimpleMain
SimpleMain_SOURCES = SimpleMain.cpp

noinst_LIBRARIES = libdeltago_smartgame.a

libdeltago_smartgame_a_SOURCES = \
SgDebug.cpp \
SgSystem.cpp \
SgTime.cpp \
SgPoint.cpp \
SgUtil.cpp \
SgPointSet.cpp \
SgRect.cpp \
SgNbIterator.cpp \
SgPointSetUtil.cpp \
SgWrite.cpp \
SgBoardConst.cpp \
SgInit.cpp \
SgMemCheck.cpp \
SgProp.cpp \
SgNode.cpp \
SgRandom.cpp \
SgIncrementalStack.cpp \
SgMiaiStrategy.cpp \
SgStrategy.cpp \
SgConnCompIterator.cpp \
SgException.cpp

noinst_HEADERS = \
SgDebug.h \
SgSystem.h \
SgTime.h \
SgTimer.h \
SgBlackWhite.h \
SgPoint.h \
SgArray.h \
SgMove.h \
SgUtil.h \
SgBWArray.h \
SgBWSet.h \
SgPointSet.h \
SgRect.h \
SgVector.h \
SgNbIterator.h \
SgPointSetUtil.h \
SgWrite.h \
SgArrayList.h \
SgBoardColor.h \
SgBoardConst.h \
SgPointArray.h \
SgPointIterator.h \
SgInit.h \
SgStack.h \
SgMemCheck.h \
SgProp.h \
SgNode.h \
SgMarker.h \
SgHash.h \
SgRandom.h \
SgIncrementalStack.h \
SgMiaiStrategy.h \
SgStrategy.h \
SgConnCompIterator.h \
SgException.h 

libdeltago_smartgame_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/gtpengine

DISTCLEANFILES = *~