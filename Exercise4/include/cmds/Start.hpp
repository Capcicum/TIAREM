/*
 * Start.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_START_HPP_
#define INCLUDE_CMDS_START_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Start : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->Start(e);};
};

#endif /* INCLUDE_CMDS_START_HPP_ */
