#include<stdio.h>
#include<string.h>
union student
{
    int id;
    char name[40];
    char subject;
};
int main()
{
    union student s1;   //declaration of variables must be in order to get the memeory allocated 
    s1.subject='m';
    s1.id=1;
    strcpy(s1.name, "YohanaErukala");
    printf("the id is %d\n",s1.id);
    printf("%c \n",s1.subject);
    printf("%s \n:",s1.name);
}