//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
// your task is to complete this functionh
// function should return the width of the tree
int verticalWidth(Node* root);
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout<<verticalWidth(root)<<endl;
  }
  return 0;
}
//Position this line where user code will be pasted.
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Structure of node of binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
// your task is to complete this functionh
// function should return the width of the tree
void verticalW(Node *root, int *mn, int *mx, int level){
    if(!root){
        return;
    }
    *mn=min(level,*mn);
    *mx=max(level,*mx);
    verticalW(root->left,mn,mx,level-1);
    verticalW(root->right,mn,mx,level+1);
}
int verticalWidth(Node* root){
    // Code here
    int mn=INT_MAX;
    int mx=INT_MIN;
    verticalW(root,&mn,&mx,0);
    return mx-mn+1;
}