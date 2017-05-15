/*
 * Simulation.cpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#include <states/Simulation.hpp>
#include <states/RealTimeExecution.hpp>

void Simulation::RunRealTime(EmbeddedSystemX* e)
{
	ChangeState(this, e, RealTimeExecution::get_instance());
}

void Simulation::entry()
{
	std::cout << "Simulation state entry" << std::endl;
}


