#include <stdio.h>
#include <ctype.h>

/** Creates a program that converts a character from lowercase to uppercase and back **/
void main ()
{
    char beta = 'f';
    char convert = toupper(beta); /* function to convert character to upper case under the ctype.h header file*/
    printf("The result of the conversion is %c\n", convert);
    /* Prints result of conversion from lowercase to uppercase */
    
    char reverse_conversion = tolower(convert); /* converts the character back from uppercase to lowercase */
    printf("The final conversion is %c\n", reverse_conversion);
    
}
