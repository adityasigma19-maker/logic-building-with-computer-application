// Program to calculate the sum of two 3x3 matrices
#include <stdio.h>

 int main() {
    int a[3][3], b[3][3], sum[3][3];
        printf("Enter the first matrix elements:\n");
   for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            scanf("%d", &a[r][c]);
        }
    }
    printf("Enter the second matrix elements:\n");
     for (int r = 0; r < 3; r++) {
         for (int c = 0; c < 3; c++) {
             scanf("%d", &b[r][c]);
         }
     }
     for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            sum[r][c] = a[r][c] + b[r][c];
        }
    }  
 
     printf("Sum of the two matrices is:\n");
     for (int r = 0; r < 3; r++) {
         for (int c = 0; c < 3; c++) {
             printf("%d ", sum[r][c]);
         }
        printf("\n");
    }
}

