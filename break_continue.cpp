#include<iostream>
using namespace std;
int main()
{
    // odd numbers program;
    for(int i=0;i<20;i++)
    {
        if(i%2==0)
        continue;

        cout<<i<<"\n";
        if(i==15)
        break;
    }


   return 0;
}