/*
 * SystemXState.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include<SystemXState.hpp>


void SystemXState::ChangeState(EmbeddedSystemX* esx, SystemXState* sxs)
{
	esx->ChangeState(sxs);
}



