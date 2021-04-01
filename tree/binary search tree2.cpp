#include <bits/stdc++.h>
using namespace std;

struct node{
    struct node* left;
    int roll;
    char name[30];
    struct node* right;
};

struct node* newNode(int roll, char name[])
{
    struct node* node =(struct node*)malloc(sizeof(struct node));
    node->roll = roll;
    strcpy(node->name,name);
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

struct node* insertion(struct node* root, int roll, char name[])
{
    if(root == NULL)
    {
        return newNode(roll,name);
    }
    
    if(roll < root->roll)
    {
        root->left = insertion(root->left,roll,name);
    }
    else if(roll > root->roll)
    {
        root->right = insertion(root->right, roll,name);
    }
    
    return root;
}

struct node* iterativeSearch( struct node* root, int roll, char name[]){
    
    
    if(root == NULL)
    {
        return root;
    }
    else
    {
        struct node* temp = root;
        
        while(temp != NULL)
        {
            if(roll == temp->roll)
            {
                return temp;
            }
            else if(roll < temp->roll)
            {
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
    }
    
    return NULL;
}



void printPostOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    printPostOrder(node->left);
    
    printPostOrder(node->right);
    
    cout<<node->roll<<" "<<endl;
    cout<<node->name<<" "<<endl;
}

void printInOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    printPostOrder(node->left);
    
    cout<<node->roll<<" "<<endl;
    cout<<node->name<<" "<<endl;
    
    printPostOrder(node->right);
}

void printPreOrder(struct node* node)
{
    if(node == NULL)
    {
        return;
    }
    
    cout<<node->roll<<" "<<endl;
    cout<<node->name<<" "<<endl;
    
    printPostOrder(node->left);
    
    printPostOrder(node->right);
}

int main()
{

    struct node* root = NULL;
    root = insertion(root, 100, "Akash");
    
    insertion(root, 90, "Vikash");
    insertion(root, 110, "Aman");
    insertion(root, 80, "Nitesh");
    insertion(root, 95, "Kunal");
    insertion(root, 105, "Hitesh");
    insertion(root, 120, "Akhtar");
   
    cout<<endl;
    printInOrder(root);
    cout<<endl;
    printPreOrder(root);
    cout<<endl;
    printPostOrder(root);
    
    return 0;

}
