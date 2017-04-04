/*
 * EmbeddedSystemX.cpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#include <EmbeddedSystemX.hpp>

EmbeddedSystemX::EmbeddedSystemX() :
	Name(),
	VersionNo(),
	state()
{

}

void EmbeddedSystemX::ChangeState(SystemXState* s)
{
	state = s;
}

void EmbeddedSystemX::SelftestOk()
{
	state->SelftestOk(this);
}

void EmbeddedSystemX::Initialized()
{
	state->Initialized(this);
}

void EmbeddedSystemX::Restart()
{
	state->Restart(this);
}

void EmbeddedSystemX::Configure()
{
	state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded()
{
	state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Exit()
{
	state->Exit(this);
}

void EmbeddedSystemX::Stop()
{
	state->Stop(this);
}

void EmbeddedSystemX::Start()
{
	state->Start(this);
}

void EmbeddedSystemX::Suspend()
{
	state->Suspend(this);
}

void EmbeddedSystemX::Resume()
{
	state->Resume(this);
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo)
{

}

void EmbeddedSystemX::ConfigX()
{
	state->ConfigX(this);
}

void EmbeddedSystemX::chMode()
{
	state->chMode(this);
}

void EmbeddedSystemX::eventX()
{
	state->eventX(this);
}

void EmbeddedSystemX::eventY()
{
	state->eventY(this);
}
