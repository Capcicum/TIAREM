/*
 * Mode1.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE1_HPP_
#define INCLUDE_STATES_MODE1_HPP_

#include<states/ApplicationModeSetting.hpp>

class Mode1 : public Singleton<Mode1>, public ApplicationModeSetting
{
	friend class Singleton<Mode1>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry();
	virtual void eventX(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
private:
	void responseM1eventX();
	std::string stateName = "Mode1";
};



#endif /* INCLUDE_STATES_MODE1_HPP_ */
