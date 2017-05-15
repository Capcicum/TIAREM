/*
 * SimulateRealTimeStrategy.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef SIMULATEREALTIMESTRATEGY_HPP_
#define SIMULATEREALTIMESTRATEGY_HPP_

class SimulateRealTimeStrategy
{
public:
	virtual std::string ReadInput()=0;
	virtual void OutputResult(std::string s)=0;
};



#endif /* SIMULATEREALTIMESTRATEGY_HPP_ */
