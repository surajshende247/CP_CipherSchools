#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node**);
bool comapreLists(Node*, Node*);

bool isPalindrome(Node *head){
    Node *slow_ptr = head, *fast_ptr =head;
    Node *second_half, *prev_of_slow_ptr=head;
    Node *midnode=NULL;
    bool res=true;

    if(head!=NULL && head->next!=NULL){
        while(fast_ptr!=NULL && fast_ptr->next!=NULL){
            prev_of_slow_ptr=slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        if(fast_ptr!=NULL){
            midnode = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        second_half = slow_ptr;
        prev_of_slow_ptr->next=NULL;
        reverse(&second_half);

        if(midnode != NULL){
            prev_of_slow_ptr->next = midnode;
            midnode->next = second_half;
        }
        else{
            prev_of_slow_ptr->next = second_half;
        }
    }
    return res;
}

void reverse(Node **head_ref)
{
    Node *prev=NULL;
    Node *current = *head_ref;
    Node *next;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    *head_ref = prev;
}

bool compareLists(Node *head1, Node *head2){
    Node* temp1 =head1;
    Node* temp2 =head2;

    while(temp1 && temp2){
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }else
        {
            return 0;
        }
    }

    if(temp1==NULL && temp2==NULL){
        return 1;
    }

    return 0;
}

void push(Node** head_ref, int data){
    Node *new_node =new Node(data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *ptr){
    while(ptr!=NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    int arr[]={1,2,3,4,5,6,5,4,3,2,1};
    for(int i=0; i<11; i++){
        push(&head, arr[i]);
        printList(head);
        isPalindrome(head) ? printf("Is Palindrome\n\n") : printf("Not Palindrome\n\n"); 
    }
    return 0;
}



/*include <bits/stdc++.h>
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

int main(){
 
    // Addition of linked list 
    Node one =  Node(1);
    Node two = Node(2);
    Node three = Node(3);
    Node four = Node(2);
    Node five = Node(1);
 
  
    five.next = NULL;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = &five;
    Node* temp = &one;
 
     
    // Call function to check palindrome or not 
    int result = isPalindrome(&one);
   
    if(result == 1)
            cout<<"isPalindrome is true\n";
    else
        cout<<"isPalindrome is true\n";
 
return 0;
}*/

