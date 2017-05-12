/*
 * Ready.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Ready.hpp>
#include <states/Configuration.hpp>
#include <states/Mode1.hpp>
#include <states/RealTimeExecution.hpp>
#include <mingw.thread.h>

void Ready::Configure(EmbeddedSystemX* e)
{
	ChangeState(this, e, Configuration::get_instance());
}

void Ready::Start(EmbeddedSystemX* e)
{
	ChangeState(this, e, Mode1::get_instance());
	e->AddState(RealTimeExecution::get_instance());
	e->startContiuousProcessing();
}

void Ready::entry(EmbeddedSystemX* e)
{
	std::cout << "Ready state entry" << std::endl;
}


