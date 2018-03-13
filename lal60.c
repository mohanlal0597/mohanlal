#include<stdio.h>
int main()
{
    int a=1,b=1,c,n,i;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    printf("The fibonacci series are:\n");
    printf("\n %d %d ",a,b);
    for(i=2;i<n;i++)
    {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }
    return 0;
}
