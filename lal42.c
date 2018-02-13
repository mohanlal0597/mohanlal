#include<stdio.h>
int main()
{
	char a[50],b[50];
	int m,n;
	printf("Enter the string:");
	scanf("%s",&a);
	scanf("%s",&b);
	m=strlen(a);
	n=strlen(b);
	if(m>n)
	{
		printf("\n%s",a);
	}
	else
	{
		printf("\n%s",b);
	}
	return 0;
}
