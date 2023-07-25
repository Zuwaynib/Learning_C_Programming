#include<stdio.h>  


/* Program to calculate the area of a square */
int square();

int main()
{
    int area = square();
    printf("The area of the square is %d\n", area);
    
    return(0);
}

int square()
{
    int side;
    printf("Enter the length of the sides\n");
    scanf("%d", &side);
    
    return(side * side);
}
