// write a program to print a new number by adding one to each of its digits

#include<stdio.h>

int main(){
    int n, incremented_n = 0, multiplier = 1;
    printf("Enter a number: ");
    scanf("%d",&n);


    while(n > 0) {
        int digit = n % 10;
        incremented_n = incremented_n + (digit + 1) * multiplier;
        multiplier *= 10;
        n /= 10;
    }

    printf("The new number is: %d", incremented_n);
    return 0;
}