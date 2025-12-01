// Program to calculate final bill amount after discount
#include <stdio.h>

int main(void) {
    int bill, d=0, fbill;
    printf("Enter the bill amount:");
    scanf("%d", &bill);
    if(bill>1000)
    d=10;
    fbill = bill - bill*d/100;
    printf("Final Bill = %d", fbill);
    
    
    return 0;
} 