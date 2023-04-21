#include<iostream>
using namespace std;

// Template with single template variable/element
template <class T>
class Sum{

public:
    Sum(T a, T b)
    {
        cout<<a+b<<endl;
    }

};
int main()
{
    Sum<int> s(10,20);
    return 0;
}