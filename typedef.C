#include<stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char name[34];
    char subject;

}std;  //alias name for student

int main()
{
    std s1,s2;
    s1.id=12;
    s1.marks=20;
    s1.subject='m';
    printf("the id is %d\n:",s1.id);

}