// Question 2:
// Write a program to check if the character is a digit or not.

// This program checks if what you type is a number (0-9) or not

// We need this to talk to the user and work with characters
#include <stdio.h>

int main() {
    // Make a box to store one character
    char ch;
    
    // Ask the user to type something
    printf("Enter a character: ");
    // Get the character they typed
    scanf(" %c", &ch);
    
    // Check if the character is a digit (between '0' and '9')
    if(ch >= '0' && ch <= '9') {
        // If it is a digit, tell the user
        printf("%c is a digit!\n", ch);
    } else {
        // If it's not a digit, tell the user
        printf("%c is not a digit!\n", ch);
    }
    
    // Tell the computer our program finished successfully
    return 0;
}