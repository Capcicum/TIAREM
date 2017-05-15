/*
 * Failure.cpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */

#include <states/Failure.hpp>
#include <states/PowerOnSelfTest.hpp>

void Failure::Restart(EmbeddedSystemX* e)
{
	ChangeState(this, e, PowerOnSelfTest::get_instance());
}

void Failure::Exit(EmbeddedSystemX* e)
{
	std::cout << "EXIT" << std::endl;
	return;
}

void Failure::entry(EmbeddedSystemX* e)
{
	std::cout << "Failure state entry" << std::endl;
}

void Failure::display(int ErrorNo)
{
	std::cout << "Failure display " << ErrorNo << std::endl;
}


