#include<iostream>
using namespace std;

class Example
{
public:
    int a;
    void print()
    {
        cout<<a<<"\n\n";
    }
};

int main()
{
    Example obj;
    int Example::*p;
    p=&obj.a;
    obj.*p=10;
    obj.print();
    obj.*p=20;
    obj.print();
    return 0;
}
