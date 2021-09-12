#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{
    sortedtype <int> data;

    //creating list of integers...

    data.InsertItem(5);
    data.InsertItem(7);
    data.InsertItem(4);
    data.InsertItem(2);
    data.InsertItem(1);


    for(int i=0; i<data.LengthIs();i++)
    {
         int num;
        data.GetNextItem(num);
        cout<<num<<" ";
    }

    cout<< "\nLength of The list: "<<data.LengthIs();



    bool found;
    int item  = 5;

    data.RetrieveItem(item,found);

    if(found)
    {
        cout<<"\nFound!";
    }

    else
    {
        cout<<"\nNot Found!";
    }

    if(data.IsFull())
    {
        cout<<"\nFull!";
    }
    else
        cout<<"\nNot Full";

    data.DeleteItem(1);

    data.ResetList();
    cout<<"\n";
    for(int i=0; i<data.LengthIs();i++)
    {
         int num;
        data.GetNextItem(num);
        cout<<num<<" ";
    }


    return 0;
}
