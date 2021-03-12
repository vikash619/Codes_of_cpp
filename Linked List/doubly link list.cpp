#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* insertEmpty(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
    {
        head = temp;
        return head;
    }
    return 0;
}

void traversal(struct node* head)
{
    struct node* ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

struct node* insertEnd(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    struct node* ptr = head;
    
    if(ptr==NULL)
    {
        head = temp;
        return head;
    }
    
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
        
    ptr->next = temp;
    temp->next = NULL;
    temp->prev = ptr;
    return head;
}

struct node* insertBegin(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    struct node* ptr = head;
    if(ptr == NULL)
    {
        head = temp;
        return head;
    }
    
    temp->next = ptr;
    head = temp;
    return head;
}

struct node* insertMid(struct node* head, int data, int index)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    
    struct node* ptr = head;
    if(ptr == NULL)
    {
        head = temp;
        return head;
    }
    int ind = index-1;
    int p = 0;
    while(p<ind)
    {
        ptr = ptr->next;
        p++;
    }
    
    temp->next = ptr->next;
    ptr->next = temp;
    temp->prev = ptr;
    
    return head;
}

int main()
{
    struct node* head = NULL;
    
    head = insertEmpty(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertBegin(head, 5);
    head = insertBegin(head, 3);
    head = insertBegin(head, 1);
    head = insertMid(head, 15,4);
    traversal(head);
    return 0;
}
