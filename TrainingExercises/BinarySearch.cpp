#include "BinarySearch.h"
#include "Defines.h"
#include "quicksort.h"

void binarySearch(int inpArr[], int searchedNumber, const int N)
{
	int start = 0;
	int stop  = N;

	int mid = 0;
	int poz = 0;

	QUICKSORT(inpArr, start, (stop-1));

	while ( start < stop )
	{
		mid = ( start + stop ) / 2;
		if ( searchedNumber > inpArr[mid] )
			start = mid + 1;
		else
			stop = mid;
	}

	if ( inpArr[start] == searchedNumber )
		poz = start;
	std::cout << "inputArray[" << start << "]= " << searchedNumber << "\n";

}