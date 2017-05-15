/*
 * Singleton.hpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */
#include <type_traits>
#include <iostream>


#ifndef INCLUDE_SINGLETON_HPP_
#define INCLUDE_SINGLETON_HPP_

template<typename T>
class Singleton
{
protected:
	Singleton() noexcept = default;
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	virtual ~Singleton() = default;

public:
	static T* get_instance() noexcept(std::is_nothrow_constructible<T>::value)
	{
		static T* instance = new T;

		return instance;
	}
};

// Inspiration from http://stackoverflow.com/questions/34519073/inherit-singleton

#endif /* INCLUDE_SINGLETON_HPP_ */
