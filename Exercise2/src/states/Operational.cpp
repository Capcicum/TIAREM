/*
 * Operational.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Operational.hpp>
#include <states/PowerOnSelfTest.hpp>

void Operational::Restart(EmbeddedSystemX* e)
{
	ChangeState(e, PowerOnSelfTest::get_instance());
}

