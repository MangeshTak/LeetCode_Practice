#include <iostream>

using namespace std;

class node {
    
    public:
    node *next = NULL;
    int data;
    
    node(int d) {
        data=d;
    }
};

class stack {
    
    public:
    
    node *top;
    
    int peek() {
        return top->data;
    }
    
    void push(int d) {
        node *t = new node(d);
        t->next = top;
        top = t;
    }
    
    int pop() {
        
        if(top != NULL) {
            int item = top->data;
            top=top->next;
            return item;
        }
        return -1;
    }
};

int main()
{
   stack s;
   s.push(1);
   s.push(2);
   s.push(3);
   int st = s.pop();
   int dt = s.pop();
   dt = s.pop();
   cout<<dt;
   
   return 0;
}