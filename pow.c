#include <stdio.h>
#include <math.h>

/* Program  to use the pow() function under the math.h header type */
int main()
{
    int a = 5;
    int b = 2;
    
    int result = pow(a, b); 
    printf("The result of %d raised to power of %d is %d\n", a, b,  result);
    
    return(0);
}
