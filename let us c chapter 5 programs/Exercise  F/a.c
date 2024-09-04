// Write a function which receives a float and an int from
// main( ), finds the product of these two and returns the product
// which is printed through main( ).

#include <stdio.h>

// ⬇ a function which receives a float and an int from main and return their product
float product(int a, float b)
{
    return a * b;
}

int main()
{
    int a;
    float b;
    printf("Enter Number One Integer: ");
    scanf("%d", & a);
    printf("Enter Second Number Float: ");
    scanf("%f", &b);

    printf("\nThe Product of %d and %f is: %.2f", a, b, product(a, b));

    return 0;
}