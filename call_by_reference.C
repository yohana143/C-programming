#include<stdio.h>
int add(int *a ,int *b)
{
    return *a+*b;
}
int main()
{
    int i=3,j=4;
    add(&i  , &j);
    printf("the sum is %d\n:",i+j);
}