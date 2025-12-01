#include <stdio.h>

int main(void) {
    int c;
    char ch;

    printf("Enter characters (type 'q' to quit)\n");
    while (1) {
        printf("Enter the character: ");
        fflush(stdout);

        if (scanf(" %c", &ch) != 1) {
            break; /* EOF or error */
        }
        if (ch == 'q' || ch == 'Q') {
            printf("Quitting.\n");
            break;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel\n", ch);
        } else {
            printf("%c is not a vowel\n", ch);
        }
    }

    return 0;
}