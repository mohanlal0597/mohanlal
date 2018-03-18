#include<iostream>
using namespace std;
#include<conio.h>
class vechile
{
    public:
    vechile()
    {
    cout<<"this a vechile\n";
    }
};
class fourwheeler: public vechile
{
    public:
    fourwheeler()
   {
   cout<<"objects with 4 wheels are vehicle\n";
   } 
};
class car : public fourwheeler
{
    public:
    car()
    {
    cout<<"car has 4 wheels.";
    }
};
int main()
{
 car obj;
 return 0;
}
