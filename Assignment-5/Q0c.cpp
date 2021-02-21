//Tree postOrder recursively
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        Node(0);
    }
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void postOrder(Node* root)
{
    if(root==NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}


int main()
{
    Node* root = new Node(0);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(7);
    postOrder(root);
    return 0;
}