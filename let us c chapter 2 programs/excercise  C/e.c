// a five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not.

#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reversing the number
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    if (originalNumber == reversedNumber) {
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}