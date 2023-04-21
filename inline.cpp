#include<iostream>
using namespace std;

// inline functions replaces the function call with the actual code of the function

// thus reduces the overhead and increases the program performance 

// inline function can only work with functions with least code.

// *** the decision whether a function is inline or not is ultimately upto the compiler that is based on their own optimization algorithms and settings

inline int  add(int a,int b)
{
    return a+b;
}
int main()
{
    int a=10,b=20;
    cout<<"this is the sum of two numbers using inline function "<< add(a,b);   // here add(a,b) will be replaced with a+b 
    return 0;
}