#include<stdio.h>
void main()
{
int n,sum=0,m;
scanf("%d",&n);
m=n;
while(m!=0)
{
sum=sum*10;
sum=sum+m%10;
m=m/10;
}
if(sum==n)
printf("number is palindrome");
else
printf("number is not palindrome");
}
