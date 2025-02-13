// Search & find out which is better malloc() or calloc().

#include <stdio.h>   // Include standard input/output library
#include <stdlib.h>  // Include standard library for memory allocation functions

int main() {
    // Allocate memory using malloc for 5 integers (no initialization)
    int *mallocArray = (int *)malloc(5 * sizeof(int));
    // Check if allocation was successful
    if (mallocArray == NULL) {
        printf("malloc failed to allocate memory.\n");
        return 1;
    }

    // Allocate memory using calloc for 5 integers (with initialization to zero)
    int *callocArray = (int *)calloc(5, sizeof(int));
    // Check if allocation was successful
    if (callocArray == NULL) {
        printf("calloc failed to allocate memory.\n");
        free(mallocArray); // Free previously allocated memory before exiting
        return 1;
    }

    // Print values of arrays to see the differences:
    // For mallocArray, the values are uninitialized (could be garbage)
    printf("Values in mallocArray (uninitialized):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mallocArray[i]);
    }
    printf("\n");

    // For callocArray, the values are initialized to 0
    printf("Values in callocArray (initialized to 0):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", callocArray[i]);
    }
    printf("\n");

    // Always free allocated memory to avoid memory leaks
    free(mallocArray);
    free(callocArray);
    
    return 0;  // End of program
}