/*
 * Suspended.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_SUSPENDED_HPP_
#define INCLUDE_STATES_SUSPENDED_HPP_

#include <SystemXState.hpp>

class Suspended : public Singleton<Suspended>, public SystemXState
{
	friend class Singleton<Suspended>;
public:
	virtual void Stop();
	virtual void Resume();
	virtual void entry();
};



#endif /* INCLUDE_STATES_SUSPENDED_HPP_ */
