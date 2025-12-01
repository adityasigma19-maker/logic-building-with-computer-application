// Program to calculate total and average marks of 5 subjects and determine division
#include <stdio.h>

int main(void) {
    int s1, s2, s3, s4, s5;
    int total;
    float average;
    printf("Enter marks of 5 subjects:");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    total = s1+s2+s3+s4+s5;
    average = total / 5.0;
    if(average>60)
    {
        printf("First Division");
    }
   else if(average>=50)
   {
       printf("Second DIvision");
       
   }
   else if(average>=40)
   {
       printf("Third Division");
   }
   else {
       printf("Fail");
       
   }
    return 0;
}