/*
 * Test.cpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */

#include <Singleton.hpp>
#include <states/PowerOnSelfTest.hpp>
#include <states/Failure.hpp>
#include <states/RealTimeLoop.hpp>
#include <assert.h>
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
#include <CommandManagment.hpp>

class SingletonTest : public Singleton<SingletonTest>
{
	friend class Singleton<SingletonTest>;
public:
	int testVal;
};


int main()
{
	EmbeddedSystemX* emb = new EmbeddedSystemX();

	SingletonTest::get_instance()->testVal = 4;
	assert(SingletonTest::get_instance()->testVal == SingletonTest::get_instance()->testVal);

	emb->handleCommand(new SelftestFailed(1));
	emb->handleCommand(new Restart());
	emb->handleCommand(new SelftestOk());
	emb->handleCommand(new Initialized());
	emb->handleCommand(new Configure());
	emb->handleCommand(new ConfigurationEnded());
	emb->handleCommand(new Start());
	emb->handleCommand(new eventX());
	emb->handleCommand(new chMode());
	emb->handleCommand(new Simulate());
	emb->handleCommand(new eventX());
	emb->handleCommand(new eventY());
	emb->handleCommand(new chMode());
	emb->handleCommand(new RunRealTime());
	emb->handleCommand(new eventX());
	emb->handleCommand(new Suspend());
	emb->handleCommand(new Resume());
	emb->handleCommand(new Stop());
	emb->handleCommand(new Start());
	emb->handleCommand(new Stop());
	emb->handleCommand(new Start());
	emb->handleCommand(new Restart());

	CommandManagement* cmdMan = new CommandManagement();

	cmdMan->Add(new SelftestFailed(1));
	cmdMan->Add(new Restart());
	cmdMan->Add(new SelftestOk());
	cmdMan->Add(new Initialized());
	cmdMan->Add(new Configure());
	cmdMan->Add(new ConfigurationEnded());
	cmdMan->Add(new Start());
	cmdMan->Add(new eventX());
	cmdMan->Add(new chMode());
	cmdMan->Add(new Simulate());
	cmdMan->Add(new eventX());
	cmdMan->Add(new eventY());
	cmdMan->Add(new chMode());
	cmdMan->Add(new RunRealTime());
	cmdMan->Add(new eventX());
	cmdMan->Add(new Suspend());
	cmdMan->Add(new Resume());
	cmdMan->Add(new Stop());
	cmdMan->Add(new Start());
	cmdMan->Add(new Stop());
	cmdMan->Add(new Start());
	cmdMan->Add(new Restart());


	emb->handleCommand(cmdMan);

	return 0;
}
