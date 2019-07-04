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
int kthAncestor(Node *root, int k, int node);
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
     int k, node;
     cin>>k>>node;
     cout<<kthAncestor(root, k, node)<<"
";
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
int kthAncestor(Node *root, int k, int node){
    int parent[10001];
    parent[root->data]=-1;
    queue<Node*>q;
    q.push(root);
    Node *temp=NULL;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->left){
            parent[temp->left->data]=temp->data;
            q.push(temp->left);
        }
        if(temp->right){
            parent[temp->right->data]=temp->data;
            q.push(temp->right);
        }
    }
    
    int chk=node;
    int count=0;
    while(chk!=-1){
        chk=parent[chk];
        count++;
        if(count==k){
            break;
        }
    }
    if(count==k){
        return chk;
    }else{
        return -1;
    }
}
