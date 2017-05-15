/*
 * CommandManagment.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_COMMANDMANAGMENT_HPP_
#define INCLUDE_COMMANDMANAGMENT_HPP_

#include <Command.hpp>
#include <vector>
#include <algorithm>

class CommandManagement : public Command
{
public:
	CommandManagement();
	virtual void Add(Command*);
	virtual void Remove(Command*);
	virtual void execute(EmbeddedSystemX* e, SystemXState* s);
private:
	std::vector<Command*>* cmds;
};



#endif /* INCLUDE_COMMANDMANAGMENT_HPP_ */
