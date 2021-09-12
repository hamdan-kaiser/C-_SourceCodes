#include<iostream>

using namespace std;

int factorial(int num);
int combination(int n,int r);
int main()
{
    int a;
    cin>>a;
    cout<< factorial(a)<<endl;;

    cout<< combination(7,3);
}

int factorial(int num)
{
    int i;
    int temp =1;
    int result;

    for(int i=num; i>0;i--)
    {
        temp *= i;

    }
    result = temp;

    return result;
}

int combination(int n,int r)
{
    int result = factorial(n)/(factorial(r)*(factorial(n-r)));

    return result;
}
