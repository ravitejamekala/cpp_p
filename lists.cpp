#include<iostream>
#include<list>
using namespace std;
void display(list<int> &s)
{
    list<int> :: iterator a;
    a = s.begin();
    while(a!= s.end())
    {
        cout<<*a<<"  ";
        *a++;
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    l.push_back(56);
    l.push_back(24);
    l.push_back(3);
    display(l);
   
    list<int> :: iterator a;
    a = l.begin();
    l.pop_back();
    l.insert(a,12);
    l.sort();
    display(l);
    return 0;
}