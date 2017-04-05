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
	virtual void SelftestFailed(EmbeddedSystemX* esx);
	virtual void SelftestOK(EmbeddedSystemX* esx);

	virtual void entry();

	void systemSelftest();

private:

};

