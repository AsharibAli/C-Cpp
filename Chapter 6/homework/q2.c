// Q2: Write a program in C to print the elements of an array in reverse order.

// This program prints array elements in reverse order

// We need this to talk to the user
#include <stdio.h>

// Function to print array in reverse
void printReverse(int arr[], int size)
{
    // Start from last element and go backwards
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Make a box for size of array
    int size;

    // Ask user how many numbers they want to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);
    // Check if size is valid
    if (size <= 0) {
        printf("Please enter a positive number\n");
        return 1;
    }

    // Make an array of that size using dynamic allocation
    int *arr = (int*)malloc(size * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get numbers from user
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call function to print in reverse
    printReverse(arr, size);

    return 0;
}