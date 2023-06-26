#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter a between 1-7\n");
	scanf("%d", &num);

	switch(num)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("Weekdays");
			break;

		case 1:
		case 7:
			printf("Weekend");
			break;
	}
		return(0);
}
