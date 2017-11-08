#include "MinElementFoundInBothVectors.h"

//function will return the minimum value which is found in both vectors
//if no similar values, then return -1

//--------------
int minValueFoundInBothVectors( std::vector<int> &A, std::vector<int> &B )
{
	if (A.empty() || B.empty())
		return -1;

	int sizeA   = A.size();
	int sizeB   = B.size();

	sort( A.begin(), A.end() );
	sort( B.begin(), B.end() );
	
	//Case 1: Iterate through all values of A, for each time we increment the index in B.
	//That will mean that for each B[k], all values of A will be searched for finding similar values. 
	if (sizeB < sizeA)
	{
		int i = 0;
		for (int k = 0; k < sizeB; k++)
		{
			while ( (i < sizeA -1 ) && A[i] < B[k] ) i++; //Looping through (sizeA-1) will help in the case of having no common MIN value.
			if ( A[i] == B[k] ) return A[i];
		}
	}
	//Case 2: Iterate through all values of B, for each time we increment the index of A.
	//That will mean that for each A[k], all values of B will be searched for finding similar values.
	else
	{
		int i = 0;
		for (int k = 0; k < sizeA; k++)
		{
			while ( (i < sizeB - 1) && B[i] < A[k] ) i++;
			if ( B[i] == A[k] ) return B[i];
		}
	}

	return -1;
}