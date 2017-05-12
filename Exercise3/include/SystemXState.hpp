/*
 * SystemXState.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_SYSTEMXSTATE_HPP_
#define INCLUDE_SYSTEMXSTATE_HPP_

#include <EmbeddedSystemX.hpp>
#include <Singleton.hpp>

class EmbeddedSystemX;

class SystemXState
{
public:

	virtual void SelftestOk(EmbeddedSystemX* e) { std::cout << "from systemXstate" << std::endl;};
	virtual void Initialized(EmbeddedSystemX* s) {};
	virtual void Restart(EmbeddedSystemX* s) {};
	virtual void Configure(EmbeddedSystemX* s){};
	virtual void ConfigurationEnded(EmbeddedSystemX* s){};
	virtual void Exit(EmbeddedSystemX* s){};
	virtual void Stop(EmbeddedSystemX* s){};
	virtual void Start(EmbeddedSystemX* s){};
	virtual void Suspend(EmbeddedSystemX* s){};
	virtual void Resume(EmbeddedSystemX* s){};
	virtual void SelftestFailed(EmbeddedSystemX* s, int ErrorNo){};
	virtual void ConfigX(EmbeddedSystemX* s){};
	virtual void chMode(EmbeddedSystemX* s){};
	virtual void eventX(EmbeddedSystemX* s){};
	virtual void eventY(EmbeddedSystemX* s){};
	virtual void RunRealTime(EmbeddedSystemX* s){};
	virtual void Simulate(EmbeddedSystemX* s){};

	virtual void entry(){};
	virtual void exit(){};

	virtual std::string getStateName() {return "no state";};

protected:
	SystemXState(){};
	virtual ~SystemXState(){};
	void ChangeState(SystemXState* from, EmbeddedSystemX* esx, SystemXState* to);

};



#endif /* INCLUDE_SYSTEMXSTATE_HPP_ */
