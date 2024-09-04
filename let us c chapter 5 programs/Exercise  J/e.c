//  Write a recursive function to obtain the running sum of first
// 25 natural numbers

#include <stdio.h>

int sum(unsigned n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int main()
{
    unsigned n = 25; // n is set to 25 as said in the question

    printf("The sum of First %u numbers is: %u", n, sum(n));
    
    return 0;
}