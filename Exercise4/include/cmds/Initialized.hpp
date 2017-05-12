/*
 * Initialized.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_INITIALIZED_HPP_
#define INCLUDE_CMDS_INITIALIZED_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Initialized : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->Initialized(e);};
};

#endif /* INCLUDE_CMDS_INITIALIZED_HPP_ */
