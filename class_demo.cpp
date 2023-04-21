#include<iostream>
using namespace std;
class Student
{
    public :
    int a,b;
    int sum(int,int);
};
int Student :: sum(int a,int b)
{
    return a+b;

}

int main()
{
    int a =10,b=20;
    Student s;
    cout<<s.sum(a,b);
    return 0;
}