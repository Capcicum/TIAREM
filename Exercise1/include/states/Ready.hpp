/*
 * Ready.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_READY_HPP_
#define INCLUDE_STATES_READY_HPP_

#include <SystemXState.hpp>

class Ready : public Singleton<Ready>, public SystemXState
{
	friend class Singleton<Ready>;
public:
	virtual void Configure();
	virtual void Start();
	virtual void entry();
private:

};



#endif /* INCLUDE_STATES_READY_HPP_ */
