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

void Simulation::entry(EmbeddedSystemX* e)
{
	std::cout << "Simulation state entry" << std::endl;
	e->setConProcSimRealTimeStr(this);
}

std::string Simulation::ReadInput()
{
	return "Simulation input ";
}

void Simulation::OutputResult(std::string s)
{
	std::cout << "Simulation Output of: " << s << std::endl;
}

