/*
 * eventX.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_EVENTX_HPP_
#define INCLUDE_CMDS_EVENTX_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class eventX : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->eventX(e);};
};

#endif /* INCLUDE_CMDS_EVENTX_HPP_ */
