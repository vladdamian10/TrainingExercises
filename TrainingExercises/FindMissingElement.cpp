#include "FindMissingElement.h"

int getMissingNumber( std::vector<int> &inputArr ) 
{
	std::vector<int>::iterator it;
	int missingNumber = 0;
	long int tmpSum = 0;
	long int realSum = 0;

	if ( inputArr.empty() )
		return -1;

	int largestNumber = *std::max_element( inputArr.begin(), inputArr.end() );

	tmpSum = ( largestNumber * (largestNumber + 1) ) / 2; //normally, sum = (n * (n+1)) /2

	for ( it = inputArr.begin(); it != inputArr.end(); it++ )
	{
		realSum += *it;
	}
	missingNumber = tmpSum - realSum;

	return missingNumber;
}