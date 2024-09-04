// Write a program to find the range of a set of numbers. Range
// is the difference between the smallest and biggest number in
// the list

#include <stdio.h>
int main()
{
    int n, min, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        if (i == 0)
        {
            min = a[i];
            max = a[i];
        }
        else
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            else if (a[i] < min)
            {
                min = a[i];
            }
        }

        
    }
    
printf("The range is: %d", max - min);
}