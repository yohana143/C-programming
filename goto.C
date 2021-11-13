#incl20ude<stdio.h>
int main()
{
    
    int i,age;
    for (i=0;i<10;i++)
    {
        printf("%d\nEnter the age: ",i);
        scanf("%d",&age);
        if(age>10)
        {
            goto end;
        }
    }
    end:
    return 0;
}