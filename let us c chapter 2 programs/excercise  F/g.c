// (j) The policy followed by a company to process customer orders
// is given by the following rules:
// (a) If a customer order is less than or equal to that in stock
// and has credit is OK, supply has requirement.
// (b) If has credit is not OK do not supply. Send him
// intimation.
// (c) If has credit is Ok but the item in stock is less than has
// order, supply what is in stock. Intimate to him data the
// balance will be shipped.
// Write a C program to implement the company policy.

#include <stdio.h>

int main() {
    int order, stock;
    char credit;

    printf("Enter the customer order quantity: ");
    scanf("%d", &order);

    printf("Enter the quantity in stock: ");
    scanf("%d", &stock);

    printf("Is the customer's credit OK? (Y/N): ");
    scanf(" %c", &credit);

    if (order <= stock && credit == 'Y') {
        printf("Supply the customer's requirement.\n");
    } else if (credit == 'N') {
        printf("Do not supply. Send an intimation.\n");
    } else if (credit == 'Y' && order > stock) {
        printf("Supply what is in stock. Intimate the customer that the balance will be shipped.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}