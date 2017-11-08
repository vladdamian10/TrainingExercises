#include "fibonacci.h"

void fibonacci(int maxValue)
{
	printf("\n----------------------\n");
	int a = 0;
	int b = 1;
	int c = 0;

	for (int i = 1; i < maxValue; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(" %d ", c);
	}
	printf("\n");
}