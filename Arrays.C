/*    #include<stdio.h>
int main()
{
    int marks[4]={45,56,85,96};
   // for(int i=0;i<4;i++)
   // {
   //     printf("Enter the marks of student %d\n:",i);
    //     scanf("%d",&marks[i]);
    //}
    for(int i=0;i<4;i++)
    {
        printf("the marks of %d students is %d\n:",i,marks[i]);
    }
}
*/

/*   2D Array   */

#include<stdio.h>
int main()
{
    int marks[2][4];//={{42,15,45,78},{78,45,63,25}}
    int i,j;
    printf("Enter the elements of array:\n");
    for(i=0 ; i<2 ; i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter the elements of marks[%d][%d]\n:",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0 ; i<2 ; i++)
    {
        for (j=0;j<4;j++)
        {
            printf("marks of marks[%d][%d]] = %d\n:",i,j,marks[i][j]);
        }
    }
}