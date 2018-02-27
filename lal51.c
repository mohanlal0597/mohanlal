#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter the number:\n");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
printf("Digits are..:\t%d\t%d\t%d",b,d,e);
return 0;
}
