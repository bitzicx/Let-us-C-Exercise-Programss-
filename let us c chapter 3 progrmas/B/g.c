// Write a program to find the octal equivalent of the entered
// number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nOctal equivalent of %d is %o", num, num);
}