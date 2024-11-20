// Question 1:
// Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user.

// This program helps us find out how far it is around a rectangle (the perimeter)

// We need to include stdio.h to use printf and scanf
#include <stdio.h>

int main() {
    // We create two boxes (variables) to store the length and width
    int length, width;
    
    // Ask the user to tell us the length
    printf("Enter the length of rectangle: ");
    // Put the user's answer into our length box
    scanf("%d", &length);
    
    // Ask the user to tell us the width
    printf("Enter the width of rectangle: ");
    // Put the user's answer into our width box
    scanf("%d", &width);
    
    // Calculate perimeter using the formula: 2 × (length + width)
    int perimeter = 2 * (length + width);
    
    // Show the answer to the user
    printf("The perimeter of rectangle is: %d\n", perimeter);
    
    // Tell the computer our program finished successfully
    return 0;
}