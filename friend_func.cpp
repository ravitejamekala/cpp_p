#include<iostream>
using namespace std;

class Dimensions;       // Forward Declaration

class Area
{
    public:
    void square(Dimensions a);
    void rect(Dimensions s);
 

};
class Dimensions
{
    int s;
    int l ,b;
    friend void Area :: square(Dimensions);
    friend void Area :: rect(Dimensions);
    public:
    void getdim()
    {
        cin>>s;
        cout<<"rectangle : ";
        cin>>l>>b;
       
    }
};

 void Area :: square(Dimensions a)
    {
        int res = a.s * a.s;
        cout<<"\n"<<res;
        
    }
 void Area :: rect(Dimensions s)
    {
        cout<<"\n"<<s.l*s.b;
    }

int main()
{
    Dimensions s;
    s.getdim();
    Area a;
    a.square(s);
    a.rect(s);
}
