#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=345;
float b=8.3;
void *ptr;
ptr=&a;
//printf("%d",*ptr); //Gives an error because we cannot deference the void pointer directly
printf("Th value of a is %d\n",*((int *)ptr)); //correct way of deferencing the void pointer
ptr=&b;
printf("Th value of b is %f\n",*((float *)ptr)); //correct way of deferencing the void pointer
return 0;

}