// Q1: Make a system that can store information of all students, teachers & staff of your college in the form of the structures.

// Include necessary header files
#include <stdio.h>
#include <string.h>

// Define structure for Student information
struct Student {
    int roll_number;           // Stores student's roll number
    char name[50];            // Stores student's name
    int age;                  // Stores student's age
    char department[50];      // Stores student's department
};

// Define structure for Teacher information
struct Teacher {
    int id;                   // Stores teacher's ID
    char name[50];            // Stores teacher's name
    char subject[50];         // Stores subject taught by teacher
    int experience;           // Stores years of experience
};

// Define structure for Staff information
struct Staff {
    int id;                   // Stores staff ID
    char name[50];            // Stores staff member's name
    char role[50];           // Stores staff member's role (e.g., clerk, librarian)
};

int main() {
    // Declare arrays of structures to store multiple entries
    struct Student students[50];    // Can store up to 50 students
    struct Teacher teachers[20];    // Can store up to 20 teachers
    struct Staff staff[30];         // Can store up to 30 staff members
    
    // Example: Adding one student
    students[0].roll_number = 101;
    strcpy(students[0].name, "John Doe");
    students[0].age = 20;
    strcpy(students[0].department, "Computer Science");
    
    // Example: Adding one teacher
    teachers[0].id = 501;
    strcpy(teachers[0].name, "Dr. Smith");
    strcpy(teachers[0].subject, "Mathematics");
    teachers[0].experience = 10;
    
    // Example: Adding one staff member
    staff[0].id = 701;
    strcpy(staff[0].name, "Jane Wilson");
    strcpy(staff[0].role, "Librarian");
    
    // Print example entries
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", students[0].roll_number);
    printf("Name: %s\n", students[0].name);
    printf("Age: %d\n", students[0].age);
    printf("Department: %s\n", students[0].department);
    
    printf("\nTeacher Information:\n");
    printf("ID: %d\n", teachers[0].id);
    printf("Name: %s\n", teachers[0].name);
    printf("Subject: %s\n", teachers[0].subject);
    printf("Experience: %d years\n", teachers[0].experience);
    
    printf("\nStaff Information:\n");
    printf("ID: %d\n", staff[0].id);
    printf("Name: %s\n", staff[0].name);
    printf("Role: %s\n", staff[0].role);
    
    return 0;
}