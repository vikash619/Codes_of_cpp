#include <iostream>
using namespace std;

struct node{
    struct node* left;
    int data;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node =(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

void printPostOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    printPostOrder(node->left);
    
    printPostOrder(node->right);
    
    cout<<node->data<<" ";
}

void printInOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    printPostOrder(node->left);
    
    cout<<node->data<<" ";
    
    printPostOrder(node->right);
}

void printPreOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    cout<<node->data<<" ";
    
    printPostOrder(node->left);
    
    printPostOrder(node->right);
}

int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    
    root->left->left = newNode(4);
    root->right->right = newNode(5);
    
    root->left->left->left = newNode(6);
    root->right->right->right = newNode(7);
    
    cout<<"Post order"<<endl;
    printPostOrder(root);
    cout<<endl<<"In order"<<endl;
    printInOrder(root);
    cout<<endl<<"Pre order"<<endl;
    printPreOrder(root);
  
    return 0;
}
