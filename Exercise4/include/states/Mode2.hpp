/*
 * Mode2.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE2_HPP_
#define INCLUDE_STATES_MODE2_HPP_

#include<states/ApplicationModeSetting.hpp>
#include <ApplicationStrategy.hpp>

class Mode2 : public Singleton<Mode2>, public ApplicationModeSetting, public ApplicationStrategy
{
	friend class Singleton<Mode2>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry(EmbeddedSystemX* e);
	virtual void eventX(EmbeddedSystemX* e);
	virtual void eventY(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
	virtual std::string ExecuteAlgorithm(std::string s);
private:
	void responseM2eventX();
	void responseM2eventY();
	std::string stateName = "Mode2";
};




#endif /* INCLUDE_STATES_MODE2_HPP_ */
