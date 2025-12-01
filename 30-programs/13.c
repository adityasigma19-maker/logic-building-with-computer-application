// Program to find Armstrong numbers between 100 and 999
#include <stdio.h>

int main() {
    int n,a,b,c,d;
    for(int n=100; n<=999; n++) 
    {
        a=n%10;
        d=n/10;
        b=d%10;
        c=d/10;
        if(a*a*a+b*b*b+c*c*c==n) 
            printf("\n%d", n);
        
    }

    return 0;
}