#include<stdio.h>
int avg(int *ptr)
{
    printf("This is *ptr function:\n");
    for (int i=0 ;i<4 ;i++)
    {
        printf("%d\n:", *(ptr+i));//value
        printf("%d\n:", ptr+1);//address

    }
    *(ptr + 2)=123;
}
int func2(int array[])
{
    printf("This is func2 function:\n");
for (int i=0 ;i<4 ;i++)
{
   // printf("the value at index %d   is %d\n :",i, array[i]);

    // OR
   printf("the value at index %d   is %d\n :",i, *(array+i));

}
array[0]=234; //here value at any index can be changed becoz heere we know the address of the elements of the array 
}
int main()
{   int arr[]={1,2,3,4,5};
    //avg(arr);
    //avg(arr);//here function is called twice becoz to get the updated values in the array like array[0]=234
    func2(arr);
    func2(arr);

    return 0;
}