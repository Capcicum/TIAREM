/*
 * RealTimeLoop.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/RealTimeLoop.hpp>
#include <states/Ready.hpp>
#include <states/Suspended.hpp>

void RealTimeLoop::Stop(EmbeddedSystemX* e)
{
	ChangeState(e, Ready::get_instance());
}

void RealTimeLoop::Suspend(EmbeddedSystemX* e)
{
	ChangeState(e, Suspended::get_instance());
}

