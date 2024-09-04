// Write a program to obtain transpose of a 4 x 4 matrix. The
// transpose of a matrix is obtained by exchanging the elements
// of each row with the elements of the corresponding column.


#include<stdio.h>

void print_transpose(int matrix[][4]){

    printf("The Transpose is \n");
    
    // printing transopose of matrix 
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matrix[j][i]);
            }
        printf("\n");
    }
}

int main(){

    int matrix[4][4]; //declarig 4x4 matrix
    for(int i = 0; i < 4; i++){            
        printf("Enter Row %d: ",i+1);
        for(int j = 0; j < 4; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    print_transpose(matrix);   //  👈 calling print_transpose function
}