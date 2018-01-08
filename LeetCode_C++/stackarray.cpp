#include <iostream>

using namespace std;

class queue {
    
    public:
    int front=-1;
    int rear=-1;
    int a[1000];
    
    void push(int d){
        
        if (front==-1){
            a[++front]=d;
            ++rear;
        }
        else{
            a[++rear]=d;
        }
        
    }
    
    int pop(){
        
        if(front!=-1){
            return a[front++];
        }
        return -1;
    }
};

int main()
{
   queue s;
  
   s.push(1);
   s.push(2);
   s.push(3);
   int sp = s.pop();
   sp = s.pop();
  
   cout<<sp;
  
}