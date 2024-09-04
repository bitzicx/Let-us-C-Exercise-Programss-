// Two numbers are entered through the keyboard. Write a
// program to find the value of one number raised to the power
// of another

#include <stdio.h>
int main()
{
    int base, exponent, base2;
    printf("Enter the Base and Exponent seprated by Space: ");
    scanf("%d %d", &base, &exponent);
    base2 = base;
    for (int i = exponent; i > 1; i--)
    {
        base2 *= base;
    }
    printf("%d raised to the power %d is %d", base, exponent, base2);

    return 0;
}