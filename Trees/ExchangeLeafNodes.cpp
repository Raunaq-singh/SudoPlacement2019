//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
void printInorder(Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
void pairwiseSwap(Node *root);
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     pairwiseSwap(root);
     printInorder(root);
     cout<<"
";
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
Node *swp=NULL;
void pwSwap(Node *root){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        if(!swp){
            swp=root;
        }else{
            swap(swp->data,root->data);
            swp=NULL;
        }
        return;
    }
    pwSwap(root->left);
    pwSwap(root->right);
}
void pairwiseSwap(Node *root){
    swp=NULL;
    pwSwap(root);
    // code here
}