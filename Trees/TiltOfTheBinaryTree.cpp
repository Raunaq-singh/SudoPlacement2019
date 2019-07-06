//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int val;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->val = data;
	temp->left = temp->right = NULL;
	return temp;
}
int tiltTree(Node* root);
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
     cout<<tiltTree(root)<<endl;
  }
  return 0;
}
// Contributed by: Harshit Sidhwa
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
struct Node {
	int val;
	struct Node *left, *right;
};
*/
// Your are required to complete this function
// function should return the tilt of the tree
pair<int,int> sum(Node *root){
    if(!root){
        return make_pair(0,0);
    }
    pair<int,int>sumL,sumR;
    sumL=sum(root->left);
    sumR=sum(root->right);
    return make_pair(sumL.first+sumR.first+root->val,
                abs(sumL.first-sumR.first)+sumL.second+sumR.second);
}
int tiltTree(Node* root){
	// Code here
	return sum(root).second;
}