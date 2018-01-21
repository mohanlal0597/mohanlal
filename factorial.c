#include<stdio.h>
int main()
{
int n,m,sum=1,t;
scanf("%d",&n);
for(m=1;m<=n;m++)
{
t=sum*m;
sum=t;
}
printf("%d",t);
return 0;
}
