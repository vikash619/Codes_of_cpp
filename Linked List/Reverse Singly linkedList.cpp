#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* insert(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    
    if(head == NULL)
    {
        head = temp;
        return head;
    }
    
    struct node* ptr = head;
    
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    return head;
}

void display(struct node* head)
{
    struct node* ptr = head;
    
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

void reverse(struct node* head)
{
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;
    
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    struct node* ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        
    }
}

int main()
{
    struct node* head = NULL;
    
    
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    display(head);
    cout<<endl;
    reverse(head);
    return 0;
}
