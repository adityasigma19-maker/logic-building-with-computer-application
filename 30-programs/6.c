// Program to find the minimum element in an array
#include <stdio.h>

int main() {
    int i,min,a[10];
    printf("Enter 10 numbers:");
    for(i=0; i<10; i++)
    scanf("%d", &a[i]);
    min = a[0];
    for(i=1; i<10; i++)
    {
        if(a[i]<min)
        min = a[i];
    }
    printf("Min = %d", min);

    return 0;
}