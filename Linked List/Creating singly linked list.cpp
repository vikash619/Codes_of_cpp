
#include <iostream>

using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* create(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    struct node* ptr = head;
    if(ptr == NULL)
    {
        head = temp;
        return head;
    }
    
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    return head;
}

struct node* insertAtBeg(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head = temp;
    return head;
}

struct node* deletetAtBeg(struct node* head)
{
    struct node* ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}


struct node* insertAtmiddle(struct node* head, int data, int index)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    struct node* ptr = head;
    int incre = 0;
    
    
    while(incre < index-1 )
    {
        ptr = ptr->next;
        incre++;
    }
    
    temp->next = ptr->next;
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
int main()
{
    struct node* head = NULL;
    
    head = create(head, 10);
    head = create(head, 20);
    head = create(head, 30);
    head = create(head, 40);
    head = create(head, 50);
    head = create(head, 60);
    head = create(head, 70);
    head = insertAtBeg(head, 5);
    head = insertAtBeg(head, 2);
    head = insertAtBeg(head, 1);
    head = insertAtmiddle( head, 45, 5);
    head = deletetAtBeg(head);
    head = deletetAtBeg(head);
    
    display(head);

    return 0;
}
