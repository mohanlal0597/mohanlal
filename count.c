#include<stdio.h>
void main()
{
 int a,count=0;
scanf("%d",&a);
while(a)
{
a=a/10;
count++;
}
printf("%d",count);
}
