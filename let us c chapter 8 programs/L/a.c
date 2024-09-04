// How will you initialize a three-dimensional array
// threed[3][2][3]? How will you refer the first and last element
// in this array?

#include<stdio.h>
int main(){
    
    int threed[3][2][3];
    int i,j,k;
    // Initialize the array
    for(i=0;i<3;i++){   
        for(j=0;j<2;j++){    
            for(k=0;k<3;k++){
                threed[i][j][k] = (i+1)*100 + (j+1) * 10 + k+1;
            }
        }   
    }
        // Printing  the array
        for(i=0;i<3;i++){   
        for(j=0;j<2;j++){    
            for(k=0;k<3;k++){
                printf("%d ",threed[i][j][k]);
            }
            printf("\t");
        }   
        printf("\n");
    }

    // Refer the first element
    printf("first element %d",threed[0][0][0]);
     
    // Refer to the last element
    printf("\nlast element %d", threed[2][1][2]);

}