// (1) Write a program to add two 6 x 6 matrices.

#include<stdio.h>

void add_matrices(int first[6][6], int second[6][6], int result[6][6]){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

int main(){
    int first[6][6], second[6][6], result[6][6];
    printf("\nCAUTION\n===============================\nTHIS PROGRAM ONLY WORKS \nWITH A 6x6 MATRIX\n===============================\n\n");

    // 👇 getting first matrix
    printf("\nEnter first matrix\n");
    for(int i = 0; i< 6; i++){
        printf("Enter Row %d : ",i+1);
        for(int j = 0; j < 6; j++){
            scanf("%d",&first[i][j]);
        }

    } 

    printf("\nEnter second matrix\n");
    // 👇 getting second matrix
    for(int i = 0; i< 6; i++){
        printf("Enter Row %d : ",i+1);
        for(int j = 0; j < 6; j++){
            scanf("%d",&second[i][j]);
        }
    } 
    // 👇 calling add function
    add_matrices(first, second, result);  

    // 👇 printing result
    printf("\nThis is the Result of:\n");
        for(int i = 0; i< 6; i++){
            printf("Row %d|    ",i+1);
        for(int j = 0; j < 6; j++){
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    } 
return 0;
}