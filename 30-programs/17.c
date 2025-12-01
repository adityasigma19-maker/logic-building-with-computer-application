// Program to check if a number is even or odd
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    if(n%2==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}