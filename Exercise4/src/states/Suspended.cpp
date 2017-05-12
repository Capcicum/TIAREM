/*
 * Suspended.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Suspended.hpp>
#include <states/Mode1.hpp>
#include <states/Ready.hpp>
#include <states/RealTimeExecution.hpp>

void Suspended::Resume(EmbeddedSystemX* e)
{
	ChangeState(this, e, Mode1::get_instance());
	e->AddState(RealTimeExecution::get_instance());
	e->startContiuousProcessing();
}

void Suspended::Stop(EmbeddedSystemX* e)
{
	ChangeState(this, e, Ready::get_instance());
}

void Suspended::entry(EmbeddedSystemX* e)
{
	std::cout << "Suspended state entry" << std::endl;
}


