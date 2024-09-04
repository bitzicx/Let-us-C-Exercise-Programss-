// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// three.
#include <stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge, youngestAge;

    printf("Enter Ram's age: ");
    scanf("%d", &ramAge);
    printf("Enter Shyam's age: ");
    scanf("%d", &shyamAge);
    printf("Enter Ajay's age: ");
    scanf("%d", &ajayAge);

    youngestAge = (ramAge < shyamAge) ? (ramAge < ajayAge ? ramAge : ajayAge) : (shyamAge < ajayAge ? shyamAge : ajayAge);

    if (youngestAge == ramAge) {
        printf("Ram is the youngest with age %d.\n", ramAge);
    } else if (youngestAge == shyamAge) {
        printf("Shyam is the youngest with age %d.\n", shyamAge);
    } else {
        printf("Ajay is the youngest with age %d.\n", ajayAge);
    }

    return 0;
}