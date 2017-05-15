/*
 * Command.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_COMMAND_HPP_
#define INCLUDE_COMMAND_HPP_

#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class SystemXState;
class EmbeddedSystemX;

class Command
{
public:
	virtual ~Command(){};
	virtual void execute(EmbeddedSystemX* e, SystemXState* s)=0;
protected:
	//Command();
};



#endif /* INCLUDE_COMMAND_HPP_ */
