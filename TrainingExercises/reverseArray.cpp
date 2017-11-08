#include "reverseArray.h"

void reverseArray(int inputArr[], int size)
{
	printf( "\n------------------------------\n" );
	printf( " size of the array from reverse function is = %d\n", size );

	for ( int i = 0; i < size / 2; i++ )
	{
		int tmp     = inputArr[i];
		inputArr[i] = inputArr[size - i - 1];
		inputArr[size - i - 1] = tmp;
	}
}