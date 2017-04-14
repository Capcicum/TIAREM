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
	virtual std::string getStateName(){return stateName;}
private:
	void readConfigurationInfo();
	std::string stateName = "Configuration";
};



#endif /* INCLUDE_STATES_CONFIGURATION_HPP_ */
