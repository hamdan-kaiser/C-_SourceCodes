#include<iostream>

using namespace std;

int main()
{
    int sizeOfArray;

    cout << "Enter the size of array  ";
    cin >> sizeOfArray;

    /**declaring array size*/
    int *arr = new int[sizeOfArray];
    for(int i=0;i<sizeOfArray;i++)
    {
        cin >> arr[i];
    }

    cout<< "Printing All values.... "<<endl;

    for(int j=0;j<sizeOfArray;j++)
    {
        cout << arr[j]<<" ";
    }

    cout << "\nDeleting All Values....";
    delete[] arr;

    return 0;


}
