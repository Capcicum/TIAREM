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

class SystemXState;
class Command;

class EmbeddedSystemX
{
public:
	EmbeddedSystemX();

	void handleCommand(Command* pCommand);

	void displayStateName();

	std::vector<SystemXState*> getState();

	void AddState(SystemXState* state);


	/*void SelftestOk();
	void Initialized();
	void Restart();
	void Configure();
	void ConfigurationEnded();
	void Exit();
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelftestFailed(int ErrorNo);
	void ConfigX();
	void chMode();
	void eventX();
	void eventY();*/

private:

	void ChangeState(SystemXState* from, SystemXState* to);

	friend class SystemXState;
	char* Name;
	int VersionNo;
	std::vector<SystemXState*> states;
};

#endif /* INCLUDE_EMBEDDEDSYSTEMX_HPP_ */
