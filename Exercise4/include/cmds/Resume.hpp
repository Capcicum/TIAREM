/*
 * Resume.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_RESUME_HPP_
#define INCLUDE_CMDS_RESUME_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class Resume : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){s->Resume(e);};
};

#endif /* INCLUDE_CMDS_RESUME_HPP_ */
