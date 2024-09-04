// Write a program to copy the contents of one array into another
// in the reverse order.

#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], i, j, n = 10;
    printf("Enter the elements of array 1:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Array 1 elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    i = 9, j = 0;
    while (i >= 0)
    {
        arr2[j] = arr1[i];
        i--;
        j++;
    }
    printf("Array 2 elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}