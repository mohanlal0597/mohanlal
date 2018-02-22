#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
{
    if((pow(2,i))==a)
{
    printf("yes");
}
}
return 0;
}
