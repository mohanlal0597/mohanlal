#include<iostream>
using namespace std;
#include<conio.h>
class mohan
{
    public:
    mohan()
    {
    cout<<"constructor is executed\n";
    }
    void disp()
    {
    cout<<"function is executed\n";
    }
    ~mohan()
    {
    cout<<"destructor is executed";
    }
};
main()
{
    mohan ob1;
    ob1.disp();
}
