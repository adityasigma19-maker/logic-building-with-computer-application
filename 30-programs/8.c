// Program to create a simple calculator
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char ch;
    int a , b , r;
    printf("Enter simple eq:");
    scanf(" %d %c %d", &a,&ch,&b);
    switch(ch)
    
    {
        case '+':
        r = a+b;
        break;
        case '*':
        r = a*b;
        break;
        case '-' :
        r = a-b;
        break;
        case '/' :
        r = a/b;
        break;
        default :
        printf("Invalid Equation");
        exit(1);
    }
    printf("Result =%d", r);
    return 0;
}
    
    
    
    


