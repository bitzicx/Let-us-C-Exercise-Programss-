#include <stdio.h>

void appendFile(const char *sourceFile, const char *targetFile) {
    FILE *src = fopen(sourceFile, "r");
    FILE *dest = fopen(targetFile, "a");
    if (!src || !dest) {
        perror("Unable to open file");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), src)) {
        fputs(line, dest);
    }

    fclose(src);
    fclose(dest);
}

int main() {
    appendFile("source.txt", "target.txt");
    return 0;
}