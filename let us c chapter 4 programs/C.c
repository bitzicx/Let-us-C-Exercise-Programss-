// Write a menu driven program which has following options: 
 
//   1.  Factorial of a number. 
//  2.  Prime or not 
//  3.  Odd or even 
//  4.  Exit


#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() {
    int choice, num;

    do {
        printf("\nMenu:");
        printf("\n1. Factorial of a number");
        printf("\n2. Prime or not");
        printf("\n3. Odd or even");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is: %d\n", num, factorial(num));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("%d is even.\n", num);
                } else {
                    printf("%d is odd.\n", num);
                }
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}