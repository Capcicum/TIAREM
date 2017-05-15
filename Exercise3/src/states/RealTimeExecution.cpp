/*
 * RealTimeExecution.cpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#include <states/Simulation.hpp>
#include <states/RealTimeExecution.hpp>

void RealTimeExecution::Simulate(EmbeddedSystemX* e)
{
	ChangeState(this, e, Simulation::get_instance());
}

void RealTimeExecution::entry()
{
	std::cout << "RealTimeExecution state entry" << std::endl;
}


