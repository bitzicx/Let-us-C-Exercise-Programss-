// To calculate aggregate and percentage from five subjects

#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total, percentage;

    printf("Enter the marks of five subject\n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;
    if (total < 500)
    {
        printf("Total marks: %d\n", total);
        printf("Percentage: %d%%", percentage);
    }
    else
    {
        printf("Invalid Marks");
    }
    
return 0;
}