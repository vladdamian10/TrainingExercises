#include "BinaryGap.h"

int binaryGap(int N) {

	int tmp = 0, max = 0;
	unsigned int counter = 0;
	tmp = N;
	//first, ensure that we find the first 1. From there we can look for binary gap.
	while (!(tmp & 0x00000001)) { tmp = tmp >> 1; }
	//then, continue to look on every bit and see if is 0 or 1
	while (tmp)
	{
		if (!(tmp & 0x00000001)) { counter++; } //count how  many sequential 0s are
		else if ((tmp & 0x00000001)) //when the next 1 is found
		{
			//keep the max value of 0s sequence 
			if (counter > max)
			{
				max = counter;
			}
			counter = 0; //reset the counter for the next possible 0s sequence
		}
		tmp = tmp >> 1; //get the next bit
	}
	return max;
}