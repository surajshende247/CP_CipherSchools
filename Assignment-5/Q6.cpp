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

int sumBT(Node *root)
{
    if (root == NULL)
        return 0;
    return (root->data + sumBT(root->left) + sumBT(root->right));
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->right = new Node(8);

    int sum = sumBT(root);
    cout << "Sum of all the elements is: " << sum << endl;

    return 0;
}