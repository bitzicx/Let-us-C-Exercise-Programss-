// Write a program to find if a square matrix is symmetric.

#include<stdio.h>

#define N 3

int check_symmetric(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main(){
    printf("\nEnter a %dx%d matrix\n",N,N);
    int matrix[N][N];
    for(int i=0;i<N;i++){
        printf("\nEnter Row %d |  ",i+1);
        for(int j=0;j<N;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int symmetric = check_symmetric(matrix);

    if(symmetric == 1){
        printf("This Matrix is symmetric\n");
    }
    else{
        printf("This Matrix is not symmetric\n");
    }
}