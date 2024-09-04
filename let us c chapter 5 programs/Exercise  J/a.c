// A 5-digit positive integer is entered through the keyboard,
// write a function to calculate sum of digits of the 5-digit
// number:
// (1) Without using recursion
// (2) Using recursion

#include <stdio.h>

int sum_using_recursion(int n)        // 👈 sum of digits using recursion function 
{

    if (n == 0)
    {
        return 0;
    }

    return n % 10 + sum_using_recursion(n / 10);
}

int sum_without_recursion(int n)      // 👈 sum of digits without recursion function 
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nThe sum of Digits of %d is: %d", n, sum_using_recursion(n));
    printf("\nThe sum of Digits of %d is: %d", n, sum_without_recursion(n));
}