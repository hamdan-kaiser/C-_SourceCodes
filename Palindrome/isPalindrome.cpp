#include<iostream>

using namespace std;

bool isPalindrome(string s);

int main()
{
    string name;
    getline(cin,name);

    cout<<isPalindrome(name);
    return 0;
}

bool isPalindrome(string s)
{

    int p = s.length()-1;
    for(int i=0;i<=p;i++)
    {
       for(int j=p;j>0;j--)
       {
           if (s[i] == s[j])
           {
              return true;
           }
           else
           {
               return false;
           }
       }
    }
    return false;
}
