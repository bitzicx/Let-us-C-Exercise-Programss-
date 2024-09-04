// Create a structure to specify data on students given below:
// Roll number, Name, Department, Course, Year of joining
// Assume that there are not more than 450 students in the
// collage.
// (a) Write a function to print names of all students who joined
// in a particular year.
// (b) Write a function to print the data of a student whose roll
// number is given


#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450

// Structure to specify data on students
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Global array to store student records
struct Student students[MAX_STUDENTS];
int numStudents = 0;

// Function to print names of students who joined in a particular year
void printStudentsByYear(int year) {
    printf("Students who joined in year %d:\n", year);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student by roll number
void printStudentByRollNumber(int rollNum) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNum) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with Roll Number %d not found\n", rollNum);
}

int main() {
    // Sample data entry
    students[0] = {101, "Alice", "Computer Science", "B.Tech", 2020};
    students[1] = {102, "Bob", "Electrical Engineering", "B.E", 2021};
    numStudents = 2;

    // Example usage of the functions
    printStudentsByYear(2020);
    printf("\n");
    printStudentByRollNumber(102);

    return 0;
}