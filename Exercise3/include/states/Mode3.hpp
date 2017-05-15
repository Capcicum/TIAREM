/*
 * Mode3.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE3_HPP_
#define INCLUDE_STATES_MODE3_HPP_

#include<states/ApplicationModeSetting.hpp>

class Mode3 : public Singleton<Mode3>, public ApplicationModeSetting
{
	friend class Singleton<Mode3>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry();
	virtual void eventX(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
private:
	void responseM3eventX();
	std::string stateName = "Mode3";
};




#endif /* INCLUDE_STATES_MODE3_HPP_ */
