// program to find the total number of illiterate men and women if the population of the town is 80,000.

#include <stdio.h>

int main() {
    int population = 80000;
    float menPercentage = 52.0;
    float literacyPercentage = 48.0;
    float literateMenPercentage = 35.0;

    float womenPercentage = 100.0 - menPercentage;
    float illiterateMenPercentage = 100.0 - literateMenPercentage;
    float illiterateWomenPercentage = literacyPercentage - literateMenPercentage;

    int totalMen = (int)(population * menPercentage / 100);
    int totalWomen = (int)(population * womenPercentage / 100);
    int totalLiterateMen = (int)(population * literateMenPercentage / 100);
    int totalLiterateWomen = (int)(population * illiterateWomenPercentage / 100);

    int totalIlliterateMen = totalMen - totalLiterateMen;
    int totalIlliterateWomen = totalWomen - totalLiterateWomen;

    printf("Total Illiterate Men: %d\n", totalIlliterateMen);
    printf("Total Illiterate Women: %d\n", totalIlliterateWomen);

    return 0;
}