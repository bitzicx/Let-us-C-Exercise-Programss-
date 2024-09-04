// Write a program that interchanges the odd and even
// components of an array.
#include<stdio.h>

#define N 10
void interchange(int array[N]){
    for(int i = 0; i < N; i+=2){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }
}

int main(){
    int array[N];
    printf("Enter %d Elements: ",N);
    for(int i = 0; i< N; i++){
        scanf("%d", &array[i]);
    }
    interchange(array);
    printf("\nArray interchanged :");
    for(int i = 0; i< N; i++){
        printf("%d ", array[i]);
    }
}