#include<stdio.h>
int main()
{
    int num,multiple;
    printf("Enter the number you want the multiplication table:\n ");
    scanf("%d",&num);
    printf("Enter the number of multiples: \n");
    scanf("%d",&multiple);
    printf("The table for %d is:\n",num);
    for (int i=1;i<=multiple;i++)
    {
        printf("%d x %d = %d\n",num,i,num * i);
    }
    return 0;
}