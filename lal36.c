#include <stdio.h>
int main()
{
char a[500];
int i,count=0;
printf("enter the special characters:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='!')&&(a[i]<='@'))
count++;
}
printf("total special characters are:%d",count);
return 0;
}
