#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left, *right;
};
Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}
Node* insert(struct Node* node, int key){
	if (node == NULL) return newNode(key);
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);
	return node;
}
void preOrder(Node* node)
{
	if (node == NULL)return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}
int height(struct Node* node) 
{
   if (node==NULL) return 0;
   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);
       if (lDepth > rDepth) return(lDepth+1);
       else return(rDepth+1);
   }
} 
Node* buildBalancedTree(Node* root);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *root = NULL;
        int n, temp;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        // cout<<height(root)<<endl;
        root = buildBalancedTree(root);
        cout<<height(root)<<endl;
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/
// Your are required to complete this function
// function should return root of the modified BST
void inorder(Node *root, vector<int>&v){
    if(!root){
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right,v);
}
void init(Node *temp, int d){
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
}
Node *buildTree(int s, int e, vector<int>v){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    Node *ret=new Node();
    init(ret,v[mid]);
    ret->left=buildTree(s,mid-1,v);
    ret->right=buildTree(mid+1,e,v);
    return ret;
}
Node* buildBalancedTree(Node* root){
	// Code here
	vector<int>v;
	inorder(root,v);
	return buildTree(0,v.size()-1,v);
}
