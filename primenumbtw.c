#include<stdio.h>
int main()
{
int a,b,k,l,m,n;
scanf("%d",&k);
scanf("%d",&l);
a=k+1;
b=l-1;
for(a;a<=b;a++)
{
n=0;
for(m=2;m<a;m++)
{
if(a%m==0)
{
n=1;
break;
}
}
if(n==0)
{
printf("%d",a);
}
}
return 0;
}
