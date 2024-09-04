// Write a program which performs the following tasks:
// − initialize an integer array of 10 elements in main( )
// − pass the entire array to a function modify( )
// − in modify( ) multiply each element of array by 3
// − return the control to main( ) and print the new array
// elements in main( )

#include<stdio.h>

void modify(int arr[], int size){
    for(int i = 0; i <10; i++ ){
        arr[i] = arr[i] * 3;
    }
}

int main(){
    int size = 10;
    int arr[10] = {1, 2, 3, 4,5,6,7,8,9,10};
    modify(arr,size);

    for(int i = 0; i<10; i++){
        printf("%d ",arr[i]);
    }
}

