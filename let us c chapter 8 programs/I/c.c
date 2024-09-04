// Find the smallest number in an array using pointers

#include<stdio.h>

int main(){
    int arr[] = {5, 2, 8, 12, 3};
    int *ptr = arr;
    int min = *ptr;
    while(++ptr < arr + 5){
        if(*ptr < min)
        min = *ptr;
        }
        printf("The smallest number in the given array is: %d", min);
        return 0;
}