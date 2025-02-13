// Write a program to read strong from a file & output to the user.

// Program to read string from a file and display it to the user
#include <stdio.h>  // Include standard input/output library

int main() {
    // Declare variables
    FILE *file;     // File pointer to handle file operations
    char text[100]; // Array to store text from file (max 100 characters)
    
    // Open file in read mode ('r')
    file = fopen("input.txt", "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;   // Return error code if file couldn't be opened
    }
    
    // Read and print file contents
    while (fgets(text, 100, file) != NULL) {
        printf("%s", text);  // Display each line of text
    }
    
    // Close the file
    fclose(file);
    
    return 0;  // Program completed successfully
}