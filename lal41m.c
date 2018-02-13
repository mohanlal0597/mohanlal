#include<stdio.h>
#include<string.h>
int main()
{
    char w[20];
    int m,i;
    printf("Enter the word:\n");
    scanf("%s",&w);
    printf("Enter the number of times to print:\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("%s\n",w);
}
return 0;
}
