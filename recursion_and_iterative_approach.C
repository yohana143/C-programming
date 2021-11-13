#include<stdio.h>
{
int fib_by_recursion(int n)
if(n==0)
    return 0;
else if (n==1)
    return 1;
else
return fib_by_recursion(n-1) + fib_by_recursion(n-2)
}
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d\n",&a);
    for(int i=0; i<n ;i++)
    {
    fib_by_recursion(a);
    }
   // printf("the fib of %d is: ",a);
}