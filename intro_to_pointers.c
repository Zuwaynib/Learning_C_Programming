#include <stdio.h>

/**
 * main - Learning about pointers and assigning value
 * 
 * On success, returns 0
 */

int main()
{
    int age = 25;
    
    printf("%p\n", &age); //Prints the memory address
    
    int *ptr = &age;
    
    printf("%p\n", ptr); //Also prints the memory address
    
    printf("The value is %d", *ptr);  //Prints the value stored in the pointer address
    
    return(0);
    
    //note - ptr is for memory address while *ptr is for the value
}
