// Check if the character is a special symbol using conditional operator


#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@')
        || (ch >= '[' && ch <= '`') || (ch >= '{' && ch <= '~'))
            ? printf("The entered character is a special symbol.\n")
            : printf("The entered character is not a special symbol.\n");

    return 0;
}