#include<iostream>

using namespace std;
void swap1(int *a, int *b);
void swap1(int *a, int *b)
{
    int temp =0;

    temp = *a;
    *a = *b;
    *b = temp;

    cout << "After Swapping:  "<<*a << "  "<<*b;
}

int main()
{
    int x,y;
    cin >> x;
    cin >> y;

    int *a = &x;
    int *b = &y;

    cout <<"before Swapping: "<< x<< "  "<<y<<endl;
   swap1(a,b);
}
