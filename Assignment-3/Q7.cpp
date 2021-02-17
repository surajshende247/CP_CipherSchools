#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
int data;
Node *next;
Node(){
    Node(0);
}

Node(int data){
    this->data = data;
}

};

Node *rearrangeEvenOdd(Node *head){
    if(head==NULL)
        return NULL;
    
    Node *odd=head;
    Node *even=head->next;

    Node *evenFirst=even;

    while(1)
    {
        if(!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }
        odd->next = even->next;
        odd=even->next;

        if(odd->next==NULL){
            even->next=NULL;
            odd->next = evenFirst;
            break;
        }

        even->next = odd->next;
        even = odd->next;
    }
    return head;
}

void printlist(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"->";
        node=node->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node *head = new Node(1);  
    head->next = new Node(2);  
    head->next->next = new Node(3);  
    head->next->next->next = new Node(4);  
    head->next->next->next->next = new Node(5);  
  
    cout << "Given Linked List\n";  
    printlist(head);  
  
    head = rearrangeEvenOdd(head);  
  
    cout << "Modified Linked List\n";  
    printlist(head);  

    return 0;
}