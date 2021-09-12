#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType <int> data;

    data.Push(5);
    data.Push(6);
    data.Push(7);
    data.Push(8);
    data.Push(9);

    if(data.IsEmpty())
    {
        cout<<"Empty!!"<<endl;
    }
    else
    {
        cout<<"Not Empty!"<<endl;
    }
        cout<<"Reseting data...."<<endl;
    data.Reset();

    data.Push(5);
    data.Push(7);
    data.Push(4);
    data.Push(2);

    if(data.IsEmpty())
    {
        cout<<"Empty!!"<<endl;
    }
    else
    {
        cout<<"Stack is Not Empty!"<<endl;
    }

    if(data.IsFull())
    {
        cout<<"Full!"<<endl;

    }

    else
    {
        cout<<"Not Full!"<<endl;
    }


    cout<<"Before Stack...."<<endl;
    StackType<int> data2;
    for (int i=0;i<4;i++)
    {

        cout<<data.Top()<<" ";
        data2.Push(data.Top());
        data.Pop();

    }

    cout<<endl;
     cout<<"After Stack...."<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<data2.Top()<<" ";
        data.Push(data2.Top());
        data2.Pop();
    }

    data2.Push(3);

    return 0;
}
