// Search about what is a dangling pointer in C.

// A dangling pointer is a pointer that still holds the memory address of data that has been deallocated or is no longer valid. This means the pointer "dangles" without a valid object to reference, and using it can lead to undefined behavior or program crashes.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer
    if (ptr == NULL) { // Check if allocation succeeded
        printf("Memory allocation failed \n");
        return 1;
    }
    *ptr = 100; // Store a value in the allocated memory

    free(ptr);  // Deallocate the memory, ptr now becomes a dangling pointer

    // ptr still holds the old memory address, but that memory is no longer valid.
    // Using ptr here would be dangerous and can lead to undefined behavior.
    // printf("%d\n", *ptr);  // This is NOT safe.

    ptr = NULL; // Correctly assign NULL to avoid a dangling pointer.
    
    return 0; // End of program
}