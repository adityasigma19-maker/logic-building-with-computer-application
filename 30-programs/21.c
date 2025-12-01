// Program to find all 4-digit perfect squares whose first two and last two digits are also perfect squares
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,first2,last2;
    printf("4 digit perfect squares whose first two and last two digits are also perfect squares are:\n");
    for(i=1000;i<=9999;i++)
    {
        int root = sqrt(i);
        if(root * root == i)
        {
            first2 = i % 100;
            last2 = i % 100;
            int r1 = sqrt(first2);
            int r2 = sqrt(last2);
            if(r1 * r1 == first2 && r2 * r2 == last2)
            {
                printf("%d\n", i);
            }
        }
    }
}
