#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int a[3][3];
   int i,j;
   int r[3];
   int c[3];
   
   for(i=0;i<3;i++)
   {
       r[i]=1;
       c[i]=1;
       
       for(j=0;j<3;j++)
       {
           a[i][j]=1;
       }
   }
   
   a[0][1]=0;
   a[2][2]=0;

   cout << "input is:"<<endl;
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<a[i][j];
       }
       cout << endl;
   }
   
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(a[i][j]==0)
           {
               r[i]=0;
               c[j]=0;
           }
       }
   }
   
   for(i=0;i<3;i++)
   {
     if(r[i]==0)
     {
       for(j=0;j<3;j++)
       {
           a[i][j]=0;
       }  
     }
     
     if(c[i]==0)
     {
       for(j=0;j<3;j++)
       {
           a[j][i]=0;
       }  
     }
       
   }
   
   cout << "output is:"<<endl;
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<a[i][j];
       }
       cout << endl;
   }
   
   
   return 0;
}