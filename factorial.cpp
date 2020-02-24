#include<iostream>
using namespace std;

class Factorial
{
public:
    int n;

    Factorial(int x)
    {
        n=x;
    }

    int fact(int &no)
    {
        if(no==2)
            return 2;
        else
            return no*fact(--no);
    }
};

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    Factorial obj(num);
    int result=obj.fact(obj.n);
    cout<<"The factorial of your number is: "<<result<<"\n\n";
    return 0;
}
