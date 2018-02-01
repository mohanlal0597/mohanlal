#include<stdio.h>
int main()
{
int m[4],i;
printf("\nEnter the elements:");
for(i=0;i<4;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<4;i++)
{
printf("%d %d\n",m[i],i);
}
return 0;
}
