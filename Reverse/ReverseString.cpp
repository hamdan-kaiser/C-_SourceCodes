#include<iostream>
using namespace std;
string ReverseString(string str);
int main()
{
    string name;
    cout << "Enter Your String... ";
    getline(cin,name);
    string store = ReverseString(name);
    cout << store;
    return 0;
}
string ReverseString(string str)
{
    int i;
    string updated = "";
    for(i = str.length()-1; i >=0; i--)
    {
        updated+= str[i];
    }
    return updated;
}
