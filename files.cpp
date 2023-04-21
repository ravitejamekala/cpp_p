#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    //files using fstream objects

    //
    string s = "HELLO FILES";
    string st;
   // ofstream o("sample.txt");
    //o<<s;
    ifstream i("sample.txt");
    getline(i,st);
    cout<<st;
    return 0;
}