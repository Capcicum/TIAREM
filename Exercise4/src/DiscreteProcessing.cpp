/*
 * DiscreteProcessing.cpp
 *
 *  Created on: 11. maj 2017
 *      Author: Andersen
 */

#include <DiscreteProcessing.hpp>

#include <cmds/SelftestFailed.hpp>
#include <cmds/Restart.hpp>
#include <cmds/ConfigX.hpp>
#include <cmds/ConfigurationEnded.hpp>
#include <cmds/Configure.hpp>
#include <cmds/Exit.hpp>
#include <cmds/Initialized.hpp>
#include <cmds/Resume.hpp>
#include <cmds/SelftestOk.hpp>
#include <cmds/Start.hpp>
#include <cmds/Stop.hpp>
#include <cmds/Suspend.hpp>
#include <cmds/chMode.hpp>
#include <cmds/eventX.hpp>
#include <cmds/eventY.hpp>
#include <cmds/Simulate.hpp>
#include <cmds/RunRealTime.hpp>

DiscreteProcessing::DiscreteProcessing(ContinuousProcessing* con) :
	proc(con),
	command("")
{
	emb = new EmbeddedSystemX(proc);
}

void DiscreteProcessing::Run()
{
	std::cout << "Input: " << std::endl;
	std::cin >> command;
	std::cout << command << std::endl;
	if (command.compare("SelftestOk") == 0)
	{
		emb->handleCommand(new SelftestOk());
	}
	else if (command.compare("Restart") == 0)
	{
		emb->handleCommand(new Restart());
	}
	else if (command.compare("Initialized") == 0)
	{
		emb->handleCommand(new Initialized());
	}
	else if (command.compare("Configure") == 0)
	{
		emb->handleCommand(new Configure());
	}
	else if (command.compare("ConfigurationEnded") == 0)
	{
		emb->handleCommand(new ConfigurationEnded());
	}
	else if (command.compare("Exit") == 0)
	{
		emb->handleCommand(new Exit());
	}
	else if (command.compare("Stop") == 0)
	{
		emb->handleCommand(new Stop());
	}
	else if (command.compare("Start") == 0)
	{
		emb->handleCommand(new Start());
	}
	else if (command.compare("Suspend") == 0)
	{
		emb->handleCommand(new Suspend());
	}
	else if (command.compare("Resume") == 0)
	{
		emb->handleCommand(new Resume());
	}
	else if (command.compare("SelftestFailed") == 0)
	{
		emb->handleCommand(new SelftestFailed(1));
	}
	else if (command.compare("ConfigX") == 0)
	{
		emb->handleCommand(new ConfigX());
	}
	else if (command.compare("chMode") == 0)
	{
		emb->handleCommand(new chMode());
	}
	else if (command.compare("eventX") == 0)
	{
		emb->handleCommand(new eventX());
	}
	else if (command.compare("eventY") == 0)
	{
		emb->handleCommand(new eventY());
	}
	else if (command.compare("RunRealTime") == 0)
	{
		emb->handleCommand(new RunRealTime());
	}
	else if (command.compare("Simulate") == 0)
	{
		emb->handleCommand(new Simulate());
	}
	else {
		std::cout << "Wrong Input" << std::endl;
	}

}


