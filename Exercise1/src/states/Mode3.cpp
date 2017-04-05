/*
 * Mode3.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Mode3.hpp>
#include <states/Mode1.hpp>

void Mode3::chMode(EmbeddedSystemX* e)
{
	ChangeState(e, Mode1::get_instance());
}

void Mode3::entry()
{
	std::cout << "Mode3 state entry" << std::endl;
}

void Mode3::eventX(EmbeddedSystemX* e)
{
	responseM3eventX();
}


void Mode3::responseM3eventX()
{
	std::cout << "Mode3 responseM3eventX" << std::endl;
}



