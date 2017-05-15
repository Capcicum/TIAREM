/*
 * SelftestOk.hpp
 *
 *  Created on: 13. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_CMDS_SELFTESTOK_HPP_
#define INCLUDE_CMDS_SELFTESTOK_HPP_

#include <Command.hpp>
#include <EmbeddedSystemX.hpp>
#include <SystemXState.hpp>

class SelftestOk : public Command
{
public:
	void execute(EmbeddedSystemX* e, SystemXState* s){std::cout << "SelftestOk" << std::endl; s->SelftestOk(e);};
};

#endif /* INCLUDE_CMDS_SELFTESTOK_HPP_ */
