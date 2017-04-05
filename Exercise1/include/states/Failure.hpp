/*
 * Failure.hpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_FAILURE_HPP_
#define INCLUDE_FAILURE_HPP_

#include <Singleton.hpp>
#include <SystemXState.hpp>

class Failure : public Singleton<Failure>, public SystemXState
{
	friend class Singleton<Failure>;
public:
	virtual void Restart(EmbeddedSystemX* e);
	virtual void Exit(EmbeddedSystemX* e);
	virtual void entry();
private:
	void display(int ErrorNo);
};



#endif /* INCLUDE_FAILURE_HPP_ */
