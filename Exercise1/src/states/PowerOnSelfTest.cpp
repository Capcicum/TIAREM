/*
 * PowerOnSelfTest.cpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */

#include<states/PowerOnSelfTest.hpp>

void PowerOnSelfTest::SelftestFailed(EmbeddedSystemX* esx)
{
	//ChangeState(esx, Failure::get_instance());
}

void PowerOnSelfTest::SelftestOK(EmbeddedSystemX* esx)
{
	//ChangeState(t, )
}

void PowerOnSelfTest::entry()
{
	std::cout << "PowerOnSelfTest State" << std::endl;
}

void PowerOnSelfTest::systemSelftest()
{
	std::cout << "PowerOnSelfTest systemSelftest" << std::endl;
}


