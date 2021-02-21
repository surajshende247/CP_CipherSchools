//Tree preorder recursively
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

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{

    Node *root = new Node(0);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(7);
    preOrder(root);
    return 0;
}