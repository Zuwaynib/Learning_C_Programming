#include <stdio.h>
#include <math.h>

/** Creates a program that computes the result of a number raised to the power of its square root **/
int main ()
{
    int a;
    printf("Enter a number\n"); /*Prompts the user to enter a number */
    scanf("%d", &a); /* collects the number */
    
    int square_root = sqrt(a);
    printf("The square root of the number is %d\n", square_root);
    /* Prints the square root of the number */
    
    int result = pow(a, square_root); /*Calculates the power of the number raised to its square root */
    printf("The result of %d raised to the power of its square root is %d", a, result);
    /* Prints the result */
    
    return(0);
}
