/*
 * Suspended.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_SUSPENDED_HPP_
#define INCLUDE_STATES_SUSPENDED_HPP_

#include <states/Operational.hpp>

class Suspended : public Singleton<Suspended>, public Operational
{
	friend class Singleton<Suspended>;
public:
	virtual void Stop(EmbeddedSystemX* e);
	virtual void Resume(EmbeddedSystemX* e);
	virtual void entry();
};



#endif /* INCLUDE_STATES_SUSPENDED_HPP_ */
