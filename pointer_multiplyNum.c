#include <stdio.h>

/**
 * main - program to get the multiplication of numbers 
 * using pointers
 * 
 * Return - On success, always 0.
 */
 
 int* multiplyNum(int *num1, int *num2, int *result)
 {
      result = *num1 * *num2;
 }
 
 int main()
 {
     int num1 = 17;
     int num2 = 35;
     int result;
    
    int answer = multiplyNum(&num1, &num2, &result);
    
    printf("The result is %d", answer);
     
     return(0);
 }
 
