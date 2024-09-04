/*Write a program to print out all Armstrong numbers between
1 and 500. If sum of cubes of each digit of the number is
equal to the number itself, then the number is called an
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5
* 5 ) + ( 3 * 3 * 3 )*/




#include <stdio.h>


int len_of_num(int n){
    int len = 0;
    while(n != 0){
        n /= 10;
        len++;
    }
    return len;
}

int main(){
    int n, sum, temp, rem, count = 0;
    n = 100;
    printf("%d",len_of_num(n));
}