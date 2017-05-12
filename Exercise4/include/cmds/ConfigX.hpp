/*
 * ConfigX.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_CONFIGX_HPP_
#define INCLUDE_CMDS_CONFIGX_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class ConfigX : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->ConfigX(e);};
};

#endif /* INCLUDE_CMDS_CONFIGX_HPP_ */
