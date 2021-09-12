#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> data;
    UnsortedType<int> data2;
    UnsortedType<int> data3;
    int m,n;
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        data.InsertItem(num);

    }

    cin>>n;

    for(int j=0;j<n;j++)
    {
        int num;
        cin>>num;
        data2.InsertItem(num);

    }

    for(int i=0;i<data.LengthIs();i++)
    {
        for(int j=0;j<data2.LengthIs();j++)
        {
            int num,num1,num2;
            data.GetNextItem(num1);
            data2.GetNextItem(num2);

            if(num1 < num2)
            {
                data3.GetNextItem(num);
                //data2.GetNextItem();
            }
        }
    }
    for(int k=0;k<data3.LengthIs();k++)
    {
        int num;
        data3.GetNextItem(num);
        cout<<num<<" ";
    }



    return 0;
}
