/*
 * EmbeddedSystemX.cpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#include <EmbeddedSystemX.hpp>
#include <states/PowerOnSelfTest.hpp>
#include <algorithm>
#include <mutex>
#include <ContinuousProcessing.hpp>

EmbeddedSystemX::EmbeddedSystemX(ContinuousProcessing* conProc) :
	Name(),
	VersionNo(0),
	ConProc(conProc)
{
	SystemXState* s = PowerOnSelfTest::get_instance();
	AddState(s);
}

void EmbeddedSystemX::ChangeState(SystemXState* from, SystemXState* to)
{
	std::vector<SystemXState*>::iterator fromIt = std::find(states.begin(), states.end(), from);
	if(fromIt != states.end())
	{
		std::vector<SystemXState*>::iterator toIt = std::find(states.begin(), states.end(), to);
		if(toIt == states.end())
		{
			from->exit(this);
			(*fromIt) = to;
			to->entry(this);
		}
		else
		{
			(*fromIt)->exit(this);
			states.erase(fromIt);
		}
	}
	else
	{
		std::cout << "error" << std::endl;
	}
}

void EmbeddedSystemX::handleCommand(Command* pCommand)
{
	std::vector<SystemXState*> temp = states;
	std::vector<SystemXState*>::iterator si;
	for(si = temp.begin(); si < temp.end(); si++)
	{
		pCommand->execute(this, (*si));
	}
}

void EmbeddedSystemX::displayStateName()
{
	std::vector<SystemXState*>::iterator si;
	for(si = states.begin(); si < states.end(); si++)
	{
		std::cout << "State: " << (*si)->getStateName() << std::endl;
	}

}

std::vector<SystemXState*> EmbeddedSystemX::getState()
{
	return states;
}

void EmbeddedSystemX::AddState(SystemXState* state)
{
	state->entry(this);
	states.push_back(state);
}

void EmbeddedSystemX::startContiuousProcessing()
{
	ConProc->StartThread();
}

void EmbeddedSystemX::terminateContinuousProcessing()
{
	ConProc->Terminate();
}

void EmbeddedSystemX::setConProcAppStr(ApplicationStrategy* s)
{
	ConProc->SetApplicationStrategy(s);
}

void EmbeddedSystemX::setConProcSimRealTimeStr(SimulateRealTimeStrategy* s)
{
	ConProc->SetSimulationRealTimeStrategy(s);
}
