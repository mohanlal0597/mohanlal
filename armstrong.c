#include <stdio.h>
int main() 
{
int a,c,r,s=0,m;
scanf("%d",&a);
m=a;
while(a!=0)
{
r=a%10;
c=r*r*r*r;
s=s+c;
a=a/10;
}
if(s==m)
printf("it is Armstrong number");
else 
printf("it is not a Armstrong");
return 0;
}
