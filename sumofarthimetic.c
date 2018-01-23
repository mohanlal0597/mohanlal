#include<stdio.h>
int main()
{
int a,k,d,sum=0,t,i;
scanf("%d%d%d",&a,&k,&d);
for(i=0;i<a;i++)
{
t=sum+k;
sum=t;
k=k+d;
}
printf("%d",t);
return 0;
}
