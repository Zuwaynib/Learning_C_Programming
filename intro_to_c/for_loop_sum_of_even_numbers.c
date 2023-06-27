#include<stdio.h>


/**
 * sum of even numbers between 1-100
 */

int main()
{
    int sum = 0;
    for(int k = 2; k <= 100; k = k + 2)
    {
        sum = sum + k;
    }
        printf("%d", sum);
    return(0);
}
