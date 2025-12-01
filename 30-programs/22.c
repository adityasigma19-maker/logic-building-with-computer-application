// Program to demonstrate pointer usage and swapping values using pointers
#include <stdio.h>


//int main() {
    //int a = 5;
    //printf("%d %d %d", a,&a,*(&a)); // pointer variable stores address only
    //return 0;
//}

//int main() {
    //int a = 5,*b;
    //b = &a;
   // printf("%d %d %d", a,*b,*(&a));

//}

// int main() {
//     int a = 10, b = 20;
//     int swap(int,int);
//     swap(a,b);
//     printf("%d %d", a,b);
// }
// int swap(int x, int y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;

//}

int main() {
    int a = 10, b = 20;
    int swap(int*, int*);
    swap(&a,&b);
    printf("%d %d", a,b);
}
    int swap(int*x,int*y)

    {
        int z;
        z = *x;
        *x = *y;
        *y = z;
    }


