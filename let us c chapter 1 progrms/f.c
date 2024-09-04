// program to interchange the contents of C and D

#include <stdio.h>

int main()
{
    int C, D, temp;

    printf("Enter value of C: ");
    scanf("%d", &C);

    printf("Enter value of D: ");
    scanf("%d", &D);

    temp = C;
    C = D;
    D = temp;

    printf("After interchange:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}