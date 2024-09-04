// Given three points (x1, y1), (x2, y2) and (x3, y3), write a
// program to check if all the three points fall on one straight line.

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Take input from the user
    printf("Enter point 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter point 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter point 3 (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    //slopes
    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    // Check if the slopes are equal
    if (slope1 == slope2) {
        printf("All three points fall on the same straight line.\n");
    } else {
        printf("The three points do not fall on the same straight line.\n");
    }

    return 0;
}