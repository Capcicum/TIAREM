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
	std::lock_guard<std::mutex> lock(simMux);
	return simRealTiemStrategy->ReadInput();
}

std::string ContinuousProcessing::ExecuteAlgorithm(std::string s)
{
	std::lock_guard<std::mutex> lock(simMux);
	return applicationStrategy->ExecuteAlgorithm(s);
}

void ContinuousProcessing::OutputResult(std::string s)
{
	std::lock_guard<std::mutex> lock(simMux);
	simRealTiemStrategy->OutputResult(s);
}

void ContinuousProcessing::setApplicationStrategy(ApplicationStrategy* s)
{
	std::lock_guard<std::mutex> lock(simMux);
	applicationStrategy = s;
}

void ContinuousProcessing::setSimulationRealTimeStrategy(SimulateRealTimeStrategy* s)
{
	std::lock_guard<std::mutex> lock(simMux);
	simRealTiemStrategy = s;
}



