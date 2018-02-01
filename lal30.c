#include<stdio.h>
int main()
{
int h1,h2,m1,m2,a,b;
scanf("%d:%d",&h1,&m1);
scanf("%d:%d",&h2,&m2);
a=h1-h2;
b=m1-m2;
printf("result is %d:%d",a,b);
return 0;
}
