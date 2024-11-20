// Question 2
// Write a program to check if the given number is a natural number.

// This program checks if a number is natural (like 1, 2, 3, 4...)

// We need this to talk to the user
#include <stdio.h>

int main() {
    // Make a box to store our number
    int num;
    
    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is natural (greater than 0)
    if(num > 0) {
        // If it's greater than 0, it's natural!
        printf("%d is a natural number!\n", num);
    } else {
        // If it's 0 or less, it's not natural
        printf("%d is not a natural number.\n", num);
    }
    
    // Tell the computer our program finished successfully
    return 0;
}