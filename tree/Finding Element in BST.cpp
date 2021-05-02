#include <iostream>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};


// Insert in BST
struct node* insert(struct node* root, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    
    if(root == NULL)
    {
        root = temp;
        return root;
    }
    if(temp->data < root->data)
    {
        root->left = insert(root->left, data);
    }
    if(temp->data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
//Finding if ELEMENT is present in BST or NOT
bool search(struct node* root, int data)
{
    if(root == NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(data < root->data)
    {
        search(root->left, data);
    }
    else
    {
        search(root->right, data);
    }
}

int main()
{
    struct node* root = NULL;
    
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 70);
    root = insert(root, 60);
   if(search(root, 2))
        cout<<"True"<<endl;
    else
        cout<<"false"<<endl;
  return 0;
}
