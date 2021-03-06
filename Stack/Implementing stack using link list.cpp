#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

int isEmpty(struct node* top)
{
    if(top == NULL)
    {
        return 1;
    }
    
    return 0;
}

int isFull(struct node* top)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    
    if(temp == NULL)
    {
        return 1;
    }
    
    return 0;
}

struct node* push(struct node* top, int data)
{
    if(isFull(top))
    {
        cout<<"Stack overflow"<<endl;
    }
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = top;
    top = temp;
    return top;
}

int pop(struct node** top)
{
    if(isEmpty(*top))
    {
        cout<<"Stack is Underflow";
        return 0;
    }
    
    struct node* p = *top;
    *top = (*top)->next;
    int data = p->data;
    
    free(p);
    return data;
}

void traversal(struct node* top)
{
    struct node* ptr = top;
    
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
  struct node* top = NULL;
  top = push(top,10);
  top = push(top, 20);
  top = push(top, 30);
  
  
  
  traversal(top);
  
  int popped = pop(&top);
  cout<<"Popped Element : "<<popped<<endl;
  
  traversal(top);
  

    return 0;
}
