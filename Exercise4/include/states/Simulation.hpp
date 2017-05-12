/*
 * Simulation.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_SIMULATION_HPP_
#define INCLUDE_STATES_SIMULATION_HPP_

#include<states/SimulationRealTimeState.hpp>
#include<SimulateRealTimeStrategy.hpp>

class Simulation : public Singleton<Simulation>, public SimulationRealTimeState, public SimulateRealTimeStrategy
{
	friend class Singleton<Simulation>;
public:
	virtual void RunRealTime(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
	virtual std::string ReadInput();
	virtual void OutputResult(std::string s);
private:
	void responseM1eventX();
	std::string stateName = "Simulation";
};




#endif /* INCLUDE_STATES_SIMULATION_HPP_ */
