// sum of first and last digit in four digit number

#include <stdio.h>
int main()
{
    int n, first, last, sum;
    printf("Enter a four digit number: ");
    scanf("%d", &n);

    first = n / 1000;
    last = n % 10;
    sum = first + last;
    printf("Sum of first and last digit is: %d", sum);
}