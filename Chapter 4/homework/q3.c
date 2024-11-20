// Question 3: Write a program to print prime numbers in a range.

// This program finds all prime numbers between two numbers

// We need this to talk to the user
#include <stdio.h>

int main()
{
    // Make boxes for our start and end numbers
    int start, end;

    // Ask user for the starting number
    printf("Enter starting number: ");
    scanf("%d", &start);

    // Ask user for the ending number
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Look at each number in the range
    for (int num = start; num <= end; num++)
    {
        // Skip 1 as it's not prime
        if (num == 1)
            continue;

        // Assume the number is prime at first
        int isPrime = 1;

        // Check if the current number is prime
        for (int i = 2; i <= num / 2; i++)
        {
            // If number divides evenly, it's not prime
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        // If we found a prime number, print it
        if (isPrime == 1)
        {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}