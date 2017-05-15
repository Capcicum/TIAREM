/*
 * Mode1.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE1_HPP_
#define INCLUDE_STATES_MODE1_HPP_

#include<states/ApplicationModeSetting.hpp>
#include <ApplicationStrategy.hpp>

class Mode1 : public Singleton<Mode1>, public ApplicationModeSetting, public ApplicationStrategy
{
	friend class Singleton<Mode1>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual void eventX(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
	virtual std::string ExecuteAlgorithm(std::string s);
private:
	void responseM1eventX();
	std::string stateName = "Mode1";
};



#endif /* INCLUDE_STATES_MODE1_HPP_ */
