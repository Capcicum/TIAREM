/*
 * EmbeddedSystemX.cpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#include <EmbeddedSystemX.hpp>
#include <states/PowerOnSelfTest.hpp>
#include <algorithm>

EmbeddedSystemX::EmbeddedSystemX() :
	Name(),
	VersionNo(0)
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
			from->exit();
			(*fromIt) = to;
			to->entry();
		}
		else
		{
			(*fromIt)->exit();
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
	state->entry();
	states.push_back(state);
}


