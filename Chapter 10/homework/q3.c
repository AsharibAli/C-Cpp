// Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file.

#include <stdio.h> // Include standard input/output library

// Define a structure to hold student information
struct Student {
    char name[50];   // Student's name
    int marks;       // Student's marks
    float cgpa;      // Student's CGPA
    char course[50]; // Student's course
};

int main() {
    // Initialize an array with data for 5 students
    struct Student students[5] = {
        {"Alice",   90, 8.50, "Mathematics"},
        {"Bob",     85, 8.20, "Computer Science"},
        {"Charlie", 92, 9.00, "Physics"},
        {"David",   78, 7.50, "Chemistry"},
        {"Eve",     88, 8.80, "Biology"}
    };

    // Open a file called "students.txt" in write mode to store the table
    FILE *file = fopen("students.txt", "w");
    
    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n"); // Print error message if file cannot be opened
        return 1; // Return an error code
    }
    
    // Write the table header using format specifiers for alignment
    fprintf(file, "%-15s %-10s %-10s %-15s\n", "Name", "Marks", "CGPA", "Course");
    // Write a separator line to visually separate the header from the data
    fprintf(file, "-----------------------------------------------------\n");
    
    // Loop through each student and write their data into the file in a formatted row
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%-15s %-10d %-10.2f %-15s\n", 
                students[i].name,        // Name (left aligned within 15 characters)
                students[i].marks,       // Marks (left aligned within 10 characters)
                students[i].cgpa,        // CGPA (left aligned within 10 characters with 2 decimal places)
                students[i].course);     // Course (left aligned within 15 characters)
    }
    
    // Close the file after writing
    fclose(file);
    
    // Inform the user that the table has been successfully written to the file
    printf("Student data table has been written to students.txt\n");
    
    return 0; // End of program
}