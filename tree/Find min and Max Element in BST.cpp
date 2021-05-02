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

//Finding MINIMUM Element in BST 
int minElement(struct node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    
    struct node* ptr = root;
    while(ptr->left != NULL)
    {
        ptr = ptr->left;
    }
    return ptr->data;
}


//Finding MAXIMUM Element in BST 
int maxElement(struct node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    
    struct node* ptr = root;
    while(ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    return ptr->data;
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
    int minEle = minElement(root);
    cout<<minEle;
    
    cout<<endl;
    int maxEle = maxElement(root);
    cout<<maxEle;
  return 0;
}

