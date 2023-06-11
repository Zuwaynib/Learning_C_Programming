#include <stdio.h>

int main()
{
	char grade;
	printf("Enter your grade to get a remark");
	scanf("%c", &grade);

	switch(grade)
	{
		case 'A':
			printf("You are an excellent student");
			break;

		case 'B':
			printf("You are a good student");
			break;

		case 'C':
			printf("You can do better");
			break;

		default:
			printf("Who paid your tuition?");
	}

		return(0);
}
