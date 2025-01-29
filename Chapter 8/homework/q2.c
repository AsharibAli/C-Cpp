// Q2: Write a program to print the Highest frquency character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char str[100], result;
    int i, freq[256] = {0};  // Initialize frequency array with zeros
    int maxFreq = 0;

    // Get input from user
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;  // Increment count for current character
    }

    // Find character with highest frequency
    for(i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    // Print result
    printf("Character with highest frequency: %c\n", result);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}