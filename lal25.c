#include <stdio.h>
int main()
{
int a[100];
int i, j,b,s,m;
scanf("%d", &b);
for (i = 0; i <b; i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
s= a[i];
a[i]=a[j];
a[j]=s;
}
}
}
m=b/2;
{
printf("%d\n",a[m]);
}
return 0;  
}
