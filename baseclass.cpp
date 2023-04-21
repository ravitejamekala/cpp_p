#include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    
};
class B : virtual public A              //virtual base class is used to elimate diamond problem 
{

};
class C : virtual public A              // Declaring a class as virtual ensures that only one copy of the data members/methods is shared among the derived class
{};

class D : public B,public C
{

};

int main()
{
    D obj;
    obj.a=20;
    cout<<obj.a;
}
