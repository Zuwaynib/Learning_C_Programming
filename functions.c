#include <stdio.h>

int addNumbers(num_1, num_2); /* Function prototype */

int main()
{
	int sum = addNumbers(3, 5); /*Calling the function */
	printf("The sum of the numbers is %d\n", sum);  /*The output */

	return (0);
}

int addNumbers(num_1, num_2)
{
	printf("Enter two numbers\n"); 
	scanf("%d%d", &num_1, num_2); /* Collects the two numbers */

	return (num_1 + num_2); /* Returns the sum of the numbers */
}
