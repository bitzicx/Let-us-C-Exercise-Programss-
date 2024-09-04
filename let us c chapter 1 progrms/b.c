// To convert the distance of two cities to meter feet inches and centimeter

#include <stdio.h>

int main()
{
    int distance;
    printf("Enter the distance between two cities in km: ");
    scanf("%d", &distance);

    printf("The distance between two cities in Kilometer is %d km\n", distance);

    printf("The distance between two cities in meters is: %dm\n", distance * 1000);
    printf("The distance between two cities in Feet is: %fft\n", distance * 3280.84);
    printf("The distance between two cities in inches is: %fin\n", distance * 39370.1);
    printf("The distance between two cities in centimeters is: %dcm\n", distance * 100000);

return 0;
}