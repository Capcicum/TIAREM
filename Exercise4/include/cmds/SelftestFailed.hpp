/*
 * SelftestFailed.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_SELFTESTFAILED_HPP_
#define INCLUDE_CMDS_SELFTESTFAILED_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class SelftestFailed : public Command
{
public:
	explicit SelftestFailed(int error) : errorNo(error) {};

	void execute(EmbeddedSystemX* e, SystemXState* s){s->SelftestFailed(e, errorNo);};
private:
	int errorNo;
};

#endif /* INCLUDE_CMDS_SELFTESTFAILED_HPP_ */
