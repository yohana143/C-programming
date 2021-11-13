#include<stdio.h>
#define max_size 100
//{
//return 0;
//}
int main()
{
    int n,i;
    int arr[max_size];
    printf("Enter the size of the array\n:");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (i=0 ;i<n;  i++)
    {
    scanf("%d:",&arr[i]);
    }
    printf("\n");
    printf("Array in reverse order:\n");
    for(i=n-1 ;i>=0 ; i--)
    {
    printf(" %d\t",arr[i]);
    }
    return 0;
}