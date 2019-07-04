#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
// A utility function to do inorder traversal
void inorder(struct Node *root)
{
	if (root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
/* A utility function to insert a new Node with given key in BST */
struct Node* insert(struct Node* node, int key)
{
	/* If the tree is empty, return a new Node */
	if (node == NULL) return new Node(key);
	/* Otherwise, recur down the tree */
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);
	/* return the (unchanged) Node pointer */
	return node;
}
void printCommon(Node *root1, Node *root2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n1,n2,tmp;
	 cin>>n1;
	 Node *root1 = NULL;
	 for(int i=0; i<n1; i++){
	     cin>>tmp;
	     root1 = insert(root1, tmp);
	 }
	 Node *root2 = NULL;
	 cin>>n2;
	 for(int i=0; i<n2; i++)
	 {
	     cin>>tmp;
	     root2 = insert(root2, tmp);
	 }
	 printCommon(root1, root2);
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Node structure
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
/* Function should print common elements in given two trees */
void fillV(Node *root, vector<int> &v){
    if(!root){
        return;
    }
    v.push_back(root->data);
    fillV(root->left, v);
    fillV(root->right, v);
}
void printCommon(Node *root1, Node *root2){
     //Your code here
    vector<int>v1;
    fillV(root1,v1);
    vector<int>v2;
    fillV(root2,v2);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(auto it:v1){
        if(binary_search(v2.begin(),v2.end(),it)){
            cout<<it<<" ";
        }
    }
    cout<<"\n";
}
