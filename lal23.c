#include<stdio.h>
int main()
{
int b,a[20],i,m;
printf("enter a number\n");
scanf("%d",&b);
printf("enter the numbers is ");
for(i=0;i<b;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<b;i++)
{
if(m>a[i])
m=a[i];
}
printf("%d",m);
return 0;
}
