// A positive integer is entered through the keyboard, write a
// function to find the binary equivalent of this number using
// recursion.


#include<stdio.h>

int binary(int num){
    if(num == 0){
        return 0;
    }
    else{
        return (num % 2 + 10 * binary(num / 2));}
}
int main(){

    int num;
    printf("\nEnter a positive number: ");
    scanf("%d",&num);
    printf("Binary equivalent of %d is %d \n\n", num, binary(num));

    return 0;

}