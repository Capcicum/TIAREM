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

class SystemXState;
class Command;

class EmbeddedSystemX
{
public:
	EmbeddedSystemX();

	void handleCommand(Command* pCommand);

	void displayStateName();

	SystemXState* getState();


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

	void ChangeState(SystemXState* s);

	friend class SystemXState;
	char* Name;
	int VersionNo;
	SystemXState* state;
};

#endif /* INCLUDE_EMBEDDEDSYSTEMX_HPP_ */
