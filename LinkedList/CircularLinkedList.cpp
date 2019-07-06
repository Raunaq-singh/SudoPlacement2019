#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        if (k==1 && n >= 1)
              tail->next = head;
    printf("%d
", isCircular(head));
    }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head){
   // Your code here
   Node *temp=head->next;
   while(temp){
       if(temp==head){
           return true;
       }
       temp=temp->next;
   }
   return false;
}
