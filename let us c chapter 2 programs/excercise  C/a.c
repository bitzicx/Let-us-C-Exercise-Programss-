// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;

    if (profitOrLoss > 0)
    {
        printf("Seller made a profit of %.2f\n", profitOrLoss);
    }
    else if (profitOrLoss < 0)
    {
        printf("Seller incurred a loss of %.2f\n", -profitOrLoss);
    }
    else
    {
        printf("No profit or loss\n");
    }

    return 0;
}