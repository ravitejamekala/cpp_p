//leetID : #7


#include<bits/stdc++.h>
using namespace std;

int reversenum(int n)
{
    string s = to_string(n);                                    //O(logn)
    if(n<0)
    :: reverse(s.begin()+1,s.end());                            //O(logn)
    else        
    :: reverse(s.begin(),s.end());                              //O(logn)

    int res = stoi(s);                                          //O(logn)
    if(res<INT_MIN|| res> INT_MAX)
    return 0;


    return res;


    //Alternate solution
    // long res=0;
    // while(n!=0)                                                 //O(logn)
    // {
    //     res =(res*10)+(n%10);                                   //O(1)
    //     n=n/10;                                                 //O(1)
    // }
    // if(res < INT_MIN || res > INT_MAX)
    // return 0;


}
int main()
{
    int inp;
    cin>>inp;
    cout<<reversenum(inp);
    return 0;
}   

// TC : O(logn)
// SC : O(1) 