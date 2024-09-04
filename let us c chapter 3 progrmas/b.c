// Write a program to find the factorial value of any number
// entered through the keyboard.

#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter a number whose Factorial is to be calculated: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of %d is: %d ", num, fact);

    return 0;
}