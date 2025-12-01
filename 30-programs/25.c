// program to find factorial of a number using recursion
#include <stdio.h>
int main() {
    int i,f;
    int fact(int);
     printf("Enter number:");
     scanf("%d", &i);
     f = fact(i);
     printf("Factorial is %d", f);
 }

 int fact(int n)
 {  int f = 1;
     if(n==1)
     return 1;

   f = n*fact(n-1);
   return f;
 }
