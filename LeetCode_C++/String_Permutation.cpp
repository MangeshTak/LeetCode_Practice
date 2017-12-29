#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

string sort_string(string str)
{
   int i,j,min;
   char temp;
   
   for(i=0;i<str.length()-1;i++)
   {
       min=i;
       
       for(j=i+1;j<str.length();j++)
       {
           if(str[min]>str[j])
           {
               min=j;
           }
       }
       
       temp=str[i];
       str[i]=str[min];
       str[min]=temp;
   }
   
   return str;
}

int main()
{
   string str="mangesh",str1="mnagesh";
   string str_rev, str1_rev;
   
   str_rev=sort_string(str);
   str1_rev=sort_string(str1);
   
   if( str_rev.compare(str1_rev) !=0 )
   {
       cout<<"false";
   }
   else
   {
       cout<<"true";
   }
   
   return 0;
}


