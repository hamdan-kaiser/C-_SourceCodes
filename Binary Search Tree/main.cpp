#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"
using namespace std;

int main()
{
    bool found = false;
    TreeType<int> tree;
    if(tree.IsEmpty())
        cout<<"Tree is Empty!"<<endl;
    else
        cout<<"Tree is not Empty!"<<endl;
    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(tree.IsEmpty())
        cout<<"Tree is Empty!"<<endl;
    else
        cout<<"Tree is not Empty!"<<endl;

    cout<<"Length of the tree is: "<<tree.LengthIs()<<endl;
    int x = 9;
    tree.RetrieveItem(x,found);

    if(found == true)
        cout<<"Item Found!"<<endl;
    else
        cout<<"Item not found!"<<endl;

        int y = 13;
    tree.RetrieveItem(y,found);

    if(found == true)
        cout<<"Item Found!"<<endl;
    else
        cout<<"Item not found!"<<endl;

    return 0;
}
