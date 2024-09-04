/* A positive integer is entered through the keyboard, write a
program to obtain the prime factors of the number. Modify the
function suitably to obtain the prime factors recursively.*/

#include<stdio.h>
#include <stdlib.h>

int prime(int n) // 👈 returns a prime number greater than n
{
    if(n == 1000){
        exit(0);
    }

    if (n == 1 || n == 0) { return prime(n+1); }

    int p = 1;

    for(int i = 2; i < n/2 + 1; i++){
        if(n%i == 0){
            p = 0;
            break;
        }
    }

    if (p) { return n; }
    else{
        return prime(n+1);
    }
}

int prime_factors(int num, int p)  // 👈 returns a prime factor
{
    if (num == 1) {
        printf("\b\b  ");
        return 0;
        }
    while(num%p != 0) {p = prime(++p);}

    if (num%p == 0){
        printf("%d x ",p);
        return prime_factors(num/p, p);
    }
}

int main(){
    int num;
    printf("\nEnter a positive number: ");
    scanf("%d",&num);
    printf("The prime Factors of %d is: ",num);
    prime_factors(num,2);
}