#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<p<<"\n\n";
    p+=1;
    cout<<p;
    return 0;
}
