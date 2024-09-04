// sum of digits of a five digit number

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the 5 Digit Number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("The sum of digits is: %d\n", sum);

}