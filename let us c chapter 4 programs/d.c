// Write a program which to find the grace marks for a student
// using switch. The user should enter the class obtained by the
// student and the number of subjects he has failed in.
// − If the student gets first class and the number of subjects he
// failed in is greater than 3, then he does not get any grace.
// If the number of subjects he failed in is less than or equal
// to 3 then the grace is of 5 marks per subject.
// − If the student gets second class and the number of subjects
// he failed in is greater than 2, then he does not get any
// grace. If the number of subjects he failed in is less than or
// equal to 2 then the grace is of 4 marks per subject.
// − If the student gets third class and the number of subjects
// he failed in is greater than 1, then he does not get any
// grace. If the number of subjects he failed in is equal to 1
// then the grace is of 5 marks per subject

#include <stdio.h>

int main() {
    char studentClass;
    int failedSubjects, graceMarks = 0;

    printf("Enter the class obtained by the student (A, B, or C): ");
    scanf(" %c", &studentClass);

    printf("Enter the number of subjects failed: ");
    scanf("%d", &failedSubjects);

    switch (studentClass) {
        case 'A':
            if (failedSubjects <= 3) {
                graceMarks = failedSubjects * 5;
            }
            break;
        case 'B':
            if (failedSubjects <= 2) {
                graceMarks = failedSubjects * 4;
            }
            break;
        case 'C':
            if (failedSubjects == 1) {
                graceMarks = 5;
            }
            break;
        default:
            printf("Invalid class entered. Please enter A, B, or C.\n");
            return 1;
    }

    printf("Grace marks: %d\n", graceMarks);

    return 0;
}