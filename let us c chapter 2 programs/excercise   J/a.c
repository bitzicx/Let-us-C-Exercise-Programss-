// Check if the character is a lowercase alphabet using conditional operator


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') ? printf("The entered character is a lowercase alphabet.\n")
                             : printf("The entered character is not a lowercase alphabet.\n");

    return 0;
}