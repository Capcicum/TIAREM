/*
 * RealTimeExecution.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_REALTIMEEXECUTION_HPP_
#define INCLUDE_STATES_REALTIMEEXECUTION_HPP_

#include<states/SimulationRealTimeState.hpp>

class RealTimeExecution : public Singleton<RealTimeExecution>, public SimulationRealTimeState
{
	friend class Singleton<RealTimeExecution>;
public:
	virtual void Simulate(EmbeddedSystemX* e);
	virtual void entry();
	virtual std::string getStateName(){return stateName;}
private:
	void responseM1eventX();
	std::string stateName = "RealTimeExecution";
};



#endif /* INCLUDE_STATES_REALTIMEEXECUTION_HPP_ */
