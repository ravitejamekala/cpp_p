#include<iostream>
using namespace std;

// simple class template function

template <class T>
void dis(T a)
{
    printf("value of a is  %d ",a);
}
int main()
{
    dis(25);
}