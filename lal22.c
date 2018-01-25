#include <stdio.h>
int main()
{
int i,y,m,n[10];
scanf("%d",&y);
for(i=0;i<y;i++)
{
	scanf("%d",&n[i]);
}
m=n[0];
for(i=0;i<y;i++)
if(m<n[i])
m=n[i];
{
 printf("%d",m);
}
return 0;
}
