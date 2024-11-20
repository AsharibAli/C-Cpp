// Question 2:
// Write a function to find square root of a number.

// This program finds the square root of a number

// We need this to talk to the user and use math functions
#include <stdio.h>
#include <math.h>

// Function to find square root (returns float for decimal numbers)
float findSquareRoot(float num) {
    // Check if number is negative
    if(num < 0) {
        printf("Can't find square root of negative number!\n");
        return -1;
    }
    
    // If number is 0 or 1, that's our answer
    if(num == 0 || num == 1) {
        return num;
    }
    
    // Start with a guess (half of the number)
    float guess = num / 2;
    float error = 0.000001;  // How close we want to be
    
    // Keep making better guesses
    while(1) {
        // Calculate new guess using Newton's method
        float newGuess = (guess + num/guess) / 2;
        
        // If we're close enough, we found our answer!
        if(fabs(newGuess - guess) < error) {
            return newGuess;
        }
        
        // Try again with our better guess
        guess = newGuess;
    }
}

int main() {
    // Make a box for our number
    float number;
    
    // Ask user for a number
    printf("Enter a number: ");
    scanf("%f", &number);
    
    // Find the square root
    float result = findSquareRoot(number);
    
    // Show the result (if it's valid)
    if(result >= 0) {
        printf("Square root of %.2f is: %.2f\n", number, result);
    }
    
    return 0;
}