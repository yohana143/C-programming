#include<stdio.h>
int star_pattern(int n)
{
    for (int i=0; i<n; i++) //it is for number of rows
    {
     for(int j=0 ; j<=i ;j++)//it prints the number of stars in each row
     {
         printf("*");
     }
     printf("\n");
    }
}
int reverse_star_pattern(int m)
{
    for (int i=0; i<m; i++) //it is for number of rows
    {
     for(int j=0 ; j<m-i ;j++)//it prints the number of stars in each row
     {
         printf("*");
     }
     printf("\n");
    }
}
int main()
{   int rows,type;
   // printf("Enter the height of the triangle u want to construct: ");
    //scanf("%d",&rows);
    //star_pattern(rows);
   // reverse_star_pattern(rows);
   printf("Enter 0 for normal triangle and 1 for reverse triangle: ");
   scanf("%d",&type);
   printf("Enter the height of the triangle u want to construct: ");
    scanf("%d",&rows);
    switch(type)
    {
        if(type>1)
        {
            goto r:
        }
        case 0:
                star_pattern(rows);
                break;
        case 1:
                reverse_star_pattern(rows);
                break;
        default:
                printf("U have entered the invalid choice: ");
                break;
    }
    return 0;
}