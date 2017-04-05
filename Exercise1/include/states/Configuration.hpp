/*
 * Configuration.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_CONFIGURATION_HPP_
#define INCLUDE_STATES_CONFIGURATION_HPP_

#include <states/Operational.hpp>

class Configuration : public Singleton<Configuration>, public Operational
{
	friend class Singleton<Configuration>;
public:
	virtual void ConfigurationEnded(EmbeddedSystemX* e);
	virtual void entry();
	virtual void ConfigX(EmbeddedSystemX* e);
private:
	void readConfigurationInfo();
};



#endif /* INCLUDE_STATES_CONFIGURATION_HPP_ */
