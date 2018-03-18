#include<iostream>
using namespace std;
#include<conio.h>
class num
{
    public:
    void calc()
    {
    int a,c;
    cin>>a;
    c=a*a;
    cout<<c;
    }
    void disp()
    {
    int b,sum=1,i;
    cin>>b;
    for(i=1;i<=b;i++)
    {
    sum=sum*i;
    }
    cout<<sum;
    }
};
int main()
{
    int m;
    clrscr();
    cout<<"choose 1-square r 0-factorial:\n";
    cin>>m;
    num n;
    if(m)
    {
    cout<<"square num is:";
    n.calc();
    }
    else
    {
    cout<<"factorial num is:";
    n.disp();
    }
    return 0;
    getch();
}
