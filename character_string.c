#include <stdio.h>
#include <ctype.h>

/* Program to convert alphabet string from lower case to uppercase */ 
int main ()
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int length = sizeof(alpha) - 1;
    
    for(int i = 0; i < length; i++)
    {
        char transform = toupper(alpha[i]);
        printf("The characters to print are %c\n", transform);
    }
    
    return(0);
}
