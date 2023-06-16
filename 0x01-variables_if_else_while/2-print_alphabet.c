#include <stdio.h>

int main(void) {
    char letter;

    // Print the alphabet using putchar
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}

