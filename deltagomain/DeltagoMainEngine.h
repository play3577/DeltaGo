//----------------------------------------------------------------------------
/** @file DeltagoMainEngine.h */
//----------------------------------------------------------------------------

#ifndef DELTAGO_ENGINE_H
#define DELTAGO_ENGINE_H

#include "GoGtpEngine.h"
#include "GoGtpExtraCommands.h"
#include "GoSafetyCommands.h"

//----------------------------------------------------------------------------

/** GTP interface with commands for testing functionality of the Fuego
    libraries.
    @see @ref fuegotestoverview */
class DeltagoMainEngine
    : public GoGtpEngine
{
public:
    /** Constructor.
        @param fixedBoardSize
        @param programPath
        @param player Player ID as in CreatePlayer() */
    DeltagoMainEngine(int fixedBoardSize, const char* programPath = 0,
                    const std::string& player = "");

    ~DeltagoMainEngine();

    /** @page fuegotestenginecommands DeltagoMainEngine Commands
        - @link CmdParam() @c fuegotest_param @endlink */
    void CmdAnalyzeCommands(GtpCommand& cmd);
    void CmdName(GtpCommand& cmd);
    void CmdParam(GtpCommand& cmd);
    void CmdVersion(GtpCommand& cmd);

private:
    GoGtpExtraCommands m_extraCommands;

    GoSafetyCommands m_safetyCommands;

    /** Player ID as in CreatePlayer() */
    std::string m_playerId;

    GoPlayer* CreatePlayer(const std::string& name);

    void SetPlayer(const std::string& playerId);
};

//----------------------------------------------------------------------------

#endif // DELTAGO_ENGINE_H

