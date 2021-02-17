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

void push(Node **head, int new_data)
{
    Node *temp = new Node(new_data);
    temp->next = (*head);
    (*head) = temp;
}

Node *addTwoLists(Node *first, Node *second)
{
    Node *res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum = 0;
    while (first != NULL || second != NULL)
    {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);

        carry = (sum >= 10) ? 1 : 0;

        sum = sum % 10;

        temp = new Node(sum);

        if (res == NULL)
            res = temp;
        else
            prev->next = temp;

        prev = temp;

        if (first != NULL)
            first = first->next;
        if (second)
            second = second->next;
    }

    if (carry > 0)
        temp->next = new Node(carry);

    return res;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *res = NULL;
    Node *first = NULL;
    Node *second = NULL;

    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printf("First List is ");
    printList(first);

    push(&second, 4);
    push(&second, 8);
    cout << "Second List is ";
    printList(second);

    res = addTwoLists(first, second);
    cout << "Resultant list is ";
    printList(res);

    return 0;
}