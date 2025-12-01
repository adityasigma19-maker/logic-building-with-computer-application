// Program to check if a number is positive, negative or zero
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n>0) {
        printf("Number is positive");
    }
    else if(n<0) {
        printf("Number is negative");
    }
    else {
        printf("Number is zero");
    }
    
    return 0;
}