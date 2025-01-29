// Q1: Write a program to convert all lowercase vowels to uppercase in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // String array to store input
    int i;

    // Get input string from user
    printf("Enter a string: ");
    gets(str);  // Read string input

    // Loop through each character in string
    for(i = 0; str[i] != '\0'; i++) {
        // Check for lowercase vowels and convert to uppercase
        switch(str[i]) {
            case 'a': str[i] = 'A'; break;
            case 'e': str[i] = 'E'; break;
            case 'i': str[i] = 'I'; break;
            case 'o': str[i] = 'O'; break;
            case 'u': str[i] = 'U'; break;
        }
    }

    // Print modified string
    printf("String after converting vowels: %s\n", str);
    
    return 0;
}