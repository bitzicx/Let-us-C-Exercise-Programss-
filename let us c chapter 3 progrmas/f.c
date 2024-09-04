// Write a program to enter the numbers till the user wants and
// at the end it should display the count of positive, negative and
// zeros entered.

#include <stdio.h>
int main()
{
    int n, count0 = 0, count_neg = 0, count_pos = 0;
    int temp;
    printf("-------------------------------------------------------------------------------------");
    printf("\nEnter the number of elements you want to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &temp);
        if (temp > 0)
        {
            count_pos++;
        }
        else if (temp < 0)
        {
            count_neg++;
        }
        else
        {
            count0++;
        }
    }

    printf("-------------------------------------------------------------------------------------");
    printf("\nPositive Numbers: %d\nNegative Numbers: %d\nZeros: %d", count_pos, count_neg, count0);


    return 0;
}