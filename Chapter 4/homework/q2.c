// Question 2: Write a program to check if the number is a prime or not.

// This program checks if a number is prime (like 2, 3, 5, 7, 11...)

// We need this to talk to the user
#include <stdio.h>

int main() {
    // Make boxes to store our number and a flag
    int num;
    int isPrime = 1;  // 1 means prime, 0 means not prime
    
    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // 1 is not a prime number
    if(num == 1) {
        printf("1 is not a prime number\n");
        return 0;
    }
    
    // Check if number is prime by trying to divide it
    // We only need to check up to num/2
    for(int i = 2; i <= num/2; i++) {
        // If number divides evenly by any number
        if(num % i == 0) {
            // It's not prime!
            isPrime = 0;
            break;  // No need to check more numbers
        }
    }
    
    // Tell the user if the number is prime or not
    if(isPrime == 1) {
        printf("%d is a prime number!\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}