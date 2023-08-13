#include<stdio.h>

/**
 * main - Program to find the largest element of an array using pointers
 * 
 * On success, return 0
 */
 
 int main() {
    int arr[] = {34, 12, 21, 54, 48};
    int *ptr = arr; // Pointer to the first element of the array

    int largest = *ptr; // Initialize largest with the first element

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (largest < *(ptr + i)) {
            largest = *(ptr + i); // Update largest if a larger element is found
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
