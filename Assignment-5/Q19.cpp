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

int largestSubtreeUtil(Node *root, int &ans)
{
    if (root == NULL)
        return 0;

    int currSum =root->data + largestSubtreeUtil(root->left, ans) + largestSubtreeUtil(root->right, ans);

    ans = max(currSum, ans);

    return currSum;
}

int largestSubtree(Node *root)
{
    if (root == NULL)
        return 0;

    int ans = INT_MIN;

    largestSubtreeUtil(root, ans);

    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(-2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(-6);
    root->right->right = new Node(2);

    cout <<"Largest Subtree Sum: "<<largestSubtree(root);
    return 0;
}