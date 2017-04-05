/*
 * EmbeddedSystemX.cpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#include <EmbeddedSystemX.hpp>
#include <states/PowerOnSelfTest.hpp>

EmbeddedSystemX::EmbeddedSystemX() :
	Name(),
	VersionNo(0),
	state(PowerOnSelfTest::get_instance())
{
	state->entry();
}

void EmbeddedSystemX::ChangeState(SystemXState* s)
{
	state->exit();
	state = s;
	state->entry();
}

void EmbeddedSystemX::SelftestOk()
{
	std::cout << "SelftestOk" << std::endl;
	state->SelftestOk(this);
}

void EmbeddedSystemX::Initialized()
{
	std::cout << "Initialized" << std::endl;
	state->Initialized(this);
}

void EmbeddedSystemX::Restart()
{
	std::cout << "Restart" << std::endl;
	state->Restart(this);
}

void EmbeddedSystemX::Configure()
{
	std::cout << "Configure" << std::endl;
	state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded()
{
	std::cout << "ConfigurationEnded" << std::endl;
	state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Exit()
{
	std::cout << "Exit" << std::endl;
	state->Exit(this);
}

void EmbeddedSystemX::Stop()
{
	std::cout << "Stop" << std::endl;
	state->Stop(this);
}

void EmbeddedSystemX::Start()
{
	std::cout << "Start" << std::endl;
	state->Start(this);
}

void EmbeddedSystemX::Suspend()
{
	std::cout << "Suspend" << std::endl;
	state->Suspend(this);
}

void EmbeddedSystemX::Resume()
{
	std::cout << "Resume" << std::endl;
	state->Resume(this);
}

void EmbeddedSystemX::SelftestFailed(int ErrorNo)
{
	std::cout << "SelftestFailed" << std::endl;
	state->SelftestFailed(this, ErrorNo);
}

void EmbeddedSystemX::ConfigX()
{
	std::cout << "ConfigX" << std::endl;
	state->ConfigX(this);
}

void EmbeddedSystemX::chMode()
{
	std::cout << "chMode" << std::endl;
	state->chMode(this);
}

void EmbeddedSystemX::eventX()
{
	std::cout << "eventX" << std::endl;
	state->eventX(this);
}

void EmbeddedSystemX::eventY()
{
	std::cout << "eventY" << std::endl;
	state->eventY(this);
}
