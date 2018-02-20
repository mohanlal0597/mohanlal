#include <stdio.h>
int main() 
{
	int i,a[20],sum=0,avg;
	for(i=1;i<=2;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=2;i++)
	{
	sum=sum+a[i];
	}
	avg=sum/2;
	printf("%d",avg);
	return 0;
}
