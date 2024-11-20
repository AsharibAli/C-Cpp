// This program helps us find the average of 3 numbers (like finding the middle value)

// We need this to talk to the user (for printf and scanf)
#include <stdio.h>

int main() {
    // Make three boxes to store our numbers
    int num1, num2, num3;
    
    // Ask for the first number
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    // Ask for the second number
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Ask for the third number
    printf("Enter third number: ");
    scanf("%d", &num3);
    
    // Calculate average: add all numbers and divide by how many numbers we have
    float average = (num1 + num2 + num3) / 3.0;
    
    // Show the answer to the user
    printf("The average is: %.2f\n", average);
    
    // Tell the computer our program finished successfully
    return 0;
}