/*
 * Mode2.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_MODE2_HPP_
#define INCLUDE_STATES_MODE2_HPP_

#include<states/RealTimeLoop.hpp>

class Mode2 : public Singleton<Mode2>, public RealTimeLoop
{
	friend class Singleton<Mode2>;
public:
	virtual void chMode(EmbeddedSystemX* e);
	virtual void entry();
	virtual void eventX(EmbeddedSystemX* e);
	virtual void eventY(EmbeddedSystemX* e);
	virtual std::string getStateName(){return stateName;}
private:
	void responseM2eventX();
	void responseM2eventY();
	std::string stateName = "Mode2";
};




#endif /* INCLUDE_STATES_MODE2_HPP_ */
