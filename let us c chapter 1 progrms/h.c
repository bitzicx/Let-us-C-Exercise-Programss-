// # program to reverse a five digit number

#include <stdio.h>

int main() {
    int number, reversedNumber = 0;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}