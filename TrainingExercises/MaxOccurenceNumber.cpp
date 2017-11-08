#include "MaxOccurenceNumber.h"

int getNumberWithMaxOccurence( std::vector<int>& inputArr ) 
{
	int N = inputArr.size();
	int maxOccurence = 1; //There will be at least one number in the array.
	int index = 0;
	int largestNumInArray = *max_element(inputArr.begin(), inputArr.end()); //will be used to create a local vector, with accumulators
	std::vector<int> count(largestNumInArray + 1, 0); //vector used to store the number of appereances of each number in the input array

	for (int i = 0; i < N; i++)
	{
		//if a duplicate is found in input array
		if (count[inputArr[i]] > 0)
		{
			int tmp = count[inputArr[i]];

			//To assure that the index will point the the value which is appearing most in array
			if (tmp >= maxOccurence)
			{
				maxOccurence = tmp;
				index = i;
			}
			count[inputArr[i]] = tmp + 1; //Count the number of appereances of each number stored in array.
		}
		else
		{
			count[inputArr[i]] = 1; //First appereance of a number from the input array.
		}
	}
	return inputArr[index]; //this number apperead the most in the input array.
}