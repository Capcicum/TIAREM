/*
 * Command.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_COMMAND_HPP_
#define INCLUDE_COMMAND_HPP_

class Command
{
public:
	virtual ~Command();
	virtual void Execute()=0;
protected:
	Command();
};



#endif /* INCLUDE_COMMAND_HPP_ */
