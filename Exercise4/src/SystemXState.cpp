/*
 * SystemXState.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include<SystemXState.hpp>


void SystemXState::ChangeState(SystemXState* from, EmbeddedSystemX* esx, SystemXState* to)
{
	esx->ChangeState(from, to);
}



