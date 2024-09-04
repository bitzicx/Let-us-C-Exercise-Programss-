// To calculate the Gross salary of Ramesh from basic salary

#include <stdio.h>

int main()
{
    float gross_salary, basic_salary, dearness_allowance, house_allowance;
    printf("Enter the basic salary : ");
    scanf("%f", &basic_salary);

    dearness_allowance = 40 * basic_salary / 100;
    house_allowance = 20 * basic_salary / 100;

    gross_salary = basic_salary - (dearness_allowance + house_allowance);

    printf("The gross salary of Ramesh is: %f", gross_salary);

    return 0;
}