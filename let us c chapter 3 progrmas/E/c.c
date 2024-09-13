// Write a program to add first seven terms of the following 
// series using a for loop: 
// 1 /1! + 2/2! + 3/3! ……

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    float total_sum = 0.0;

    for (n = 1; n <= 7; n++) {
        total_sum += ((float)n) / factorial(n);
    }

    printf("Sum of the first seven terms of the series: %f\n", total_sum);

    return 0;
}