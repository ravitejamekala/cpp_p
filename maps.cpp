#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,char> m;
    map<int,char> :: iterator i;
    using namespace std;
    i = m.begin();
    m[1] = 'a';
    m[2] = 'b';
    m[3] = 'c';
    i = m.begin();
    m.insert({{4,'d'},{5,'e'}});
    while(i!=m.end())
    {
        cout<<(*i).first<<"  "<<(*i).second<<endl;
        i++;
    }
    
    return 0;
}