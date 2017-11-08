// TrainingExercises.cpp : Defines the entry point for the console application.
//
#include "Defines.h"
#include "BinarySearch.h"
#include "Palindrom.h"
#include "BinaryGap.h"
#include "Eratosthenes.h"
#include "CountOddOccurence.h"
#include "MinElementFoundInBothVectors.h"
#include "CountNumberOfPerfectSquares.h"
using namespace std;


int main()
{
	const int N = NUMBER_OF_ELEMENTS;
	vector<int> arr  = {10, 7, 7, 7, 5, 10, 10, 11, 7};
	vector<int> arr2 = { 1, 2, 3, 4 };

	int rez = numberOfPerfectSquares( -4, -1);
	printf("number of elements which are perfect squares are: = %d\n", rez);

    return 0;
}


