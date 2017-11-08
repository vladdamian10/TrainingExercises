#include "Eratosthenes.h"

int sieveOfEratosthenes(const int nValue)
{
	//Case of getting root of a value less than 1 value avoided
	if (nValue < 1)
		return -2; 
	
	//An array with consecutive values will be created and...
	int *pArray = new int[nValue];
	int sizeArr = sizeof(pArray) / sizeof(int);
	
	//...and initialized
	for (int i = 1; i <= nValue; i++)
	{
		pArray[ i-1 ] = i;
	}
	

	int k = 1;
	int m = 0;

	//go to each position inside the array and start marking elements from there.
	while ( k <= sqrt(nValue) )
	{
		m = k + 1;
		//Mark the numbers which are multiple of m
		for ( int i = 2; m*i <= nValue; i++ )
		{
			if ( pArray[m*i - 1] != -1 )
				 pArray[m*i - 1]  = -1;
		}
		k++;
	}

	//Display the numbers which are not "flagged".
	//Those will be the prime numbers.
	printf("Prime numbers:\n");
	for (int i = 0; i < nValue; i++)
	{
		if (pArray[i] != -1)
		{
			printf(" %d ", pArray[i] );
		}
	}
	printf("\n");

	delete[] pArray;
	return 1;
}