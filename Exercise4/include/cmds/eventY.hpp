/*
 * eventY.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_EVENTY_HPP_
#define INCLUDE_CMDS_EVENTY_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class eventY : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->eventY(e);};
};

#endif /* INCLUDE_CMDS_EVENTY_HPP_ */
