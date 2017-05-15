/*
 * EmbeddedSystemX.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_EMBEDDEDSYSTEMX_HPP_
#define INCLUDE_EMBEDDEDSYSTEMX_HPP_

#include <SystemXState.hpp>
#include <Command.hpp>
#include <vector>
#include <mutex>
#include <mingw.mutex.h>
#include <thread>
#include <mingw.thread.h>
#include <ContinuousProcessing.hpp>

class SystemXState;
class Command;

class EmbeddedSystemX
{
public:
	EmbeddedSystemX(ContinuousProcessing* conProc);

	void handleCommand(Command* pCommand);

	void displayStateName();

	std::vector<SystemXState*> getState();

	void AddState(SystemXState* state);

	void startContiuousProcessing();

	void terminateContinuousProcessing();

	void setConProcAppStr(ApplicationStrategy* s);

	void setConProcSimRealTimeStr(SimulateRealTimeStrategy* s);


private:

	void ChangeState(SystemXState* from, SystemXState* to);

	friend class SystemXState;
	char* Name;
	int VersionNo;
	std::vector<SystemXState*> states;
	ContinuousProcessing* ConProc;
};

#endif /* INCLUDE_EMBEDDEDSYSTEMX_HPP_ */
