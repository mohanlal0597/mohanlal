#include<stdio.h>
int main()
{
int m,b,c;
scanf("%d%d",&m,&b);
c=m;
m=b;
b=c;
printf("a=%d",m);
printf("b=%d",b);
return 0;
}
