#include<iostream>
using namespace std;
 
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
 void area(float pi,int r)
 {
   float ar=pi*r*r;
    cout<<ar;
    
 }
 int main()
 {
    area(54);
    area(45,65);
    //area(3.14,6);
     return 0;
 }
