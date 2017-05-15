/*
 * Simulation.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_SIMULATION_HPP_
#define INCLUDE_STATES_SIMULATION_HPP_

#include<states/SimulationRealTimeState.hpp>

class Simulation : public Singleton<Simulation>, public SimulationRealTimeState
{
	friend class Singleton<Simulation>;
public:
	virtual void RunRealTime(EmbeddedSystemX* e);
	virtual void entry();
	virtual std::string getStateName(){return stateName;}
private:
	void responseM1eventX();
	std::string stateName = "Simulation";
};




#endif /* INCLUDE_STATES_SIMULATION_HPP_ */
