/*
 * Initializing.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Initializing.hpp>
#include <states/Ready.hpp>


void Initializing::Initialized(EmbeddedSystemX* e)
{
	ChangeState(e, Ready::get_instance());
}

void Initializing::entry()
{
	std::cout << "Initializing state entry" << std::endl;
	startInitializing();
}

void Initializing::startInitializing()
{
	std::cout << "Initializing startInitializing" << std::endl;
}
