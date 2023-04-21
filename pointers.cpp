#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* b;
    b = &a;

    float m = 3.14;
    float* n = &m;

    char x = 'a';
    char* y = &x;

    

    //    '*'  ------> deference operator (value at)
    //    '&'  ------> address of operator 

    // pointer to pointer
    int** c;
    c = &b;
    
    cout<<"the address of a is "<<b;
    cout<<"\n the value of a using deference operator "<<*b;
    
    cout<<"\n the address of b is "<<c;
    cout<<"\n value at using c is "<<**c;

    cout<<"\n size of integer pointer "<<sizeof(b)<<"\t"<<sizeof(c);
    cout<<"\n size of float and char pointers "<<sizeof(n)<<"\t"<<sizeof(y);
    return 0;
}