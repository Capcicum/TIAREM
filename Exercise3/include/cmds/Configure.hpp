/*
 * Configure.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_CONFIGURE_HPP_
#define INCLUDE_CMDS_CONFIGURE_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Configure : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "Configure" << std::endl; s->Configure(e);};
};

#endif /* INCLUDE_CMDS_CONFIGURE_HPP_ */
