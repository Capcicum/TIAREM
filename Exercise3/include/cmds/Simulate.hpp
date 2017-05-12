/*
 * Simulate.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_SIMULATE_HPP_
#define INCLUDE_CMDS_SIMULATE_HPP_

class Simulate : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "Simulate" << std::endl; s->Simulate(e);};
};



#endif /* INCLUDE_CMDS_SIMULATE_HPP_ */
