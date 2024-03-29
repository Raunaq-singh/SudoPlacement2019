#include <stdio.h>
#include <stdlib.h>
 
/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
};
void deleteNode(struct Node **head_ref,int temp);
 struct Node* newNode(struct Node* head,int data){
	 struct Node *p,*temp= (struct Node*)malloc(sizeof(struct Node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head; 
	 }    
 
/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *Node)
{
  while(Node!=NULL)
  {
   printf("%d ", Node->data);
   Node = Node->next;
  }
   printf("
");
}
 
/* Drier program to test above functions*/
int main()
{
  int t,x,n,i;
  scanf("%d",&t);
  while(t--)
  {
  /* Start with the empty list */
  struct Node *temp,*head = NULL;
   scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&x);
   /* Let us create the doubly linked list 10<->8<->4<->2 */
  head=newNode(head, x);
  }
  //printList(head);
  temp=head;
  scanf("%d",&x);
  // x=rand()%n;
 // x=x-1;
  /* delete Nodes from the doubly linked list */
//  while(x--)
//  temp=temp->next;
	
  deleteNode(&head,x);  /*delete first Node*/  
  /* Modified linked list will be NULL<-8->NULL */
  printList(head);           
  while(head->next!=NULL)
  {
	  temp=head;
	  head=head->next;
	  free(temp);
	  }
	  free(head);
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*struct Node
{
  int data;
  Node *next;
  Node *prev;
};
 */
void deleteNode(Node **head_ref, int x){
  //Your code here
  Node *temp=*head_ref;
  int ind=1;
  while(ind!=x && temp){
      temp=temp->next;
      ind++;
  }
  if(temp->next==NULL){
      temp->prev->next=temp->next;
      return;
  }
  if(temp->prev==NULL){
      temp->next->prev=temp->prev;
      *head_ref = (*head_ref)->next;
      return;
  }
  temp->next->prev=temp->prev;
  temp->prev->next=temp->next;
  return;
}