#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned short letter, previousLetter, nextLetter;

    bool lowercase, uppercase;
    printf("Enter a letter: ");
    letter = getchar();
    lowercase = letter >= 'a' && letter <= 'z';
    uppercase = letter >= 'A' && letter <= 'Z';

    previousLetter = letter - 1;
    nextLetter = letter + 1;

    if (!lowercase && !uppercase) {
        fprintf(stderr, "Invalid letter, fck you :)\n");
        return 1;
    }

    if (uppercase) {
        // With two possible conditions
        if (letter != 'A') {
            printf("%c <-- ", previousLetter);
        }
        printf("%c", letter);
        if (letter != 'Z') {
            printf(" --> %c", nextLetter);
        }
    } else {
        // With three possible conditions
        if (letter == 'a') {
            printf("%c --> %c", letter, nextLetter);
        } else if (letter == 'z') {
            printf("%c <-- %c", previousLetter, letter);
        } else {
            printf("%c <-- %c --> %c", previousLetter, letter, nextLetter);
        }
    }

    printf("\nAnd in alternative form: ");

    if (letter <= 0b01011010) { // 0b01011010 is the binary representation of ASCII 'Z' (90)
        printf("%c", letter + 040); // 040 is the octal representation of 32
    } else {
        printf("%c", letter - 0x20); // 0x20 is the hexadecimal representation of 32
    }

    return 0;
}