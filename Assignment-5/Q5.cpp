#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        Node(0);
    }
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node* root, int& ans)
{
    if(root==NULL)
        return 0;

    int lef_height = height(root->left, ans);
    int right_height = height(root->right, ans);

    ans = max(ans, 1+lef_height+right_height);
    
    return 1 + max(lef_height, right_height);
}

int diameter(Node* root){
    if(root==NULL)
        return 0;
    int ans = INT_MIN;
    height(root, ans);
    return ans;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    cout<<"Diameter is "<<diameter(root);
    return 0;
}