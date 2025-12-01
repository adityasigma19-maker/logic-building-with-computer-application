// Program to calculate the sum of the series x/1! + x^2/2! + x^3/3! + ... + x^n/n!
#include <stdio.h>

int fact(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int power(int x, int y)
{
    int i, p = 1;
    for(i = 1; i <= y; i++)
        p *= x;
    return p;
}

int main()
{
    int x, n, i, p, q;
    float sum = 0;

    printf("Enter value of x & n: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++)
    {
        q = fact(i);
        p = power(x, i);
        sum = sum + (float)p / q;
    }

    printf("Sum = %f\n", sum);
    return 0;
}