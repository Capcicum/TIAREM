/*
 * Configuration.hpp
 *
 *  Created on: 4. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_STATES_CONFIGURATION_HPP_
#define INCLUDE_STATES_CONFIGURATION_HPP_

#include <SystemXState.hpp>

class Configuration : public Singleton<Configuration>, public SystemXState
{
	friend class Singleton<Configuration>;
public:
	virtual void Configurationended();
	virtual void entry();
	virtual void PerformConfigurationX();
private:
	void readConfigurationInfo();
};



#endif /* INCLUDE_STATES_CONFIGURATION_HPP_ */
