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

int numberOfLeaves(struct node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    
    struct node* ptr = root;
    if(ptr->left == NULL && ptr->right == NULL)
    {
        return 1;
    }
    else
    {
        return numberOfLeaves(ptr->left) + numberOfLeaves(ptr->right);
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
    cout<<endl;
    int Leaf = numberOfLeaves(root);
    cout<<Leaf;
    return 0;
}
