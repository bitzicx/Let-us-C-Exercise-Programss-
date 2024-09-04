#include<stdio.h>

int test(int num){
     return 0;
}

int main() {
   int a = 1;
   a = 10*test(1) + 1;
   printf("%d",a);

}