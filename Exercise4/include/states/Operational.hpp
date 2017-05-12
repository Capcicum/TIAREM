/*
 * Operational.hpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_OPERATIONAL_HPP_
#define INCLUDE_STATES_OPERATIONAL_HPP_

#include<SystemXState.hpp>

class Operational : public SystemXState
{
public:
	virtual void Restart(EmbeddedSystemX* e);
};



#endif /* INCLUDE_STATES_OPERATIONAL_HPP_ */
