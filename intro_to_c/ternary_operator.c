#include<stdio.h>

int main()
{
	int age = 12;

	(age >= 18) ? 
		printf("You are eligible to vote"):
		printf("You are not eligible to vote");

	return (0);
}

{
	char operator = '*';

	int num_1 = 7;
	int num_2 = 9;

	int result = (operator == '*')?
		(num_1 * num_2):
		(num_1 + num_2);
	printf("%d", result);

	return(0);
}

{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);

	(num % 2==0)?
		printf("The number is even\n"):
		printf("The number is odd");
	return(0);
}
