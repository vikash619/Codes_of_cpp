// Palindrome in Singly Linked List.... no completed stuck in reversing list

#include <bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node* next;
};

struct node* insert(struct node* ptr, char data)
{
    struct node* current = (struct node *)malloc(sizeof(struct node));
    current->data = data;
    current->next = NULL;
    
    ptr->next = current;
    return current;
}

bool palindrome(struct node* ptr)
{
    if(ptr == NULL || ptr->next == NULL)
    {
        return true;
    }
    
    struct node* tortoise = ptr;
    struct node* rabbit = ptr;
    
    while(rabbit->next != NULL && rabbit->next->next != NULL)
    {
        tortoise = tortoise->next;
        rabbit = rabbit->next->next;
    }
    
    
    tortoise->next = 
    tortoise = tortoise->next;
    
    while(tortoise != NULL)
    {
        if(ptr->data != tortoise->data)
        {
            return false;
        }
        
        ptr = ptr->next;
        tortoise = tortoise->next;
    }
    return true;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    
    head->data = 'd';
    head->next = NULL;
    
    struct node* ptr = NULL;
    ptr = head;
    
    ptr = insert(ptr, 'e');
    ptr = insert(ptr, 'g');
    ptr = insert(ptr, 'g');
    ptr = insert(ptr, 'e');
    ptr = insert(ptr, 'v');
    
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
    cout<<endl<<palindrome(ptr)<<endl;
    return 0;
}
