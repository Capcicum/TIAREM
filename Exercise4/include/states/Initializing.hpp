/*
 * Initializing.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_INITIALIZING_HPP_
#define INCLUDE_STATES_INITIALIZING_HPP_

#include <SystemXState.hpp>

class Initializing : public Singleton<Initializing>, public SystemXState
{
	friend class Singleton<Initializing>;
public:
	virtual void Initialized(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
private:
	void startInitializing();
	std::string stateName = "Initializing";

};



#endif /* INCLUDE_STATES_INITIALIZING_HPP_ */
