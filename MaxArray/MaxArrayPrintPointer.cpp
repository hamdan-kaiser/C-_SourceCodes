#include<iostream>
5 8 9 2 4
using namespace std;
void printArray(int *arr, int size1);
void printArray(int *arr, int size1)
{   int max=0;
    cout << "Index\tAddress\tValue"<<endl;
    for(int i=0; i<size1; i++)
    {
        cout << i <<"\t"<<arr+i<< "\t"<<*(arr+i)<<endl;
        if(*(arr+i)>*(arr+max)) max=i;
    }
    arr[max];
}

int main()
{
    int n;
    cin >> n;
    int randomArray[n];
    int *p;
    //first address is required...
    p = &randomArray[0];
    for (int i=0; i<n; i++)
    {
        cin >> randomArray[i];
    }
    printArray(p,n);
}
