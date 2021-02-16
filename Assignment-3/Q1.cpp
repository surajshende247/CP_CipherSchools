#include <bits/stdc++.h>
using namespace std;
class Node
{
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
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void reverse()
    {
        Node *current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev= current;
            current=next;
        }
        head=prev;
    }
    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void push(int data){
        Node *temp = new Node(data);
        temp->next=head;
        head=temp;
    }
};

int main()
{

    return 0;
}