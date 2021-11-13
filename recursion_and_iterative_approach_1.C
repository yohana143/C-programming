#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of fibonacci series you want:");
    scanf("%d: ",&n);
    int first=0,second=1,result;
    printf("Fibonacci series :: ");
    for(int i=1 ;i<n ;++i)
    {
        if(i<1)
        {
            return i;
        }
        else{
        result=first+second;
        first=second;
        second=result;
        }
        printf("%d ",result);
    }
    return 0;
}