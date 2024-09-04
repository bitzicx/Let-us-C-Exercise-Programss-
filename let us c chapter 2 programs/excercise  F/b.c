// Any character is entered through the keyboard, write a
// program to determine whether the character entered is a
// capital letter, a small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for
// various characters.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character entered is a capital letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character entered is a small case letter.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character entered is a digit.\n");
    }
    else
    {
        printf("The character entered is a special symbol.\n");
    }

    return 0;
}