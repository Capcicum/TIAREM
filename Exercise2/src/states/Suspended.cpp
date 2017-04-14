/*
 * Suspended.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Suspended.hpp>
#include <states/Mode1.hpp>
#include <states/Ready.hpp>

void Suspended::Resume(EmbeddedSystemX* e)
{
	ChangeState(e, Mode1::get_instance());
}

void Suspended::Stop(EmbeddedSystemX* e)
{
	ChangeState(e, Ready::get_instance());
}

void Suspended::entry()
{
	std::cout << "Suspended state entry" << std::endl;
}


