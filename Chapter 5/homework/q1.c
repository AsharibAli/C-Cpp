// Question 1: 
// Write a function to find sum of digits of a number.

// This program adds up all digits in a number (like 123 → 1+2+3 = 6)

// We need this to talk to the user
#include <stdio.h>

// Function to find sum of digits
int sumOfDigits(int num) {
    // Make a box to store our sum
    int sum = 0;
    
    // Keep going until no digits are left
    while(num > 0) {
        // Get the last digit using % 10
        int digit = num % 10;
        
        // Add this digit to our sum
        sum = sum + digit;
        
        // Remove the last digit using / 10
        num = num / 10;
    }
    
    // Send back the final sum
    return sum;
}

int main() {
    // Make a box for our number
    int number;
    
    // Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call our function and save the result
    int result = sumOfDigits(number);
    
    // Show the result
    printf("Sum of digits in %d is: %d\n", number, result);
    
    return 0;
}