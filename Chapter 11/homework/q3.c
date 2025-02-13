// Search about what is 'memory leak' in C.

// A memory leak occurs when a program allocates memory dynamically but never frees it, causing that memory to remain occupied even after it's no longer needed. This can eventually lead to reduced performance or program crashes.


#include <stdio.h>   // Include standard input/output library
#include <stdlib.h>  // Include standard library for memory allocation functions

int main() {
    // Dynamically allocate memory for an integer
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory but do not free it later

    // Check if memory allocation was successful
    if (ptr == NULL) {                     
        printf("Memory allocation failed.\n");  // Print error if allocation fails
        return 1;                              // Return error code
    }
    
    *ptr = 10;  // Assign 10 to the allocated memory

    // Here, we do not free the allocated memory.
    // This is a memory leak because the allocated memory is never returned to the system.
    
    // End of program. When the program terminates, the allocated memory is lost.
    return 0;  // Return 0 to indicate successful program termination
}