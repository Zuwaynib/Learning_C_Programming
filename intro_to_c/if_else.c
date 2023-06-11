#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age:\n");
	scanf("%d", &age);

	if(age = 18)
	{
		printf("You are eligible to vote\n");
	}
	else if(age >= 0 && age < 18)
	{
		printf("You are too young to vote");
	}
	else
	{
		printf("Your entry is not clear");
	}
	return(0);
}
