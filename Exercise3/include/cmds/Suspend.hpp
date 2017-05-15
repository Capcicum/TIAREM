/*
 * Suspend.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_SUSPEND_HPP_
#define INCLUDE_CMDS_SUSPEND_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Suspend : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "Suspend" << std::endl; s->Suspend(e);};
};

#endif /* INCLUDE_CMDS_SUSPEND_HPP_ */
