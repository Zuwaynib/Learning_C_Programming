#include <stdio.h>

/**
 * main - Program to change the value of a function using pointer
 * 
 * Return - On success, always 0.
 */
 
 int* getValue(int *num)
 {
     *num = 17; //assigns the value to the pointer
 }
 
 int main()
 {
     int number = 12; //assigns value to the variable
     
     getValue(&number); //function call
     
     printf("The value of the number is %d\n", number);
     
     return(0);
 }
