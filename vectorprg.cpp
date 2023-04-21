#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a)
{
    for (vector<int> :: iterator  i =a.begin(); i<a.end(); i++)
    {
        cout<<*i<<"  ";
    }
    cout<<endl;
    
    
}
int main()
{
    int n;
    vector<int> a;
    // for(int i=0;i<6;i++)
    // {
    //     cin>>n;
    //     a.push_back(n);
    // }
     a.push_back(10);
     a.push_back(20);
     a.push_back(30);

    a.pop_back();
    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    vector<int> b(5,10);
   display(a);
   display(b);
    return 0;
}