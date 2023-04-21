#include<iostream>
using namespace std;
// template with multiple template varaibles
template <class T1, class T2>
class Swapp
{
    public:
    void swaap(T1 &a, T2 &b)
    {
        T2 temp;
        temp=a;
        a=b;
        b=temp;
        cout<<a<<endl<<b; 
    }
};
int main()
{
    Swapp<int,float> s;
    int a=10;
    float b=20.10;
    s.swaap(a,b);

    return 0;
}