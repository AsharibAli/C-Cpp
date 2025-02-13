// Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space.

#include <stdio.h>   // Include standard input/output library
#include <stdlib.h>  // Include standard library for memory allocation functions

int main() {
    // Allocate memory for 500 integers using calloc.
    // calloc initializes the allocated memory to zero.
    int *numbers = (int *)calloc(500, sizeof(int));
    
    // Check if memory allocation was successful.
    if (numbers == NULL) {
        printf("Memory allocation failed.\n"); // Print error message if allocation fails
        return 1;  // Return error code 1 to indicate failure
    }
    
    // Store the first 500 natural numbers (1 through 500) into the allocated memory.
    for (int i = 0; i < 500; i++) {
        numbers[i] = i + 1;  // Assign natural number (i+1) to the i-th element
    }
    
    // (Optional) Display the numbers to verify they are stored correctly.
    // This loop prints 500 numbers, 20 numbers per line for better readability.
    for (int i = 0; i < 500; i++) {
        printf("%d ", numbers[i]);   // Print the current number followed by a space
        if ((i + 1) % 20 == 0) {       // After every 20 numbers, print a new line
            printf("\n");
        }
    }
    
    // Free the allocated memory to prevent memory leaks.
    free(numbers);
    
    return 0;  // Return 0 to indicate successful completion of the program
}