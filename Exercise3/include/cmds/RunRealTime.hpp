/*
 * RunRealTime.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_RUNREALTIME_HPP_
#define INCLUDE_CMDS_RUNREALTIME_HPP_

class RunRealTime : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "RunRealTime" << std::endl; s->RunRealTime(e);};
};


#endif /* INCLUDE_CMDS_RUNREALTIME_HPP_ */
