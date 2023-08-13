#include<stdio.h>

int main()
{
    int num[5] = {1, 5, 7, 9,3};
    
    for(int i = 0; i < 5; i++)
    {
        printf("The pointer address of value %d is %p\n", num[i], &num[i]);
    }
    
    printf("The array address is %p", num);
    // The memory address of an array is equals to the address of the first number in the array
    // Array name can be used directly without the '&' because it already refers to the address
}
