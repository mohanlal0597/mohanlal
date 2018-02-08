#include<stdio.h>
int main()
{
  int i,count=0;
  char a[1000];
  printf("enter the line:\n");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
  if(a[i]=='.')
  count++;
  }
  printf("the total lines are of:%d",count+1);
  return 0;
}
