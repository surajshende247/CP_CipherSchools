#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }
    Node(int data)
    {
        this->data = data;
    }
};

Node* intersectionPoint(Node *head1, Node* head2)
{
    Node* ptr1= head1;
    Node* ptr2= head2;

    if(ptr1==NULL || ptr2==NULL){
        return NULL;
    }

    while(ptr1!=ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
}

int main()
{
    return 0;
}