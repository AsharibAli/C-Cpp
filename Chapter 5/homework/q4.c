// Question no 4:
// Make your own pow function.

// This program makes our own power function (like 2³ = 2 × 2 × 2 = 8)

// We need this to talk to the user
#include <stdio.h>

// Function to calculate power (base raised to exponent)
int myPow(int base, int exponent) {
    // If exponent is 0, answer is always 1
    if(exponent == 0) {
        return 1;
    }
    
    // If exponent is negative, we don't handle it here
    if(exponent < 0) {
        printf("Please enter a positive exponent!\n");
        return -1;
    }
    
    // Start with the base number
    int result = 1;
    
    // Multiply by base 'exponent' times
    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    
    // Send back the final answer
    return result;
}

int main() {
    // Make boxes for base and exponent
    int base, exponent;
    
    // Ask user for the base number
    printf("Enter base number: ");
    scanf("%d", &base);
    
    // Ask user for the exponent
    printf("Enter exponent (power): ");
    scanf("%d", &exponent);
    
    // Calculate the power using our function
    int result = myPow(base, exponent);
    
    // Show the result if it's valid
    if(result != -1) {
        printf("%d raised to power %d is: %d\n", base, exponent, result);
    }
    
    return 0;
}