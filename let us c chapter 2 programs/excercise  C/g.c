// Write a program to check whether a triangle is valid or not,
// when the three angles of the triangle are entered through the
// keyboard. A triangle is valid if the sum of all the three angles
// is equal to 180 degrees.

#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is not a valid triangle.\n");
    }

    return 0;
}