/*
 * Mode1.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Mode1.hpp>
#include <states/Mode2.hpp>

void Mode1::chMode(EmbeddedSystemX* e)
{
	ChangeState(e, Mode2::get_instance());
}

void Mode1::entry()
{
	std::cout << "Mode1 state entry" << std::endl;
}

void Mode1::eventX(EmbeddedSystemX* e)
{
	responseM1eventX();
}


void Mode1::responseM1eventX()
{
	std::cout << "Mode1 responseM1eventX" << std::endl;
}


