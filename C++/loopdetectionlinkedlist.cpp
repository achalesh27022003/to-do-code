// Floyd ALgo

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
          int data;
          Node *next;
};

void push(Node **head, int new_data)
{
    Node *newnode = new Node();
    newnode->data = new_data;
    newnode->next = *head;
    *head = newnode;
}
int detectloop(Node * list)
{
    Node *slowp = list, *fastp = list;
    while(slowp && fastp && fastp->next)
    {
        slowp = slowp->next;
        fastp = fastp->next->next;
        if(slowp == fastp){
            return 1;
        }
    }
    return 0;
}

int main()
{
    Node *head = NULL;
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 60);
    
    // Creating a loop 
    //head->next->next->next = head;
    if(detectloop(head))
    {
        cout<<"Loop Detected";
    }
    else{
        cout<<"No Loop";
    }
}
