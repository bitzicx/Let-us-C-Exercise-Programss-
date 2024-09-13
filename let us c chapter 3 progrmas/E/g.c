// Write a program to print the multiplication table of the 
// number entered by the user. The table should get displayed in 
// the following form.


#include <stdio.h>

int main() {
    int number, i, product;

    printf("Enter a number to get its multiplication table: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {
        product = number * i;
        printf("%d x %2d = %2d\n", number, i, product);
    }

    return 0;
}