// Program to calculate the sums of the diagonals of a 3x3 matrix
#include <stdio.h>

int main() {
    int a[3][3];
    int s1 = 0, s2 = 0;

    printf("Enter the matrix elements:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &a[r][c]);
        }
    }

    for (int r = 0; r < 3; r++) {
        s1 += a[r][r];
    }
    printf("Sum of diagonal 1 is %d\n", s1);

    for (int r = 0, c = 2; r < 3; r++, c--) {
        s2 += a[r][c];
    }
    printf("Sum of diagonal 2 is %d\n", s2);

    return 0;
}