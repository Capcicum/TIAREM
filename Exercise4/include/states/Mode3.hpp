/*
 * Mode3.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE3_HPP_
#define INCLUDE_STATES_MODE3_HPP_

#include<states/ApplicationModeSetting.hpp>
#include <ApplicationStrategy.hpp>

class Mode3 : public Singleton<Mode3>, public ApplicationModeSetting, ApplicationStrategy
{
	friend class Singleton<Mode3>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual void eventX(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
	virtual std::string ExecuteAlgorithm(std::string s);
private:
	void responseM3eventX();
	std::string stateName = "Mode3";
};




#endif /* INCLUDE_STATES_MODE3_HPP_ */
