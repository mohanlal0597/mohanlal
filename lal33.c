#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,count=0;
    printf("Enter the string:\n");
    char a[1000];
    gets(a);
    m=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==' ')
    count++;
    }
    printf("the no of spaces in the string is %d",count);
    return 0;
}
