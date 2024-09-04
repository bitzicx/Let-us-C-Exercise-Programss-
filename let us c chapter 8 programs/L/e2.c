// (2) Write a program to multiply any two 3 x 3 matrices.


void multiply(int first[3][3], int second[3][3], int result[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = 0;
            for(int k = 0; k < 3; k++){
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main(){
        int first[3][3], second[3][3], result[3][3];
    printf("\nCAUTION\n===============================\nTHIS PROGRAM ONLY WORKS \nWITH A 3x3 MATRIX\n===============================\n\n");

    // 👇 getting first matrix
    printf("\nEnter first matrix\n");
    for(int i = 0; i< 3; i++){
        printf("Enter Row %d : ",i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d",&first[i][j]);
        }

    } 
    printf("\nEnter second matrix\n");
    // 👇 getting second matrix
    for(int i = 0; i< 3; i++){
        printf("Enter Row %d : ",i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d",&second[i][j]);
        }
    } 
    // 👇 calling add function
    multiply(first, second, result);  

    // 👇 printing result
    printf("\nThis is the Result of:\n");
        for(int i = 0; i< 3; i++){
            printf("Row %d|    ",i+1);
        for(int j = 0; j < 3; j++){
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    } 
return 0;
}