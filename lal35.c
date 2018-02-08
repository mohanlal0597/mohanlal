#include <stdio.h>
int main()
{
char a[50];
int i,count=0;
printf("enter the line:\n");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0')&&(a[i]<='9'))
count++;
}
printf("number in the lines:%d",count);
return 0;
}
