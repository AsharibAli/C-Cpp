// Q3: Write a program to print the smallest number of Two.

// This program helps us find which number is smaller between two numbers

// We need this to talk to the user
#include <stdio.h>

int main() {
    // Make two boxes to store our numbers
    int num1, num2;
    
    // Ask for the first number
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    // Ask for the second number
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Check which number is smaller using if-else
    if(num1 < num2) {
        // If first number is smaller, tell the user
        printf("%d is the smallest number\n", num1);
    } else {
        // If second number is smaller (or they're equal), tell the user
        printf("%d is the smallest number\n", num2);
    }
    
    // Tell the computer our program finished successfully
    return 0;
}