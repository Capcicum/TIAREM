/*
 * Configuration.cpp
 *
 *  Created on: 5. apr. 2017
 *      Author: Andersen
 */

#include <states/Configuration.hpp>
#include <states/Ready.hpp>

void Configuration::ConfigurationEnded(EmbeddedSystemX* e)
{
	ChangeState(e, Ready::get_instance());
}

void Configuration::ConfigX(EmbeddedSystemX* e)
{
	std::cout << "Configuration PerformConfigurationX" << std::endl;
}

void Configuration::entry()
{
	std::cout << "Configuration state entry" << std::endl;
	readConfigurationInfo();
}

void Configuration::readConfigurationInfo()
{
	std::cout << "Configuration readConfigurationInfo" << std::endl;
}

