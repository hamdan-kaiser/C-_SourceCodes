#include<iostream>
using namespace std;

int main()
{
    int size,n;
    cin >> size;
    double **d = new double* [size];
    cin >> n;
    for(int i=0; i<size; ++i)
    {

            d[i] = new double[n];
    }
    for(int i=0;i<size;i++)
    {
        for (int j=0;j<n;j++)
        {
            d[i][j] = i;
        }
    }
    for(int i=0;i<size;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << " "<<d[i][j]<<" ";
        }
    }
    cout<< "Deleting Array...."<<endl;
    for(int i=0; i<size; ++i)
    {

            delete[] d[i];
    }
return 0;
}
