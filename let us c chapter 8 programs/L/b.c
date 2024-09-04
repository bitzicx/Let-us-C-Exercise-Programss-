//  Write a program to pick up the largest number from any 5 row
// by 5 column matrix
#include <stdio.h>
void print_largest_num(int array[][5]){
    int max = array[0][0];
    for(int i = 0;i < 5; i++){
        for(int j = 0; j<5; j++){
            if(array[i][j] > max)
            max = array[i][j];
        }
    }
    printf("\nThe largest element in array is %d \n\n",max);
}
int main(){
    int array[5][5] = {{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15}, 
                       {16,17,18,19,30},
                       {2,416,6,7,8}};
    
    print_largest_num(array);

}