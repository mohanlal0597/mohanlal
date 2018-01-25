#include <stdio.h>
int main()
{
int a[100],i,j,m,t;
scanf("%d", &m);
for (i = 0; i <m; i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
t= a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for (i=0;i<m;i++)
{
printf("%d\n",a[i]);
}
return 0;  
}
