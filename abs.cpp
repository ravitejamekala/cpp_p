#include<iostream>
using namespace std;
class Vechile 
{
    public :
    int milage;
    char fuel;
    public :
    Vechile(int m, char f)
    {
        milage = m;
        fuel = f;
    }
    virtual void display()=0;

};

class Bike : public Vechile{
    public :
    Bike(int m,char f): Vechile(m,f)
    {

    }
    void display()
    {
        cout<<"\nBike Milage = "<<milage;
        cout<<"\nBIke Fuel Type= "<<fuel;
    }
};
class Car : public Vechile{
    public:
Car (int m,char f) : Vechile(m,f)
{

}
void display()
{
   cout<<"\nBike Milage = "<<milage;
   cout<<"\nBIke Fuel Type= "<<fuel;
}
};

int main()
{
    int milage;
    char f;
    Vechile *a[2];


    milage =40;
    f= 'P';
    Bike b(milage,f);

    milage =15;
    f= 'd';
    Car c(milage,f);
    a[0]=&b;
    a[1] = &c;

    a[0]->display();
    a[1]->display();

    return 0;

}