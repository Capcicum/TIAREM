/*
 * Thread.hpp
 *
 *  Created on: 12. maj 2017
 *      Author: Andersen
 */

#ifndef INCLUDE_OS_THREAD_HPP_
#define INCLUDE_OS_THREAD_HPP_

#include <mingw.thread.h>
#include <mingw.mutex.h>
#include <thread>
#include <atomic>

namespace os
{

class Thread
{
public:
	Thread();
	virtual ~Thread();
	void StartThread();
	void Terminate();
	void Join();
	void Sleep(int milli);
protected:
	virtual void Run() =0;
private:
	void ThreadRun(std::atomic<bool>& running);
	std::thread thread;
	std::atomic<bool> isRunning;
	std::mutex mux;
};
}



#endif /* INCLUDE_OS_THREAD_HPP_ */
