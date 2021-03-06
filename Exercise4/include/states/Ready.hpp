/*
 * Ready.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_READY_HPP_
#define INCLUDE_STATES_READY_HPP_

#include <states/Operational.hpp>

class Ready : public Singleton<Ready>, public Operational
{
	friend class Singleton<Ready>;
public:
	virtual void Configure(EmbeddedSystemX* e);
	virtual void Start(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
private:
	std::string stateName = "Ready";

};



#endif /* INCLUDE_STATES_READY_HPP_ */
