#include <stdio.h>

/**
 * main - Program to collect the value of salary
 * and use pointer to double the value
 * 
 * On sucess, returns 0
 */

int main()
{
    double salary; //initializes the salary
    double *ptr;  //initializes the pointer
    
    printf("Enter your salary\n");
    scanf("%lf", &salary);
    
    printf("The value entered is %.2lf\n", salary);
    
    ptr = &salary; //Assigns the address of salary to pointer
    
    *ptr = salary * 2; //Assigns a new value to salary i.e doubles the value
    
    printf("The new value of salary is %.2lf", *ptr);

}
