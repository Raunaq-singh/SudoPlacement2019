// C program to find n'th Node in linked list
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
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
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
int maxPalindrome(Node *);
/* Driver program to test above function*/
int main()
{
    int T,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
      
       cout << maxPalindrome(head)<<endl;
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/* The Node is defined 
  struct Node
  {
     int data;
     Node *next;
  } */
/*The function below returns an int denoting
the length of the longest palindrome list. */
int palinLen(Node *h1, Node *h2){
    int ret=0;
    while(h1 && h2){
        ret+=(h1->data == h2->data);
        if(h1->data != h2->data){
            return ret;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return ret;
}
int maxPalindrome(Node *head){
    //Your code here
    Node *prev=NULL;
    Node *next=head->next;
    Node *curr=head;
    int ans=0;
    while(curr){
        next=curr->next;
        curr->next=prev;
        ans=max(ans,2*palinLen(curr,next));
        ans=max(ans,2*palinLen(prev,next)+1);
        prev=curr;
        curr=next;
    }
    return ans;
}