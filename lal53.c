#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the numbers:\n");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c=c+b;
a=a/10;
}
printf("Sum of the digits: %d",c);
return 0;
}
