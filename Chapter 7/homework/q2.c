// Q2: Write a program to print the largest number in an array.

// This program finds the biggest number in an array

// We need this to talk to the user
#include <stdio.h>

// Function to find the largest number
int findLargest(int arr[], int size) {
    // Assume first number is largest
    int largest = arr[0];
    
    // Check each number in array
    for(int i = 1; i < size; i++) {
        // If we find bigger number, update largest
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Return the biggest number we found
    return largest;
}

int main() {
    // Make a box for size of array
    int size;
    
    // Ask user how many numbers they want to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);
    
    // Make sure size is positive
    if(size <= 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }
    
    // Make an array of that size
    int arr[size];
    
    // Get numbers from user
    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Find and show the largest number
    int largest = findLargest(arr, size);
    printf("The largest number is: %d\n", largest);
    
    return 0;
}