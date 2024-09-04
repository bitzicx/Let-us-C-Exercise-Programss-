// Find the absolute value of a number entered through the
// keyboard.
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int absoluteValue = (number < 0) ? -number : number;

    printf("The absolute value of %d is %d\n", number, absoluteValue);

    return 0;
}