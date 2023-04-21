#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // ofstream o("sample.txt");
    // string s = "this is sample";
    ifstream i("sample.txt");
    string ss;
    while(!i.eof())
    {
    getline(i,ss);
    cout<<ss;
    }
    
    return 0;
}