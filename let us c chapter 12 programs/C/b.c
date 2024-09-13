// Write a program to find the size of a text file without
// traversing it character by character

#include <stdio.h>

long getFileSize(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Unable to open file");
        return -1;
    }

    fseek(file, 0, SEEK_END); // Move to the end of the file
    long size = ftell(file);   // Get the current position (size of the file)
    fclose(file);
    return size;
}

int main() {
    long size = getFileSize("sample.txt");
    if (size != -1) {
        printf("Size of the file: %ld bytes\n", size);
    }
    return 0;
}