#include<iostream>

using namespace std;

void incrementValue(int *x);

void incrementValue(int *x)
{
    *x +=1;
    cout <<"After Increment: "<< *x;
}

int main()
{
    int n;
    cin>> n;
    int *p = &n;
    cout << "Before Increment: "<<n<<endl;
     incrementValue(p);
    return 0;
}
