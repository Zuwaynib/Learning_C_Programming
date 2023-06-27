#include<stdio.h>

/**
 * Prints the sum of all numbers from 1-100
 */

int main()
{
	int sum = 0;
	for(int k = 1, k <= 100, k++)
	{
		sum = sum + k;
	}
		printf("%d", sum);

		return(0);
}
