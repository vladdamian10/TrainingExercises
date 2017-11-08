#include "Palindrom.h"

void palindromChars(char arr[])
{
	printf("\n----- check if char array is palindrom ------\n");

	int nc = 0, nl = 0, nL = 0;
	short palindrom = 1;
	int numChars;
	
	numChars = strlen( arr );
	printf("numChars = %d ", numChars); printf("\n");
	
	for (int i = 0; i < numChars; i++)
	{
		if ( isdigit( arr[i] ) )
			nc++;
		if ( islower( arr[i] ) )
			nl++;
		if ( isupper( arr[i] ) )
			nL++;
		arr[i] = toupper( arr[i] );
	}

	for ( int i = 0; i < numChars / 2; i++ )
	{
		if ( arr[i] != arr[numChars - 1 - i] )
		{
			palindrom = 0;
			break;
		}
	}

	printf( "Numarul de litere mari este %d\n", nL );
	printf( "Numarul de litere mici este %d\n", nl );
	printf( "numarul de cifre este %d\n",       nc );
	printf( "Sirul cu litere mari este %s\n",  arr );
	
	if (palindrom)
		printf("sirul este palindrom!\n");
	else
		printf("sirul nu e palindrom\n");
}