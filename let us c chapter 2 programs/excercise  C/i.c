// Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("The area of the rectangle is greater than its perimeter.\n");
    } else if (area < perimeter) {
        printf("The area of the rectangle is less than its perimeter.\n");
    } else {
        printf("The area and perimeter of the rectangle are equal.\n");
    }

    return 0;
}