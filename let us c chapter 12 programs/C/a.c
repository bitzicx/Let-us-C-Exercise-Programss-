// Write a program to read a file and display contents with its
// line numbers.


#include <stdio.h>

void displayFileWithLineNumbers(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    char line[256];
    int lineNumber = 1;

    while (fgets(line, sizeof(line), file)) {
        printf("%d: %s", lineNumber++, line);
    }

    fclose(file);
}

int main() {
    displayFileWithLineNumbers("sample.txt");
    return 0;
}