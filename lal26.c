#include <stdio.h>
#include<ctype.h>
int main()
{
char m;
printf("\nEnter the number: ");
scanf("%c",&m);
if(m>='0'&&m<='9')
{
printf("\n YES");
}
else
{
printf("\n NO");
}
return 0;
}
