#include<iostream>
using namespace std;

class Exchange
{
public:
    void swap(int a, int b)
    {
        int t=a;
        a=b;
        b=t;
        cout<<"Result by call by value ->\na=" <<a<<"\nb= "<<b<<"\n\n";
    }

    void swap(int *x, int *y)
    {
        int t=*x;
        *x=*y;
        *y=t;
    }

    void swapr(int &x, int &y)
    {
        int t=x;
        x=y;
        y=t;
    }
};

int main()
{
    Exchange obj=Exchange();
    int a=4, b=7;
    cout<<"Initial values:\na= "<<a<<"\nb= "<<b<<"\n\n\n";
    obj.swap(a,b);
    obj.swap(&a,&b);
    cout<<"Result by call by address ->\na= " <<a<<"\nb= "<<b<<"\n\n";
    a=4;
    b=7;
    obj.swapr(a,b);
    cout<<"Result by call by reference ->\na= "<<a<<"\nb= "<<b<<"\n\n";
    return 0;
}

