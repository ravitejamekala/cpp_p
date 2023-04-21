#include<iostream>
using namespace std;

struct employee
{
    int empid;
    char name;
    float salary;
};

//methods declared inside a structed can access other members without instance of the structure.

union student
{
    int id;
    char name;
    float percent;
};

enum color 
{
    RED,                    // default R=0 , G=1 , B=2 
    GREEN,
    BLUE
};


int main()
{
    //structures:   Memory is allocated for every unique member i.e.,  dedicated memory for each member;
    employee e;
    e.empid = 101;
    e.name= 'm';
    e.salary = 1200000000;

    cout<<"empid : "<<e.empid<<"\n";
    cout<<"name : "<<e.name<<"\n";
    cout<<"salary : "<<e.salary<<"\n";

    // union : shared memory;   memory is allocated based on the size of largest member.

    student s;
    s.id=201;
    s.name='s';
    s.percent=93.7;
    
    cout<<"id : "<<s.id<<"\n";
    cout<<"name : "<<s.name<<"\n";

    // here the values of 'id' and the 'name' will be overwritten and contain garbage values because of the shared memory 
    
    //percent value will be accurate as it is the last element assigned.
    
    cout<<"percent : "<<s.percent<<"\n";


    // enum

   

    cout<< "RED : "<< RED<<"\n";
    cout<< "BLUE : " << GREEN<<"\n";
    cout<<  "GREEN : "<< BLUE<<"\n";
    return 0;
}