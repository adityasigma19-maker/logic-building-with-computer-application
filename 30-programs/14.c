// Program to calculate the sum of two integers using a function
#include <stdio.h>
int sum(int x,int y) 
{ int s;
s = x+y;
return s;
}
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    c = sum(a,b);
    printf("%d", c);
}

