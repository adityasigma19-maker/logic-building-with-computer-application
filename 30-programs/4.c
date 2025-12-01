// Program to find Armstrong numbers between 100 and 999
#include <stdio.h>

int main() 
{
    int n = 100, original, remainder, result;

    while (n <= 999)
    {
        original = n;
        result = 0;

        while (original > 0) {
            remainder = original % 10;
            result += remainder * remainder * remainder;
            original /= 10;
        }

        if (result == n)
            printf("%d ", n);

        n++;
    }

    return 0;
}