// A university has the following rules for a student to qualify
// for a degree with A as the main subject and B as the
// subsidiary subject:
// (a) He should get 55 percent or more in A and 45 percent or
// more in B.
// (b) If he gets than 55 percent in A he should get 55 percent or
// more in B. However, he should get at least 45 percent in
// A.
// (c) If he gets less than 45 percent in B and 65 percent or more
// in A he is allowed to reappear in an examination in B to
// qualify.
// (d) In all other cases he is declared to have failed.
// Write a program to receive marks in A and B and Output
// whether the student has passed, failed or is allowed to
// reappear in B.92 


#include <stdio.h>

int main() {
    float marksA, marksB;

    printf("Enter the marks obtained in subject A: ");
    scanf("%f", &marksA);

    printf("Enter the marks obtained in subject B: ");
    scanf("%f", &marksB);

    if (marksA >= 55 && marksB >= 45) {
        printf("Congratulations! The student has passed.\n");
    } else if (marksA >= 55 && marksB >= 55) {
        printf("Congratulations! The student has passed.\n");
    } else if (marksA >= 65 && marksB < 45) {
        printf("The student is allowed to reappear in the examination for subject B.\n");
    } else {
        printf("Sorry, the student has failed.\n");
    }

    return 0;
}