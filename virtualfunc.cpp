#include<iostream>
using namespace std;
class Base
{
    public:
   virtual  void prints()
    {
        cout<<"Hello from base class\n";
    }
};

//virtual functions 
class Derived : public Base
{
    public :
    void prints()
    {
        cout<<"hello from derived class\n";
    }
    void helps()
    {
        cout<<"help \n";
    }
};

int main()
{
    Derived a;
    Base *basepointer;                              // pointer to object implementation
    basepointer =  &a;
    basepointer->prints();
    //basepointer->help();
    //a.prints();
}