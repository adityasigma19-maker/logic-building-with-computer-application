// Program to print first 20 Fibonacci numbers
#include <stdio.h>

int main() {
    int i,a = 0, b = 1, c;
    printf("%d \n%d", a , b);
    for(i=3; i<=20; i++)
    {
    c = a+b;
        printf("\n%d", c);
        a=b;
        b=c;
    }

    return 0;
}