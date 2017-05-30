/*
 * ContinuousProcessing.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CONTINUOUSPROCESSING_HPP_
#define INCLUDE_CONTINUOUSPROCESSING_HPP_

#include <string>
#include <ApplicationStrategy.hpp>
#include <SimulateRealTimeStrategy.hpp>
#include <os/Thread.hpp>

class ContinuousProcessing : public os::Thread
{
public:
	ContinuousProcessing();
	virtual void Run();
	void SetApplicationStrategy(ApplicationStrategy* s);
	void SetSimulationRealTimeStrategy(SimulateRealTimeStrategy* s);
	ApplicationStrategy* GetApplicationStrategy();
	SimulateRealTimeStrategy* GetSimulateRealTimeStrategy();
private:
	std::string ReadInput();
	std::string ExecuteAlgorithm(std::string s);
	void OutputResult(std::string s);
	std::string myString;
	ApplicationStrategy* applicationStrategy;
	SimulateRealTimeStrategy* simRealTiemStrategy;
	std::mutex appMux;
	std::mutex simMux;
};



#endif /* INCLUDE_CONTINUOUSPROCESSING_HPP_ */
