#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

int main()
{
    SortedType <timeStamp> data;
    timeStamp time1(15,34,23);
    timeStamp time2(13,13,02);
    timeStamp time3(43 ,45, 12);
    timeStamp time4(25 ,36 ,17);
    timeStamp time5(52, 02, 20);


    data.InsertItem(time1);
    data.InsertItem(time2);
    data.InsertItem(time3);
    data.InsertItem(time4);
    data.InsertItem(time5);

    timeStamp t;
    for (int i=0;i<data.LengthIs();i++)
    {

        data.GetNextItem(t);
        t.print();
    }

    return 0;
}
