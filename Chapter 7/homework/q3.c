// Q3: Write a program to insert an element in the end of an array.

// This program adds a new number at the end of an array

// We need this to talk to the user
#include <stdio.h>

// Function to print array
void printArray(int arr[], int size) {
    printf("Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert element at end
int insertAtEnd(int arr[], int size, int maxSize, int element) {
    // Check if array is full
    if(size >= maxSize) {
        printf("Sorry! Array is full.\n");
        return size;
    }
    
    // Add new element at the end
    arr[size] = element;
    
    // Return new size (old size + 1)
    return size + 1;
}

int main() {
    // Maximum size our array can hold
    #define MAX_SIZE 100
    int arr[MAX_SIZE];
    int size;
    
    // Ask user how many numbers they want to start with
    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);
    
    // Make sure size is valid
    if(size <= 0 || size >= MAX_SIZE) {
        printf("Please enter a valid size (1-%d)!\n", MAX_SIZE-1);
        return 1;
    }
    
    // Get initial numbers from user
    printf("Enter %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Show original array
    printf("\nOriginal ");
    printArray(arr, size);
    
    // Get number to insert
    int newElement;
    printf("\nEnter number to add at end: ");
    scanf("%d", &newElement);
    
    // Insert number and get new size
    size = insertAtEnd(arr, size, MAX_SIZE, newElement);
    
    // Show updated array
    printf("\nAfter insertion ");
    printArray(arr, size);
    
    return 0;
}