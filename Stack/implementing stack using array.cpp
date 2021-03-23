#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *arr;
};

// checking empty
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    
    return 0;
}

// checking full
int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    
    return 0;
    
}

// push operation 
void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        cout<<"Stack overflow"<<endl;
        
    }
    
    ++ptr->top;
    ptr->arr[ptr->top] = val;
}

// pop operation
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    
    int val = ptr->arr[ptr->top];
    --ptr->top;
    return val;
}

//traversal
void traversal(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"stack underflow"<<endl;
    }
    
    int val = 1 + ptr->top;
    for(int i = val; i > -1  ; i--)
    {
        cout<<ptr->arr[i]<<" ";
        
    }
}
int main()
{
    
  //creating dynamic array
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
  sp->size = 80;
  sp->top = -1;
  sp->arr = (int *)malloc(sp->size*sizeof(int));
  
  push(sp,10);
  push(sp,20);
  push(sp,30);
  push(sp,40);
  int element  = pop(sp);
  cout<<"popped element "<<element<<endl;
  cout<<sp->top<<endl;
  traversal(sp);
  return 0;
}
