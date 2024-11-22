// Q1: In a array of numbers, find how many times does a number 'x' appear.

// This program counts how many times a number appears in an array

// We need this to talk to the user
#include <stdio.h>

// Function to count occurrences of a number
int countNumber(int arr[], int size, int x) {
    // Make a counter starting at 0
    int count = 0;
    
    // Check each number in array
    for(int i = 0; i < size; i++) {
        // If we find our number, add 1 to counter
        if(arr[i] == x) {
            count++;
        }
    }
    
    // Return how many times we found the number
    return count;
}

int main() {
    // Make a box for size of array
    int size;
    
    // Ask user how many numbers they want to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);
    
    // Make an array of that size
    int arr[size];
    
    // Get numbers from user
    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Ask which number to search for
    int searchNumber;
    printf("Which number do you want to count? ");
    scanf("%d", &searchNumber);
    
    // Count how many times number appears
    int result = countNumber(arr, size, searchNumber);
    
    // Show the result
    printf("The number %d appears %d times in the array.\n", 
           searchNumber, result);
    
    return 0;
}