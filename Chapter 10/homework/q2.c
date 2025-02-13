// Replace the data in file of Q(a) with the number of vowels in the string.

#include <stdio.h>   // Include standard input/output library
#include <ctype.h>   // Include for tolower() function

// Function to check if a character is a vowel
int isVowel(char c) {
    c = tolower(c);  // Convert character to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    FILE *file;      // File pointer for reading
    char text[100];  // Array to store text from file
    int vowelCount = 0;  // Counter for vowels
    
    // Open file in read mode
    file = fopen("input.txt", "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Read file and count vowels
    while (fgets(text, 100, file) != NULL) {
        for(int i = 0; text[i] != '\0'; i++) {
            if(isVowel(text[i])) {
                vowelCount++;  // Increment counter if vowel found
            }
        }
    }
    
    fclose(file);  // Close file after reading
    
    // Reopen file in write mode to replace content
    file = fopen("input.txt", "w");
    
    // Write vowel count to file
    fprintf(file, "%d", vowelCount);
    
    fclose(file);  // Close file after writing
    
    printf("Number of vowels: %d\n", vowelCount);  // Display result
    return 0;
}