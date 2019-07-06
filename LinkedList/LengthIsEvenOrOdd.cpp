#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
// Function to check the length of linklist
int isLengthEvenOrOdd(struct Node* head);
	
// Push function
void push(struct Node** head, int info)
{
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->data = info;
	node->next = (*head);
	(*head) = node;
}
// Driver function
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            push(&head, tmp);
        }
        if( isLengthEvenOrOdd(head) == 0) cout<<"Even
";
        else cout<<"Odd
";
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
    int ret=0;
    Node *temp=head;
    while(temp){
        temp=temp->next;
        ret=ret^1;
    }
    return ret;
}