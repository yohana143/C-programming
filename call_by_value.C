#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int i=1,j=2;
    add(i,j);
    printf("%d",i+j);
}