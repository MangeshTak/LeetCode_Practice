#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="mangesh",s2="angeshm";
    string s11=s1+s1;
    int n;
    n=s11.find(s2);
    if(n!=-1)
    {
        cout<<"It is rotation";
    }
    else
    {
        cout<<"It is not a rotation";
    }
   return 0;
}