#include "CountOddOccurence.h"

//TODO: Implement a mechanism to return one of the numbers which are appearing for a odd period of times.
int getOddOccurrence( std::vector<int> inp )
{
	std::vector<int>::iterator it;
	int res = 0, poz = 0;

	for (it = inp.begin(); it != inp.end(); it++)
	{
		res = res ^ (*it);
		//std::cout << "res = " << res << "\n";
	}

	return res;
}


int solution( std::vector<int> &input )
{
	std::vector<int> flags;
	std::vector<int>::iterator itf;
	std::vector<int>::iterator iti;
	std::vector<int>::iterator itj;
	
	const int sizeOfInput = (const int)input.size();
	int i = 0, j = 0, pos = 0;

	//create a vector of FLAGS
	for ( int i = 0; i < sizeOfInput; i++ ){ flags.push_back(1); }

	for ( iti = input.begin(); iti != input.end(); iti++ )
	{
		itf = flags.begin() + i; //increment over the flags vector similar to the increment of input vector
		if ( *itf == 1 )
		{
			j = i + 1;
			for (itj = input.begin() + j; itj != input.end(); itj++)
			{
				if (*iti == *itj)
				{
					*itf = 0;
					*( itf + (j - i) ) = 0;
					break;
				}
				j++;
			}
		}
		i++;
	}

	itf = flags.begin();
	while (*itf == 0 && itf != flags.end())
	{
		pos++;
		itf++;
	}
	return input[pos];
}