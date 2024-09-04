// According to the Gregorian calendar, it was Monday on the
// date 01/01/1900. If any year is input through the keyboard
// write a program to find out what is the day on 1st January of
// this year.

#include <stdio.h>

int main() {
    int year, day;

    printf("Enter a year: ");
    scanf("%d", &year);

    day = (year - 1900) * 365 + (year - 1900 - 1) / 4 - (year - 1900 - 1) / 100 + (year - 1900 - 1) / 400;
    day = day % 7;

    if (day == 0) {
        printf("Monday\n");
    } else if (day == 1) {
        printf("Tuesday\n");
    } else if (day == 2) {
        printf("Wednesday\n");
    } else if (day == 3) {
        printf("Thursday\n");
    } else if (day == 4) {
        printf("Friday\n");
    } else if (day == 5) {
        printf("Saturday\n");
    } else {
        printf("Sunday\n");
    }

    return 0;
}