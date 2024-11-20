// Question 1:
// Search on what a "Nested loop" is & print this pattern using it.

// This program prints a rectangle pattern of stars

// We need this to talk to the user
#include <stdio.h>

int main() {
    // Outer loop for rows (how many lines we want)
    for(int row = 1; row <= 4; row++) {
        
        // Inner loop for columns (how many stars in each line)
        for(int col = 1; col <= 5; col++) {
            // Print one star
            printf("*");
        }
        
        // After each row of stars, move to new line
        printf("\n");
    }
    
    return 0;
}