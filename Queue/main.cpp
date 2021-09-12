#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType <int> data;
    int arr[5];
    int arr2[3];
    int x=0;;
    int i=0;
    int j=0;
    if(data.IsEmpty())
    {
        cout<<"Queue is empty!"<<endl;

    }
    else
        cout<<"Queue is not empty!"<<endl;


    data.Enqueue(5);
    data.Enqueue(7);
    data.Enqueue(4);
    data.Enqueue(2);


    if(data.IsEmpty())
    {
        cout<<"Queue is empty!"<<endl;

    }
    else
        cout<<"Queue is not empty!"<<endl;

    if(data.IsFull())
    {
        cout<<"Queue is full!"<<endl;

    }
    else
        cout<<"Queue is not Full!"<<endl;

    data.Enqueue(6);

        while(!data.IsEmpty())
        {
           data.Dequeue(arr[i]);
           i++;
        }

        for (;x<5;x++)
        {
            cout<<arr[x]<<" ";

            data.Enqueue(arr[x]);
        }

        cout<<endl;

     if(data.IsFull())
    {
        cout<<"Queue is full!"<<endl;

    }
    else
        cout<<"Queue is not Full!"<<endl;

        data.Enqueue(8);
        //Dequeue TWO items....
        data.Dequeue(x);

        data.Dequeue(x);

        //Dequeue three Items...

        data.Dequeue(x);

        data.Dequeue(x);

        data.Dequeue(x);

        if(data.IsEmpty())
        {
            cout<<"Queue is Empty!"<<endl;
        }

        else cout<<"Queue is not empty!"<<endl;

        //Dequeue another one....
        data.Dequeue(x);

    return 0;
}
