#include <stdio.h>
int main()
{
int v,p;
printf("enter the number:\n");
scanf("%d%d",&v,&p);
printf(" values are %d %d before swapping.\n", v, p);
v = v ^ p;
p = v ^ p;
v = v ^ p;
printf("values are %d %d after swapping.", v, p);
return 0;
}
