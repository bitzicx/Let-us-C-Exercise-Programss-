// Write a program that converts all lowercase characters in a
// given string to its equivalent uppercase character

#include <stdio.h>

void convertToUppercase(char *str) {
    while (*str) { 
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A'); 
        }
        str++; 
    }
}

int main() {
    char str[100]; 

    printf("\nEnter a string under 100 character: ");
    fgets(str, sizeof(str), stdin); 

    convertToUppercase(str); 

    printf("Converted string: %s", str); 

    return 0;
}