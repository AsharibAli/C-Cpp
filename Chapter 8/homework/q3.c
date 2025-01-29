// Q3: Write a program to remove blank spaces in the string

#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char str[100];
    int i, j = 0;

    // Get input from user
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove spaces by shifting characters
    for(i = 0; str[i] != '\0'; i++) {
        // If current character is not a space
        if(str[i] != ' ' && str[i] != '\n') {
            str[j] = str[i];  // Copy to position j
            j++;              // Increment position counter
        }
    }
    str[j] = '\0';  // Add string terminator

    // Print result
    printf("String after removing spaces: %s\n", str);

    return 0;
}