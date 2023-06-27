#include<stdio.h>

/**
 * sum of odd numbers from 1-100
 */

int main()
{
    int sum = 0;
    for(int k = 1; k <= 100; k = k + 2)
    {
        sum = sum + k;
    }
        printf("%d", sum);
    return(0);
}
