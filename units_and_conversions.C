/*
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters 
*/
#include<stdio.h>
int main()
{
    int i;
    float kmstomiles=0.621;
    float inchestofoot=0.0833;
    float cmstoinches=0.394;
    float poundtokgs=0.454;
    float inchestometers=0.0254;
    float first,second;
    while(1){
    printf("*****Welcome to Unit Conversion*****\n");
    printf("Press: 1:kmstomiles  2:inchestofoot  3:cmstoinches   4:poundtokgs   5:inchestometers");
     printf("Enter the kilometers %d\n:",first);
     scanf("%d\n",&first);
    scanf("%d",&i);
    switch (i)
    {
        case '0':
        goto e;
        break;
        case '1':
        second=first*kmstomiles;
        //printf("Enter the kilometers %d\n:",first);
       // scanf("%d\n",&first);
        printf("The number of miles for %d kilometers is %f\n:",first,second);
        break;
        case '2':
        second=first*inchestofoot;
       // printf("Enter the inches %d\n:",first);
        //scanf("%d\n",&first);
        printf("The number of foot for %d inches is %f\n:",first,second);
        break;
        case '3':
        second=first*cmstoinches;
       // printf("Enter the centimeters %d\n:",first);
       // scanf("%d\n",&first);
        printf("The number of meters for %d centimeters is %f\n:",first,second);
        break;
        case '4':
        second=first*poundtokgs;
       // printf("Enter the pounds %d\n:",first);
       // scanf("%d\n",&first);
        printf("The number of kgs for %d pounds is %f\n:",first,second);
        break;
        case '5':
        second=first*inchestometers;
        //printf("Enter the inches %d\n:",first);
        //scanf("%d\n",&first);
        printf("The number of meters for %d inches is %d\n:",first,second);
        break;
    }
    }
    e:
return 0;
}