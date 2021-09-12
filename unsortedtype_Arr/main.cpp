#include <iostream>
#include "unsortedtype.cpp"
#include "unsortedtype.h"
#include "studentInfo.h"

using namespace std;

int main()
{

   unsortedtype <int> ob;


   ob.InsertItem(5);
   ob.InsertItem(7);
   ob.InsertItem(6);
   ob.InsertItem(9);


   cout<<"The full list : ";
   for(int i = 0;i<ob.LengthIs();i++){
        int temp ;
        ob.GetNextItem(temp);
        cout<<temp<<"  ";
    }
    cout<<endl;


    cout<<"Length of the list is: "<<ob.LengthIs()<<endl;


    ob.InsertItem(1);


    ob.ResetList();


   cout<<"The full list : ";
   for(int i = 0;i<ob.LengthIs();i++){
        int temp ;
        ob.GetNextItem(temp);
        cout<<temp<<"  ";
    }
    cout<<endl;


    cout<<endl<<"Retrieve item 4..."<<endl;

    bool found;
    int item=4;
    ob.RetrieveItem(item,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;



    cout<<endl<<"Retrieve item 5... "<<endl;
    int item2=5;
    ob.RetrieveItem(item2,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;


    cout<<endl<<"Retrieve item 9... "<<endl;
    int item4=9;
    ob.RetrieveItem(item4,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;


    cout<<endl<<"Retrieve item 10... "<<endl;
    int item3=10;
    ob.RetrieveItem(item3,found);
    if(found)
        cout<<"Item is found "<<endl;
    else
        cout<<"Item is not found "<<endl;
    cout<<endl;

    if(ob.isFull()){
        cout<<"The list is Full!"<<endl;
    }else{
        cout<<"The list is not Full!"<<endl;
    }
    cout<<endl;


    ob.DeleteItem(5);
    cout<<"5 is deleted."<<endl;
    cout<<endl;


    if(ob.isFull()){
        cout<<"The list is Full!"<<endl;
    }else{
        cout<<"The list is not Full!"<<endl;
    }
    cout<<endl;


    ob.DeleteItem(1);
    cout<<"1 is deleted."<<endl;
    cout<<endl;


    ob.ResetList();
   cout<<"The full list : ";
   for(int i = 0;i<ob.LengthIs();i++){
        int temp ;
        ob.GetNextItem(temp);
        cout<<temp<<"  ";
    }
    cout<<endl;


    ob.DeleteItem(6);
    cout<<"6 is deleted."<<endl;
    cout<<endl;


    ob.ResetList();
   cout<<"The full list : ";
   for(int i = 0;i<ob.LengthIs();i++){
        int temp ;
        ob.GetNextItem(temp);
        cout<<temp<<"  ";
    }
    cout<<endl;


    StudentInfo s1,s2,s3,s4;
    s1.SetId(12);
    s1.GetName("Rahbar");
    s1.GetCgpa(3.2);
    cout<<s1.GetId();
    unsortedtype<StudentInfo>si;
    si.InsertItem(s1);

    StudentInfo ps;
    for(int i=0;i<si.LengthIs();i++){

        si.GetNextItem(ps);
        ps.Print();
    }

}


