#include<stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //return;
}
int main()
{
    int i=2,j=7;
    printf("the value of a is %d and b is %d\n:",i,j);
    swap(&i,&j);
    printf("the value of a is %d and b is %d  after swapping:",i,j);
    return 0;
}