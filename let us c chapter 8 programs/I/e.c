#include <stdio.h>
#include <conio.h> 
#include <windows.h>

int main() {
    char ch = 'A'; // Start with 'A'

    printf("Press any key to start the Dancing Dolls virus. Press any key again to stop.\n");

    // Wait for the user to press a key to start
    while (!kbhit()) {
        // Simulate actions on VDU memory by toggling the character 'A'
        
        // Convert uppercase to lowercase and vice versa
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // Convert uppercase to lowercase
        } else if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; // Convert lowercase to uppercase
        }

        // Display the modified character
        printf("Character on screen modified: %c\n", ch);

        // Add a small delay to make the output readable
        Sleep(400);
    }

    // Clear the keyboard buffer
    while (kbhit()) {
        getch();
    }

    printf("Dancing Dolls virus stopped.\n");

    return 0;
}