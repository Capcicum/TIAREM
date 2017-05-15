/*
 * PowerOnSelfTest.cpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */

#include<states/PowerOnSelfTest.hpp>
#include<states/Failure.hpp>
#include<states/Initializing.hpp>

void PowerOnSelfTest::SelftestFailed(EmbeddedSystemX* s, int ErrorNo)
{
	ChangeState(this, s, Failure::get_instance());
}

void PowerOnSelfTest::SelftestOk(EmbeddedSystemX* e)
{
	ChangeState(this, e, Initializing::get_instance());
}

void PowerOnSelfTest::entry(EmbeddedSystemX* e)
{
	std::cout << "PowerOnSelfTest state entry" << std::endl;
	systemSelftest();
}

void PowerOnSelfTest::systemSelftest()
{
	std::cout << "PowerOnSelfTest systemSelftest" << std::endl;
}


