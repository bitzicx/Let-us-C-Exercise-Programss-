// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// valid or not. The triangle is valid if the sum of two sides is
// greater than the largest of the three sides.
// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// isosceles, equilateral, scalene or right angled triangle.
// In a company, worker efficiency is determined on the basis of
// the time required for a worker to complete a particular job. If
// the time taken by the worker is between 2 – 3 hours, then the
// worker is said to be highly efficient. If the time required by
// the worker is between 3 – 4 hours, then the worker is ordered
// to improve speed. If the time taken is between 4 – 5 hours, the
// worker is given training to improve his speed, and if the time
// taken by the worker is more than 5 hours, then the worker has
// to leave the company. If the time taken by the worker is input
// through the keyboard, find the efficiency of the worker.

#include <stdio.h>

int main() {
    float timeTaken;

    printf("Enter the time taken by the worker to complete the job (in hours): ");
    scanf("%f", &timeTaken);

    if (timeTaken >= 2 && timeTaken < 3) {
        printf("The worker is highly efficient.\n");
    } else if (timeTaken >= 3 && timeTaken < 4) {
        printf("The worker needs to improve speed.\n");
    } else if (timeTaken >= 4 && timeTaken < 5) {
        printf("The worker needs training to improve speed.\n");
    } else if (timeTaken >= 5) {
        printf("The worker has to leave the company.\n");
    } else {
        printf("Invalid input. Please enter a valid time.\n");
    }

    return 0;
}