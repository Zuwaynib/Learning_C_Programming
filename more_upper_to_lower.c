#include<stdio.h>
#include<ctype.h>

/* Program to turn lowercase alphabet to uppercase then back to lowercase */

int main()
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int length = sizeof(alpha) - 1;
    
    for(int i = 0; i < length; i++)
    {
        char transform = toupper(alpha[i]);
        printf("%c", transform);
    }
    
    for(int i = 0; i < length; i++)
    {
        char more = tolower(alpha[i]);
        printf("%c", more);
    }
    
    return(0);
}
