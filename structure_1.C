#include<stdio.h>
#include<string.h>
struct Employee 

{
    int id;
    char name;
    float marks;
    char name1[50];
};
int main()
{
   // struct Employee yohana , nikhil,swagath;
  /*  yohana.id=12;
    yohana.name='y';
    yohana.marks=88;
    nikhil.id=12;
    nikhil.name='n';                                                                                                                                 
    nikhil.marks=88;                                                                                                                               
    swagath.id=12;                                                                                                                                  
    swagath.name='s';                                                                                                                                   
    swagath.marks=89.8;     */                                                                                                                       
    //OR

   struct Employee yohana={12,'y',12.5};
  printf( strcpy(yohana.name1,"Yohana Erukala\n"));
    printf("the details yohana are\n id=%d\n name=%c\n marks=%f \n:",yohana.id,yohana.name,yohana.marks);
    return 0;
}