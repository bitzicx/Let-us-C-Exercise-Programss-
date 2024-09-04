// Write a function that receives 5 integers and returns the sum,
// average and standard deviation of these numbers. Call this
// function from main( ) and print the results in main( ).

#include <stdio.h>

void calculate(int *num_list, int *sum, float *average, float *sd)
{
    *sum = 0;
    *average = 0;
    *sd = 0;

    // ⬇ calculating sum
    for (int i = 0; i < 5; i++)
    {
        *sum += num_list[i];
    }

    // ⬇ calculating average
    *average = (*sum) / 5.0;

    // calculating standard deviation
    float sum_of_squares = 0;
    for (int i = 0; i < 5; i++)
    {
        sum_of_squares += (num_list[i] - *average) * (num_list[i] - *average);
    }

    *sd = sum_of_squares / 4;
}

int main()
{
    int num_list[5], sum;
    float average, standard_deviation;

    printf("\nEnter the Numbers One by one: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Number %d: ", i + 1);
        scanf("%d", &num_list[i]);
    }

    calculate(num_list, &sum, &average, &standard_deviation);

    printf("\nThe Sum is: %d\n\The Average is: %.3f\nThe standard Deviation is: %.3f", sum, average, standard_deviation);
}
