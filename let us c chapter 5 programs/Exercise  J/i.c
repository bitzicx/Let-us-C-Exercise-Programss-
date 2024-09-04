//  If the lengths of the sides of a triangle are denoted by a, b,
// and c, then area of triangle is given by
// area = S(S − a)(S − b)(S − c)
// where, S = ( a + b + c ) / 2

#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float S, area;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    S = (a + b + c) / 2.0;
    area = S * (S - a) * (S - b) * (S -c);
    area = pow(area, 0.5);
    printf("\nThe area of the triangle is: %.2f", area);
}