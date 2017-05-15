/*
 * Exit.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_EXIT_HPP_
#define INCLUDE_CMDS_EXIT_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Exit : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->Exit(e);};
};

#endif /* INCLUDE_CMDS_EXIT_HPP_ */
