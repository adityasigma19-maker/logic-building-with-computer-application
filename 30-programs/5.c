// Program to find the maximum element in an array
#include <stdio.h>

int main() {
    int i,max,a[10]={0,-1,10,12,-11,8,7,9,20};
    max = a[0];
    for(i=1; i<10; i++)
    {
        if(a[i]>max)
        max=a[i];

    }
    printf("Maximum=%d", max);
    

    return 0;
}