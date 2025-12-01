// Program to print a pattern of numbers in decreasing order
#include <stdio.h>
int main() {
    for(int i=9; i>=1; i--) {
        for(int j=9; j<=i; j--)
    printf("%d", i);
    printf("\n");
        
    }

    
    return 0;
}