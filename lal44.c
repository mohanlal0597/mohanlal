#include <stdio.h>
int main()
{
	int m;
	printf("Enter the number btw (0-10):");
	scanf("%d",&m);
	if((m>=0)&&(m<=10))
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
