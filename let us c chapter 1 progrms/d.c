// convert forenheight to centigrade celcius
#include <stdio.h>
int main()
{
    float fahr, celsius;
    printf("Enter Temperature in Farenheigt: ");
    scanf("%f", &fahr);
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("Temperature in Celcius: %f\n", celsius);
}