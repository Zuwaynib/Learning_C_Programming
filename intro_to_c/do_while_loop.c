#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    
    int count = 1;
    do
    {
        int product = num * count;
        printf("%d * %d = %d\n", num, count, product);
        count = count + 1;
    }
    while(count<=12);
    
    return(0);
}
