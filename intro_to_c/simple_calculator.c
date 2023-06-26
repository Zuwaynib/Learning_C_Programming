#include<stdio.h>

int main()
{
	char operator;
	double num1, num2, result;

	printf("Choose an operator('+', '-', '*', '/')\n");
	scanf("%c", &operator);

	printf("Enter two numbers:\n");
	scanf("%lf %lf", &num1, &num2);

	switch(operator)
	{
		case '+':
			result = num1 + num2;
			printf("%.2lf", result);
			break;

		case '-':
			result = num1 - num2;
			printf("%.2lf", result);
			break;

		case '*':
			result = num1 * num2;
			printf("%.2lf", result);
			break;

		case '/':
			if(num2 != 0)
			{
				result = num1 / num2;
				printf("%.2lf", result);
			}
			else
			{
				printf("Error: Division by zero is not allowed");
			}
			break;
	}
		return(0);
}
