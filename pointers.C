#include<stdio.h>
int main()
{
int a=16;
int *ptr=&a;
printf("the address of a is %p\n:",&ptr);
printf("the value of a is %d\n:",*ptr);
printf("the value of a is %p\n:",*ptr);
printf("the address of pointer is %d\n:",*ptr);

return 0;
}