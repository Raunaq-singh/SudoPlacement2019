#include<iostream>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
};
Node *newNode(int item)
{
    Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void kthLargest(Node *root, int k);
Node* insert(Node* node, int key)
{
    if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		Node *root = NULL;
		int n;
		cin>>n;
		int a;
		cin>>a;
		root = insert(root, a);
		for(int i=0;i<n-1;i++)
		{
			cin>>a;
			insert(root,a);
		}
		int k;
		cin>>k;
		kthLargest(root, k);
	}
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*The Node structure is defined as
struct Node
{
    int key;
    Node *left, *right;
}; */
/*Complete the function below*/
void kLarge(Node *root, int k, int *c){
    if(!root || (*c)>=k){
        return;
    }
    kLarge(root->right,k,c);
    (*c)++;
    if((*c)==k){
        cout<<root->key<<"\n";
    }
    kLarge(root->left,k,c);
}
void kthLargest(Node *root, int k)
{
    //Your code here
    int c=0;
    kLarge(root, k, &c);
}