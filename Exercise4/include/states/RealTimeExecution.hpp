/*
 * RealTimeExecution.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_REALTIMEEXECUTION_HPP_
#define INCLUDE_STATES_REALTIMEEXECUTION_HPP_

#include<states/SimulationRealTimeState.hpp>
#include<SimulateRealTimeStrategy.hpp>

class RealTimeExecution : public Singleton<RealTimeExecution>, public SimulationRealTimeState, public SimulateRealTimeStrategy
{
	friend class Singleton<RealTimeExecution>;
public:
	virtual void Simulate(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
	virtual std::string ReadInput();
	virtual void OutputResult(std::string s);
private:
	void responseM1eventX();
	std::string stateName = "RealTimeExecution";
};



#endif /* INCLUDE_STATES_REALTIMEEXECUTION_HPP_ */
