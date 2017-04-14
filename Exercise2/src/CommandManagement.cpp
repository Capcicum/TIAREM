/*
 * CommandManagement.cpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#include <CommandManagment.hpp>

CommandManagement::CommandManagement()
{
	cmds = new std::vector<Command*>;
}

void CommandManagement::Add(Command* c)
{
	cmds->push_back(c);
}

void CommandManagement::Remove(Command* c)
{
	cmds->erase(std::remove(cmds->begin(), cmds->end(), c), cmds->end());
}

void CommandManagement::execute(EmbeddedSystemX* e, SystemXState* s)
{
	std::vector<Command*>::iterator i;
	for(i = cmds->begin(); i< cmds->end(); i++)
	{
		(*i)->execute(e, e->getState());
	}
}


