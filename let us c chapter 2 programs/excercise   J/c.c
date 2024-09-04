// Check if the year is a leap year using conditional operator

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        ? printf("The entered year is a leap year.\n")
        : printf("The entered year is not a leap year.\n");

    return 0;
}