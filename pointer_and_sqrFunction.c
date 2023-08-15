#include <stdio.h>

/**
 * main - calculate square function using pointer
 * 
 * Return - On success, always 0.
 */
 
 int* findSquare(int *num)
 {
     int square = *num * *num;
 }
 
 int main()
 {
     int num = 12; //assigns value to the variable
     
     int square = findSquare(&num); //function call
     
     printf("The square of the number is %d\n", square);
     
     return(0);
 }
