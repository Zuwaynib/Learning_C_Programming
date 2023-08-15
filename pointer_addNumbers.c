#include <stdio.h>

/**
 * main - program to get the sum of numbers using pointers
 * 
 * Return - On success, always 0.
 */
 
 int* getSum(int *num1, int *num2, int *sum)
 {
      sum = *num1 + *num2;
 }
 
 int main()
 {
     int num1 = 17;
     int num2 = 35;
     int sum;
    
    int result = getSum(&num1, &num2, &sum);
    
    printf("The result is %d", result);
     
     return(0);
 }
 
