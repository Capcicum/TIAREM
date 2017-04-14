/*
 * chMode.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_CHMODE_HPP_
#define INCLUDE_CMDS_CHMODE_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class chMode : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "chMode" << std::endl; s->chMode(e);};
};

#endif /* INCLUDE_CMDS_CHMODE_HPP_ */
