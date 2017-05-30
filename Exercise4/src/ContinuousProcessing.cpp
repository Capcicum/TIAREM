/*
 * ContinuousProcessing.cpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#include <ContinuousProcessing.hpp>

ContinuousProcessing::ContinuousProcessing() : myString("")
{

}

void ContinuousProcessing::Run()
{
		myString = ReadInput();
		myString = ExecuteAlgorithm(myString);
		OutputResult(myString);
		Sleep(1000);
}

std::string ContinuousProcessing::ReadInput()
{
	return GetSimulateRealTimeStrategy()->ReadInput();
}

std::string ContinuousProcessing::ExecuteAlgorithm(std::string s)
{
	return GetApplicationStrategy()->ExecuteAlgorithm(s);
}

void ContinuousProcessing::OutputResult(std::string s)
{
	GetSimulateRealTimeStrategy()->OutputResult(s);
}

void ContinuousProcessing::SetApplicationStrategy(ApplicationStrategy* s)
{
	std::lock_guard<std::mutex> lock(appMux);
	applicationStrategy = s;
}

void ContinuousProcessing::SetSimulationRealTimeStrategy(SimulateRealTimeStrategy* s)
{
	std::lock_guard<std::mutex> lock(simMux);
	simRealTiemStrategy = s;
}

ApplicationStrategy* ContinuousProcessing::GetApplicationStrategy()
{
	std::lock_guard<std::mutex> lock(appMux);
	return applicationStrategy;
}
SimulateRealTimeStrategy* ContinuousProcessing::GetSimulateRealTimeStrategy()
{
	std::lock_guard<std::mutex> lock(simMux);
	return simRealTiemStrategy;
}

