#include<stdio.h>
int main()
{
	int n,c=0,digit;
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		c++;
		n=n/10;
	}
	printf("%d",c);
return 0;	
}
