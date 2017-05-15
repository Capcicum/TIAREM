/*
 * Stop.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_STOP_HPP_
#define INCLUDE_CMDS_STOP_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Stop : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->Stop(e);};
};

#endif /* INCLUDE_CMDS_STOP_HPP_ */
