/*
 * ApplicationStrategy.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_APPLICATIONSTRATEGY_HPP_
#define INCLUDE_APPLICATIONSTRATEGY_HPP_


class ApplicationStrategy
{
public:
	virtual std::string ExecuteAlgorithm(std::string s)=0;
};


#endif /* INCLUDE_APPLICATIONSTRATEGY_HPP_ */
