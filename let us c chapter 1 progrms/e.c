// program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

#include <stdio.h>
int main()
{
    printf("**************************************************************\n");

    int l, b, r;
    float area_peri, area_circum, peri_circum;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("**************************************************************\n");

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);
    
    printf("**************************************************************\n");
    
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

printf("**************************************************************\n");

    area_peri = l * b;
    area_circum = 3.14 * r * r;
    peri_circum = 2 * 3.14 * r;
    printf("The area of the rectangle is: %d\n", (int)area_peri);
    printf("The perimeter of the rectangle is: %d\n", 2 * (l + b));
    printf("The area of the circle is: %f\n", area_circum);
    printf("The circumference of the circle is: %f\n", peri_circum);

    return 0;
}