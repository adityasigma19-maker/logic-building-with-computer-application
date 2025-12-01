// Program to check whether a given character is an alphabet or not
#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Character is an alphabet\n");
    } else {
        printf("Character is not an alphabet\n");
    }

    return 0;
}
