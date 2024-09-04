// Write a program to calculate overtime pay of 10 employees.
// Overtime is paid at the rate of Rs. 12.00 per hour for every
// hour worked above 40 hours. Assume that employees do not
// work for fractional part of an hour

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // ⬇ used *int* data type because it is in the question that employees can't work for fractional part of an hour 
        int working_hours, extra_hours;
    
        printf("------------------------------------------------------\n\n"); // ------>>> for style purpose

        printf("Enter the hours worked by employee %d: ", i);
        scanf("%d", &working_hours);

        extra_hours = working_hours - 40; 

        // ⬇ checking if employee done work more than 40 hours 
        if (extra_hours > 0)
        {
            printf("The overtime pay of Employee %d is: %d\n", i, extra_hours * 12);
        }
        else
        {
            printf("Employee %d is not eligibal for overpay\n", i);
        }
    }

    return 0;
}