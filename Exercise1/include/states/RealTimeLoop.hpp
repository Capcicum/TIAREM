/*
 * RealTimeLoop.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_REALTIMELOOP_HPP_
#define INCLUDE_STATES_REALTIMELOOP_HPP_

#include <states/Operational.hpp>

class RealTimeLoop : public Operational
{
public:
	virtual void Stop(EmbeddedSystemX* e);
	virtual void Suspend(EmbeddedSystemX* e);
};



#endif /* INCLUDE_STATES_REALTIMELOOP_HPP_ */
