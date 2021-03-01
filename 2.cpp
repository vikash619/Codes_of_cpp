// Implementing Stack using Link List

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

bool isfull(struct node* top)
{
    struct node* full = (struct node *)malloc(sizeof(struct node));
    if(full == NULL)
    {
        cout<<"Stack is overflow"<<endl;
        return true;
    }
    
    return false;
}

struct node* push(struct node* top, int data)
{
    if(isfull(top))
    {
       cout<<"Stack is Overflow ";
       return 0;
    }
    
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->next = top;
    top = temp;
    return top;
}

bool isEmpty(struct node* top)
{
    if(top == NULL)
    {
        return true;
    }
    
    return false;
}

int pop(struct node** top)
{
    if(isEmpty(*top) == true)
    {
        cout<<"Stack is Underflow ";
        return 0;
    }
    struct node* ptr = *top;
    *top = (*top)->next;
    int deleteNode = ptr->data;
    free(ptr);
    return deleteNode;
}

int main()
{
    struct node* top = NULL;
    struct node* ptr;
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    
    int deletenode;
    deletenode = pop(&top);
    deletenode = pop(&top);
    deletenode = pop(&top);
    
    
    ptr = top;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
    cout<<endl<<"Deleted data :"<<deletenode<<endl;
    
    return 0;
}
