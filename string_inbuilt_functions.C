#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]={'y','o','h','a','n','a','\0'};  //if  '\0' is not declared at last index it prints garbage value at the of the string
    char s2[]={"yohana"};    //here '\0' need not be declared for " "
    char s3[8];
    puts(s1);
        strcpy(s3,s1);
    puts(s3);
        strrev(s3);
    puts(s3);
        strcat(s3,s1);
    puts(s3);
        printf("%d\n ",strlen(s3));
        printf("%d\n",strcmp(s3,s1));

    return 0;
}
