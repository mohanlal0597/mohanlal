#include <stdio.h>
#include <string.h>
int main()
{
char a[1000];
int m,i,b=1;
gets(a);
m=strlen(a);
for(i=0;i<m;i++)
{
if(a[i]==' ')
{
b++;
}
}
printf("%d",b);
return 0;
}
