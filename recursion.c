#include <stdio.h>

/* Program to calculate the factorial of a number */
int fact(int n);

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    
    int result = fact(number);
    printf("The factorial of %d is %d\n", number, result);
}

int fact(int n)
{
    if(n == 0)
    {
        return(0);
    }
    else if(n ==1)
    {
        return(1);
    }
    else
    {
        return (n * fact(n - 1));
    }
}
