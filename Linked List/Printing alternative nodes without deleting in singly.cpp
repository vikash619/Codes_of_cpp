#include <iostream>

using namespace std;

struct node {
    int data;
    struct node* next;
};


struct node* create(struct node* head, int data)
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
    ptr = temp;
    return head;
}

void display(struct node* head)
{
    struct node* ptr = head;
    
    int count = 0;
    
    while(ptr != NULL)
    {
       count++;
        ptr = ptr->next;
    }
    
    cout<<"count : "<<count<<endl;
    
    ptr = head;
    
    
    count = 0;
    while(ptr != NULL)
    {
        if(count%2==0)
        cout<<ptr->data<<" ";
        ptr = ptr->next;
        count++;
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
    
    display(head);
    
    return 0;
}
