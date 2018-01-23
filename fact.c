#include<stdio.h>
int main()
{
int m,l,fact=1;
printf("Enter the number");
scanf("%d",&l);
for(m=1;m<=l;m++)
{
fact=fact*m;
printf("The factorial of %d=%d",l,fact);
}
return 0;
}
