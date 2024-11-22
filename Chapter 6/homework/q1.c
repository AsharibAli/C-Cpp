// Q1: Write a program in C to find the maximum number between two numbers using a pointer.

// This program finds the bigger number using pointers

// We need this to talk to the user
#include <stdio.h>

// Function to find maximum using pointers
void findMax(int *num1, int *num2, int *max) {
    // Compare numbers and put bigger one in max
    if(*num1 > *num2) {
        *max = *num1;    // First number is bigger
    } else {
        *max = *num2;    // Second number is bigger
    }
}

int main() {
    // Make boxes for our numbers and maximum
    int number1, number2, maximum;
    
    // Make pointers (arrows) that point to our boxes
    int *ptr1 = &number1;
    int *ptr2 = &number2;
    int *ptrMax = &maximum;
    
    // Ask user for first number
    printf("Enter first number: ");
    scanf("%d", ptr1);   // Can use pointer to store number
    
    // Ask user for second number
    printf("Enter second number: ");
    scanf("%d", ptr2);   // Can use pointer to store number
    
    // Find maximum using our function
    findMax(ptr1, ptr2, ptrMax);
    
    // Show the result
    printf("Maximum number is: %d\n", *ptrMax);
    
    return 0;
}