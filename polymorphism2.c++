#include<iostream>
using namespace std;
 class calc
 {
    public:
 void area(int a)
 {
 int ar=a*a;
 cout<<ar<<endl;
 }
 void area(int l,int b)
 {
    int ar=l*b;
    cout<<ar<<endl;
 }
 };
 int main()
 {
     calc c;
    c.area(54);
    c.area(45,65);
     return 0;
 }
