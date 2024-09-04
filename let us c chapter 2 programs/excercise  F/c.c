// An Insurance company follows following rules to calculate
// premium.
// (1) If a person’s health is excellent and the person is between
// 25 and 35 years of age and lives in a city and is a male
// then the premium is Rs. 4 per thousand and his policy
// amount cannot exceed Rs. 2 lakhs.
// (2) If a person satisfies all the above conditions except that
// the sex is female then the premium is Rs. 3 per thousand
// and her policy amount cannot exceed Rs. 1 lakh.
// (3) If a person’s health is poor and the person is between 25
// and 35 years of age and lives in a village and is a malethen the premium is Rs. 6 per thousand and his policy
// cannot exceed Rs. 10,000.
// (4) In all other cases the person is not insured.
// Write a program to output whether the person should be
// insured or not, his/her premium rate and maximum amount
// for which he/she can be insured.


#include <stdio.h>

int main() {
    char health, gender, location;
    int age;
    float premium, maxAmount;

    printf("Enter the person's health status (E for excellent, P for poor): ");
    scanf(" %c", &health);

    printf("Enter the person's gender (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter the person's age: ");
    scanf("%d", &age);

    printf("Enter the person's location (C for city, V for village): ");
    scanf(" %c", &location);

    if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && gender == 'M') {
        premium = 4.0;
        maxAmount = 200000.0;
        printf("The person should be insured.\n");
        printf("Premium rate: Rs. %.2f per thousand\n", premium);
        printf("Maximum insured amount: Rs. %.2f\n", maxAmount);
    } else if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && gender == 'F') {
        premium = 3.0;
        maxAmount = 100000.0;
        printf("The person should be insured.\n");
        printf("Premium rate: Rs. %.2f per thousand\n", premium);
        printf("Maximum insured amount: Rs. %.2f\n", maxAmount);
    } else if (health == 'P' && age >= 25 && age <= 35 && location == 'V' && gender == 'M') {
        premium = 6.0;
        maxAmount = 10000.0;
        printf("The person should be insured.\n");
        printf("Premium rate: Rs. %.2f per thousand\n", premium);
        printf("Maximum insured amount: Rs. %.2f\n", maxAmount);
    } else {
        printf("The person should not be insured.\n");
    }

    return 0;
}