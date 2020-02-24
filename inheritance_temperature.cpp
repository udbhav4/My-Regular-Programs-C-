#include<iostream>
using namespace std;

class Temperature
{
public:
    float celcius, farhen;

    Temperature(float celcius)
    {
        this->celcius=celcius;
    }

    void calculate()
    {
        farhen=9*(celcius+32)/5;
        cout<<"Temperature in farheniet is: "<<farhen<<"\n";
    }
};

class Temp: private Temperature
{
public:
    Temp(char c): Temperature(c)
    {}

    void calculate()
    {
        Temperature::calculate();
        float kelvin=5*(farhen+459.67)/9;
        cout<<"Temperature in kelvin is: "<<kelvin<<"\n\n";
    }
} ;

int main()
{
    float c;
    cout<<"Enter the temperature in celcius: ";
    cin>>c;
    Temp obj(c);
    obj.calculate();
    return 0;
}
