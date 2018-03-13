#include<stdio.h>
int main()
{
int a[20],i,big;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
big=a[0];
for(i=0;i<10;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("largest number is:%d",big);
return 0;
}
