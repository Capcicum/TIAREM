/*
 * DiscreteProcessing.hpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_DISCRETEPROCESSING_HPP_
#define INCLUDE_DISCRETEPROCESSING_HPP_

#include<EmbeddedSystemX.hpp>
#include<os/Thread.hpp>

class DiscreteProcessing : public os::Thread
{
public:
	DiscreteProcessing(ContinuousProcessing* con);
	void Run();
private:
	EmbeddedSystemX* emb;
	ContinuousProcessing* proc;
	std::string command;

};



#endif /* INCLUDE_DISCRETEPROCESSING_HPP_ */
