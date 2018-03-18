#include<iostream>
using namespace std;
#include<conio.h>
class vehicle
{
    public:
    vehicle()
    {
    cout<<"this a vechile\n";
    }
};
class fourwheeler
{
    public:
    fourwheeler()
   {
   cout<<"objects with 4 wheels are vehicle\n";
   } 
};
class car :public vehicle , public fourwheeler
{
    public:
    car()
    {
    cout<<"this is car";
    }
};
int main()
{
 car obj;
 return 0;
}
