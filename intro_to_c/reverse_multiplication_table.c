#include<stdio.h>

int main()
{
	int number;

	printf("Enter a number\n");
	scanf("%d", &number);

	int count = 12;
	while(count <=12 && count > 0)
	{
		int product = num * count;
		printf("%d * %d = %d\n", num, count, product);
		count = count - 1;
	}
		return(0);
}
