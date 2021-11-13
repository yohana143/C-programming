#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    //int* arrptr=arr;    //we cannot perform any operations directly on arr like arr++,arr-- so on....
    printf("The value at index 3 is %d\n: ",arr[3]);
    printf("The address of 3 is %d\n: ",&arr[2]);
    printf("The address of the second element of the array is %d: ",  arr + 1);

    //arrptr++;//this is valid operation we dont get any error but arr++ is not valid

    printf("The value at address of 3 is %d\n: ",*(&arr[2]));
    printf("The value at address of the second element of the array is %d\n: ",  *(arr + 1));
    return 0;
}