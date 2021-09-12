#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    //class with no constructor
    dynarr da;
    dynarr d2(5);
    //d2.getsize(n);
    int n;
    cin>> n;
    for(int i=0;i<5;i++)
    {
        int number;
        cin>>number;
        d2.setValue(i, number);
    }
    for(int j=0;j<5;j++)
    {
        d2.getValue(j);
    }
    return 0;
}
