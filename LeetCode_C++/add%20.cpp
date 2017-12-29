#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


int main()
{
   string str="ma ngesh";
    int i,space_count=0,new_length,j=0;
    
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
            space_count++;
    }
    
    new_length=str.length()+2*space_count;
    char new_str[new_length];
    
    cout<<new_length<<endl;
    
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            new_str[j]='%';
            j++;
            new_str[j]='2';
            j++;
            new_str[j]='0';
            j++;
        }
        else
        {
            new_str[j]=str[i];
            j++;
        }
    }
    
    cout<<new_str;
   return 0;
}


