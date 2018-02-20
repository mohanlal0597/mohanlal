#include <stdio.h>
int main() 
{
	int n,min,max,i,a[50];
	printf("enter the no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
		max=a[i];
	else
		min=a[i];
	}
printf("minimum and maximum number is:%d %d",min,max);
return 0;
}
