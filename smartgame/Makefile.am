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
SgUctSearch.cpp \
SgUctTree.cpp \
SgMpiSynchronizer.cpp \
SgFastLog.cpp \
SgPlatform.cpp \
SgStringUtil.cpp \
SgBookBuilder.cpp \
SgTimeSettings.cpp \
SgTimeRecord.cpp \
SgGtpCommands.cpp \
SgGtpUtil.cpp \
SgTimeControl.cpp \
SgGameReader.cpp \
SgGameWriter.cpp \
SgNodeUtil.cpp \
SgSearchStatistics.cpp \
SgEvaluatedMoves.cpp \
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
SgUctSearch.h \
SgAdditiveKnowledge.h \
SgUctValue.h \
SgStatistics.h \
SgStatisticsVlt.h \
SgUctTree.h \
SgMpiSynchronizer.h \
SgFastLog.h \
SgHashTable.h \
SgMath.h \
SgPlatform.h \
SgStringUtil.h \
SgBookBuilder.h \
SgThreadedWorker.h \
SgTimeSettings.h \
SgTimeRecord.h \
SgGtpCommands.h \
SgGtpUtil.h \
SgTimeControl.h \
SgEBWArray.h \
SgGameReader.h \
SgGameWriter.h \
SgNodeUtil.h \
SgSearchStatistics.h \
SgEvaluatedMoves.h \
SgException.h 

libdeltago_smartgame_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/gtpengine

DISTCLEANFILES = *~