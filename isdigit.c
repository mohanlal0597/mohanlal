include<stdio.h>
#include<string.h>
int main()
{
char m;
scanf("%c",&m);
if(isdigit(m)!=0)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
