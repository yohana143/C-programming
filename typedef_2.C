#include<stdio.h>
int main()
{
    //int a,b;
    typedef int* intPointer;
    intPointer a,b;
    int c=34;
    a=&c;
    b=&c;
    printf("%d %d\n: ", *a , b);
}