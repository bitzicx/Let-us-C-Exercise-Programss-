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

int main() {
    // Sample data entry
    students[0] = {2621, "Zeerak", "Computer Science", "Programming", 2023};
    students[1] = {2634, "Abdullah khan", "Electrical Engineering", "linear Algebra", 2022};
    numStudents = 2;

    return 0;
}