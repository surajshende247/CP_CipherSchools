#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


bool isPalindrome(Node *head){
    Node *slow = head;
    stack<int> s;
    while(slow!=NULL){
        s.push(slow->data);
        slow = slow->next;
    }
    while(head!=NULL){
        int i=s.top();
        s.pop();
        if(head->data!=i)
            return false;

        head = head->next;
    }
    return true;
}