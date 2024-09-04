// Write a recursive function to obtain the first 25 numbers of a
// Fibonacci sequence. In a Fibonacci sequence the sum of two
// successive terms gives the third term. Following are the first
// few terms of the Fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89..

#include <stdio.h>
#include <stdlib.h>

int generate_fib(int n) // 👈 generate fibonacci up to n without recursion
{
    if (n == 1 || n == 2)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d", i);
        }
    }
    
    int a, b, temp;
    a = 1;
    b = 1;
    if (n > 2)
        n -= 2;
    {
        printf("1 1 ");
        while (n != 0)
        {
            n--;
            printf("%d ", a + b);
            temp = a;
            a = b;
            b += temp;
        }
    }
    return 0;
}

int recorsive_generate_fib(int count, int n, int a, int b, int temp) // 👈 generate Fibonacci up to n using recursion
{

    if (count > n)      // 👈 stop when we reach the 25
    {                     
        return 0;
    }

    if (count == 1)
    {
        printf("1 ");
    }
    if (count == 2)
    {
        printf("1 ");
    }

    if (count > 2)
    {
        printf("%d ", a + b);
        temp = a;
        a = b;
        b += temp;
    }

    count++;

    recorsive_generate_fib(count, n, a, b, temp); // 👈 recursive call
}

int main()
{

    int n = 25; // n is set to 25 according to question

    printf("\nThe First %d Fibonacci numbers are: \n", n);

    printf("User Simple loop Function: ");
    generate_fib(n);
    printf("\n----\n");
    printf("Used recursive Function: ");
    recorsive_generate_fib(0, n, 1, 1, 0);
    printf("\n\n");

    return 0;
}