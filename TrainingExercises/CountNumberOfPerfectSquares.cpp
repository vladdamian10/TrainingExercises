#include "CountNumberOfPerfectSquares.h"

int numberOfPerfectSquares( int startIntervalValue, int stopIntervalValue ) 
{
	int localVal = startIntervalValue;
	int counter = 0;

	//the big issue is the negative interval, because we can not calculate root mean square
	if (localVal <= 0)
		localVal = 1;
	//otherwise, start the counting from the lowest value which, after raising to power 2, will be found inside interval
	else
		localVal = ceil( sqrt(localVal) );

	//start to count how many values raised at power 2 will be found inside interval.
	while ( pow(localVal, 2) <= stopIntervalValue )
	{
		counter++;
		localVal++;
	}

	return counter;
}