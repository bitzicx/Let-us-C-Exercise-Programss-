// Write a program that converts a string like "124" to an integer
// 124.

#include <stdio.h>
int stringToInt(char *str) {
    int result = 0;
    int i = 0;

    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int main() {
    char str[] = "124";
    int num = stringToInt(str);

    printf("String \"%s\" converted to integer: %d\n", str, num);

    return 0;
}