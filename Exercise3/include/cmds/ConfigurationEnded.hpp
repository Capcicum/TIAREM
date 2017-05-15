/*
 * ConfigurationEnded.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_CONFIGURATIONENDED_HPP_
#define INCLUDE_CMDS_CONFIGURATIONENDED_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class ConfigurationEnded : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "ConfigurationEnded" << std::endl; s->ConfigurationEnded(e);};
};



#endif /* INCLUDE_CMDS_CONFIGURATIONENDED_HPP_ */
