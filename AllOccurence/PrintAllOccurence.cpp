#include<iostream>

using namespace std;
void PrintAlloccurences(string str,char ch);

int main()
{
    string name;
    //char ip[0] = {};
    cout<< "----------------------"<<endl;
    getline(cin,name);
    //cin>> ip[0];
    PrintAlloccurences(name,'a');
}


void PrintAlloccurences(string str,char ch)
{
    int findMyString = str.find(ch);

    while(true)
    {
        if(findMyString == string::npos)
        {
            cout<< "Finished Searching!";
            break;
        }
        else{
            cout<<findMyString<<endl;
            findMyString = str.find(ch,findMyString+1);
        }
    }
}
