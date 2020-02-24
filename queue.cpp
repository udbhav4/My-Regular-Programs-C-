#include<iostream>
using namespace std;

class Queue
{
    int front=-1,rear=-1,size=0,A[];
public:
    void input()
    {
        cout<<"Enter the size of the array: ";
        cin>>size;
        A[size];
    }

    void push()
    {
        if(rear==size-1)
            cout<<"Queue has no more space. OVERFLOW!!\n";
        else
        {
            int n;
            cout<<"Enter your number: ";
            cin>>n;
            A[++rear]=n;
        }
    }

    void pop()
    {
        if(front==rear)
            cout<<"No numbers in the queue. UNDERFLOW!!\n";
        else
            cout<<"The element that comes out is: "<<A[++front]<<"\n";
    }

    void display()
    {
        if(front==rear)
            cout<<"No element in the queue\n";
        else
        {
            int i;
            for(i=front+1;i<=rear;++i)
                cout<<A[i]<<"\n";
        }
    }
};

int main()
{
    Queue obj;
    obj.input();
    int choice=0;
    int iterate=1;
    while(iterate)
    {
        cout<<"\n\n1- Enter/Push a number in the queue\n2- Output/Pop out a number from the queue\n3- Display the queue\n4- Exit the program\nPress one of the keys from the following options: ";
        cin>>choice;
        switch(choice)
        {
            case 1: obj.push();
                    break;
            case 2: obj.pop();
                    break;
            case 3: obj.display();
                    break;
            case 4: iterate=0;
                    break;
            default:cout<<"PRESS THE KEYS PROPERLY!!";
        }
    }
    return 0;
}
