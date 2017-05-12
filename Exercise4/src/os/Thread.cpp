/*
 * Thread.cpp
 *
 *  Created on: 12. maj 2017
 *      Author: Andersen
 */

#include <os/Thread.hpp>
#include <chrono>
#include <iostream>

namespace os
{

Thread::Thread()
{
	isRunning = false;
}

Thread::~Thread()
{
	Terminate();
}
void Thread::ThreadRun(std::atomic<bool>& running)
{
	while(running)
	{
		Run();
	}
}

void Thread::StartThread()
{
	std::lock_guard<std::mutex> lock(mux);
	if(!isRunning)
	{
		isRunning = true;
		thread = std::thread(&Thread::ThreadRun, this, std::ref(isRunning));
	}
}

void Thread::Terminate()
{
	std::lock_guard<std::mutex> lock(mux);
	if(isRunning)
	{
		isRunning = false;
		if(thread.joinable())
			thread.join();
	}
}

void Thread::Join()
{
	if(thread.joinable())
		thread.join();
}

void Thread::Sleep(int milli)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(milli));
}

}

