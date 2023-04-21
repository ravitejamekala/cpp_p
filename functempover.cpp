#include<iostream>
using namespace std;
int avg(int a,int b )
{
    
    return (a+b)/2;
}
template <class T1, class T2>
T1 avg(T1 a,T2 b)
{
    return (a+b)/2;
}

int main()
{
    cout<<avg(10,20)<<endl;   // since there exists a proper definition for int avg function (i.e., avg(10,20)) the avg(int,int) even though there a template function
    
    cout<<avg(40.2,10.3);


    return 0;
}