/*
 * Mode2.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Mode2.hpp>
#include <states/Mode3.hpp>

void Mode2::chMode(EmbeddedSystemX* e)
{
	ChangeState(this, e, Mode3::get_instance());
}

void Mode2::entry()
{
	std::cout << "Mode2 state entry" << std::endl;
}

void Mode2::eventX(EmbeddedSystemX* e)
{
	responseM2eventX();
}

void Mode2::eventY(EmbeddedSystemX* e)
{
	responseM2eventY();
}

void Mode2::responseM2eventX()
{
	std::cout << "Mode2 responseM2eventX" << std::endl;
}

void Mode2::responseM2eventY()
{
	std::cout << "Mode2 responseM2eventY" << std::endl;
}
