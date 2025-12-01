#include <stdio.h>
#include <string.h>


struct student_struct {
    char name[20];
    int roll;
    float marks;
};


union student_union {
    char name[20];
    int roll;
    float marks;
};

int main() {

    printf("----- STRUCT OUTPUT -----\n");

    struct student_struct s1, s2;

    strcpy(s1.name, "Vansh Ranot");
    s1.roll = 101;
    s1.marks = 95.5;

    s2 = s1;  

    printf("%s\n%d\n%.2f\n", s2.name, s2.roll, s2.marks);



    printf("\n----- UNION OUTPUT -----\n");

    union student_union u1;

    strcpy(u1.name, "Vansh Ranot");
    printf("%s\n", u1.name);

    u1.roll = 101;        
    printf("%d\n", u1.roll);

    u1.marks = 95.5;      
    printf("%.2f\n", u1.marks);

    return 0;
}
