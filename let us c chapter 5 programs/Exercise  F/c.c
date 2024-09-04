
// Write a function that receives marks received by a student in 3
// subjects and returns the average and percentage of these
// marks. Call this function from main( ) and print the results in
 // main( )

#include <stdio.h>

void calculate(int *marks, float *average, float *percentage) {
    *average = (*marks + *(marks + 1) + *(marks + 2)) / 3.0;

    // calculating percentage
    *percentage = (*average / 100) * 100;
}

int main() {
    int marks[3];
    float average, percentage;

    for (int i = 0; i < 3; i++) {
        printf("Enter Marks of Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    calculate(marks, &average, &percentage);

    printf("\nThe Average is: %.2f\nAnd the Percentage is: %.2f%% \n", average, percentage);

    return 0;
}