#include<iostream>
using namespace std;
class Excep
{
    public:
    void calc(int a,int b)
    {
          if(b==0)
        try{
          
            throw runtime_error("divide by zero");
        }
        catch(exception &e)
        {
            cout<<"Error: "<<e.what();
        }
        else
        cout<<a/b;
    }
};
int main()
{
    Excep e;
    e.calc(10,0);
}