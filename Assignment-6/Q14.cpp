#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) 
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    Node()
    {
        Node(0);
    }
};

void Print(Node *root, int k1, int k2)
{
    if(root==NULL)
    {
        return;
    }
    if(k1<root->data)
        Print(root->left, k1, k2);
    
    if(k1<=root->data && k2>=root->data)
        cout<<root->data<<" ";

    if(k2>root->data)
        Print(root->right, k1, k2);
}

int main()
{
    Node *root = new Node();     
    root = new Node(20); 
    root->left = new Node(8); 
    root->right = new Node(22); 
    root->left->left = new Node(4); 
    root->left->right = new Node(12); 
     
    Print(root, 10, 25); 
    return 0;
}