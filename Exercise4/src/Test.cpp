/*
 * Test.cpp
 *
 *  Created on: 3. apr. 2017
 *      Author: Andersen
 */


#include <DiscreteProcessing.hpp>
#include <ContinuousProcessing.hpp>



int main()
{
	ContinuousProcessing* con = new ContinuousProcessing();
	DiscreteProcessing* dis = new DiscreteProcessing(con);

	dis->StartThread();
	dis->Join();
}
