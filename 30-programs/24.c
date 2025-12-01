// Program to convert a lowercase string to uppercase using recursion
#include <stdio.h>

void toUppercase(char *str)
{
    static int i = 0;  

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;  
        }

        i++;
        toUppercase(str); 
        break;  
    }
}

int main()
{
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    toUppercase(str); 

    printf("Uppercase string: %s", str);

    return 0;
}


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
