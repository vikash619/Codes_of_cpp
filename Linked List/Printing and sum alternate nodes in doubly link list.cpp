// Printing and sum of alternative nodes of doubly linked List

#include <iostream>
using namespace std;

struct node {
    
    int data;
    struct node* prev;
    struct node* next;
};


struct node* insert_empty(struct node* head, int data)
{
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* insert_beg(struct node* head,int data){
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = head;
    head->prev= temp;
    head = temp;
    return head;
}

struct node* insert_end(struct node* head, int data)
{
    struct node* ptr = head;
    struct node* temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    temp->prev = ptr;
    return head;
}

int alternative_sum(struct node* head)
{
    int count = 0;
    int sum = 0;
    struct node* ptr = head;
    
    while(ptr != NULL)
    {
        if(count % 2 == 0)
        {
            sum = sum + ptr->data;
        }
        
        count++;
        
        ptr = ptr->next;
    }
    return sum;
}

void alternative(struct node* head)
{
    int count = 0;
    int sum = 0;
    struct node* ptr = head;
    
    while(ptr != NULL)
    {
        if(count % 2 == 0)
        {
            cout<<ptr->data<<" ";
        }
        
        count++;
        
        ptr = ptr->next;
    }
}

int main()
{
    struct node* head = NULL;
    struct node* ptr;
    head = insert_empty(head,20);
    head = insert_beg(head, 55);
    head = insert_end(head, 70);
    head = insert_end(head, 80);
    head = insert_end(head, 90);
    ptr = head;
    
    cout<<"Original Doubly Linked List :"<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
    cout<<endl<<endl<<"Priting Alternative Nodes of Linked List :"<<endl;
    alternative(head);
    cout<<endl;
    int result = alternative_sum(head);
    cout<<endl<<"Result of alternative Nodes : "<<result<<endl;
    return 0;
}
