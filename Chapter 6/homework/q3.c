// Q3: Write a program in C to print all the letters in english alphabet using a pointer.

// This program prints all English alphabet letters using a pointer

// We need this to talk to the user
#include <stdio.h>

// Function to print lowercase alphabet
void printLowercase(char *ptr) {
    printf("Lowercase alphabet: ");
    // Start from 'a' and go until 'z'
    for(char letter = 'a'; letter <= 'z'; letter++) {
        *ptr = letter;    // Put letter in the box pointer points to
        printf("%c ", *ptr);
    }
    printf("\n");
}

// Function to print uppercase alphabet
void printUppercase(char *ptr) {
    printf("Uppercase alphabet: ");
    // Start from 'A' and go until 'Z'
    for(char letter = 'A'; letter <= 'Z'; letter++) {
        *ptr = letter;    // Put letter in the box pointer points to
        printf("%c ", *ptr);
    }
    printf("\n");
}

int main() {
    // Make a box to store one letter
    char letter;
    
    // Make a pointer (arrow) that points to our letter box
    char *ptr = &letter;
    
    // Print both lowercase and uppercase alphabets
    printLowercase(ptr);
    printUppercase(ptr);
    
    return 0;
}