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

	emb->SelftestFailed(1);
	emb->Restart();
	emb->SelftestOk();
	emb->Initialized();
	emb->Configure();
	emb->ConfigX();
	emb->ConfigurationEnded();
	emb->Start();
	emb->eventX();
	emb->chMode();
	emb->eventX();
	emb->eventY();
	emb->chMode();
	emb->eventX();
	emb->chMode();
	emb->Suspend();
	emb->Resume();
	emb->Suspend();
	emb->Stop();
	emb->Start();
	emb->Stop();
	emb->Start();
	emb->Restart();

	return 0;
}
