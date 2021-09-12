#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main()
{
    //T specifies here (in Which type)

    int n;
    cout<<"Enter The size of String: ";
    cin>>n;
    dynArr<string> d2(n);

    for(int i=0;i<d2.getsize();i++)
    {
        string sl;
        cin>>sl;
        d2.setValue(i,sl);
    }

    for(int j=0;j<d2.getsize();j++)
    {
        d2.getValue(j);
    }


    return 0;
}
