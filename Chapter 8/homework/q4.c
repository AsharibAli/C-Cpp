// Q4: Write a program to convert lowercase letter with uppercase & vice versa in a string.

#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char str[100];
    int i;

    // Get input string
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Convert each character
    for(i = 0; str[i] != '\0'; i++) {
        // If uppercase, convert to lowercase
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If lowercase, convert to uppercase
        else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Print result
    printf("Converted string: %s", str);

    return 0;
}