/*
 * Restart.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_RESTART_HPP_
#define INCLUDE_CMDS_RESTART_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Restart : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "Restart" << std::endl; s->Restart(e);};
};

#endif /* INCLUDE_CMDS_RESTART_HPP_ */
