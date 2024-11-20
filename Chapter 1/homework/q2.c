// Q2:
// Take a number(n) from user & output its cube (n*n*n).

// This program helps us find the cube of a number (like 2³ = 2 × 2 × 2 = 8)

// We need this to talk to the user (for printf and scanf)
#include <stdio.h>

int main() {
    // Make a box (variable) to store the user's number
    int n;
    
    // Ask the user for their number
    printf("Enter a number: ");
    // Put their number in our box
    scanf("%d", &n);
    
    // Calculate the cube (multiply the number by itself 3 times)
    int cube = n * n * n;
    
    // Show the answer to the user
    printf("The cube of %d is: %d\n", n, cube);
    
    // Tell the computer our program finished successfully
    return 0;
}