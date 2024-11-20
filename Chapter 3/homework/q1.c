// Q1:  Write a program to check if the number is Armstrong number or not

// This program checks if a number is an Armstrong number

// We need this to talk to the user and use math functions
#include <stdio.h>
#include <math.h>

int main() {
    // Make boxes to store our number and calculations
    int num, originalNum, remainder;
    int result = 0;
    int digits = 0;
    
    // Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Save the original number (we'll need it later)
    originalNum = num;
    
    // First count how many digits the number has
    int temp = num;
    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }
    
    // Now check if it's an Armstrong number
    temp = num;
    while(temp != 0) {
        // Get the last digit
        remainder = temp % 10;
        // Add the digit raised to power of number of digits
        result += pow(remainder, digits);
        // Remove the last digit
        temp = temp / 10;
    }
    
    // Check if the result equals the original number
    if(result == originalNum) {
        printf("%d is an Armstrong number!\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    
    return 0;
}