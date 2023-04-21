#include<iostream>
using namespace std;

//call by reference 

void swap(int &a ,int &b)
{
    cout<<a<<"\t"<<b<<"\n";
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"\t"<<b;
}
int main()
{
    int a=20,b=10;
    swap(a,b);
    return 0;
}