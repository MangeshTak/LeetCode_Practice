#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;


int main()
{
    map<char,bool> track;
    string str="abc",str_new="";
    int count=0,i,j;
    
    for(i=0;i<str.length();i++)
    {
        if(!track[str[i]])
            {
                track[str[i]]=true;
                
                for(j=0;j<str.length();j++)
                {
                    if(str[i]==str[j])
                    {
                        count++;
                    }
                }
            str_new=str_new+str[i]+to_string(count);
            count=0;
             
            }
    }
    
    if(str.length()<str_new.length())
    {
        cout<<str;
    }
    else
    {
        cout<<str_new;
    }
 
   return 0;
}


