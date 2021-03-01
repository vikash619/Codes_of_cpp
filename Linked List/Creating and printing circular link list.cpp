// Circlular Linked List but there is some bug

#include <iostream>
using namespace std;

struct node{
    
    int data;
    struct node* next;
};

int main()
{
    
    struct node* one = (struct node*)malloc(sizeof(struct node));
    one->data = 10;
    one->next = NULL;
    
    struct node* two = (struct node*)malloc(sizeof(struct node));
    two->data = 20;
    two->next = NULL;
    one->next = two;
    
    struct node* last = (struct node*)malloc(sizeof(struct node));
    last->data = 30;
    last->next = one;
    
    
    struct node *ptr =  NULL;
    ptr = last->next;
    
    do{
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    while(ptr != last->next);
    cout<<ptr->data<<endl;
    
    return 0;
}
