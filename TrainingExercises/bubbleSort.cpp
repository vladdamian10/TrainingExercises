#include "bubbleSort.h"

void bubbleSortSolution(std::vector<int> &inputArr)
{
	std::vector<int>::iterator i;
	std::vector<int>::iterator j;

	for ( i = inputArr.begin(); i != ( inputArr.end() - 1 ); i++ )
	{
		for ( j = inputArr.begin(); j != ( inputArr.end() - 1 ); j++ )
		{
			if ( *j > *(j + 1) )
			{
				int tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}

		}
	}
}