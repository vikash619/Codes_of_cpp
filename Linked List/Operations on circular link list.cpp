#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};



// insert in empty circular link list
struct node* insertEmpty(struct node* tail,int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    
    if(tail==NULL)
    {
        tail = temp;
        temp->next = temp;
        return temp;
    }
    return 0;
}

// insert in the begining of circular link list
struct node* insertBegin(struct node* tail, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    temp->next = tail->next;
    tail->next = temp;
    return tail;
}

//insert at last in circular link list
struct node* insertLast(struct node* tail, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
    return tail;
}

// traversal in circular link list;
void traversal(struct node* tail)
{
    struct node* ptr = tail->next;
    
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr != tail->next);
}

// Adding node in middle of circular link list
struct node* insertMiddle(struct node* tail, int data, int index)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    
    struct node* p = tail->next;
    int ind = 0;
    while(ind < index)
    {
        p = p->next;
        ind++;
    }
    temp->next = p->next;
    p->next = temp;
    return tail;
}

int main()
{
    struct node* tail = NULL;
    int index = 2;
    tail = insertEmpty(tail,10);
    tail = insertBegin(tail, 20);
    tail = insertBegin(tail, 30);
    tail = insertBegin(tail, 40);
    tail = insertLast(tail,50);
    tail = insertLast(tail,60);
    tail = insertMiddle(tail,25, index);
    
    
    traversal(tail);

    return 0;
}
