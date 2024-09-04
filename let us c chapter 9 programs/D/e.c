// Write a program that replaces two or more consecutive blanks
// in a string by a single blank. For example, if the input is
// Grim return to the planet of apes!!
// the output should be
// Grim return to the planet of apes!!
#include<stdio.h>
void replaceMultipleSpaces(char str[]) {
    int i, j;
    for (i = 0, j = 0; str[i]!='\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            continue; // 👈 Skip consecutive spaces
        }
        str[j++] = str[i];
    }
    str[j] = '\0'; // 👈 Null terminate the modified string
}

int main(){
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string),stdin);
    replaceMultipleSpaces(string);
    printf("\nSorted string: %s", string);
}