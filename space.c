#include<stdio.h>
#include<string.h>
int main()
{
    int b,i,t=0;
    printf("Enter the string:");
    char a[1000];
    gets(a);
    b=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        t++;
    }
    printf("the no of spaces in the string is %d",t);
    return 0;
}
