/*
 * PowerOnSelfTest.hpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */
#include <Singleton.hpp>
#include <SystemXState.hpp>


class PowerOnSelfTest : public Singleton<PowerOnSelfTest>, public SystemXState
{
	friend class Singleton<PowerOnSelfTest>;
public:
	virtual void SelftestFailed(EmbeddedSystemX* s, int ErrorNo);
	virtual void SelftestOk(EmbeddedSystemX* e);

	virtual void entry();

	void systemSelftest();

	virtual std::string getStateName(){return stateName;}

private:
	std::string stateName = "PowerOnSelfTest";
};

