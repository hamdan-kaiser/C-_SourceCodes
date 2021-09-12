#include <iostream>
#include"complex.h"

using namespace std;

int main()
{
    Complex c1(3,5);
    Complex c2(3,5);

    if(c1 !=c2)
    {
        cout<<"Not Equal"<<endl;
    }
    else
        cout<<"Equal"<<endl;

        Complex c3=c1*c2;
    c3.Print();
    return 0;
}
