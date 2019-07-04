#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int key;
	struct node *left, *right;
};
struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}
struct node* insert(struct node* node, int key)
{
	if (node == NULL) return newNode(key);
	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);
	return node;
}
// Function to change a key value in Binary Search Tree
struct node *changeKey(struct node *root, int oldVal, int newVal);
// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct node *root = NULL;
        int n, temp, oldKey, new_key;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        cin>>oldKey;
        cin>>new_key;
        root = changeKey(root, oldKey, new_key);
        inorder(root);
        printf("
");
    }
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the binary Search Tree is as
struct node
{
	int key;
	struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST
node *inorderSuc(node *root){
    if(!root->left){
        return root;
    }else{
        return inorderSuc(root->left);
    }
}

node *deleteNode(node *root,  int x){
    // your code goes here
    if(!root){
        return NULL;
    }
    if(root->key>x){
        root->left=deleteNode(root->left, x);
        return root;
    }else if(root->key<x){
        root->right=deleteNode(root->right, x);
        return root;
    }else{
        node *ret=NULL;
        if(!root->left){
            ret=root->right;
            free(root);
            return ret;
        }else if(!root->right){
            ret=root->left;
            free(root);
            return ret;
        }
        node *inO=inorderSuc(root->right);
        //cout<<"INO "<<inO->data<<"\n";
        root->key=inO->key;
        root->right=deleteNode(root->right, inO->key);
        //cout<<"ROOTR "<<root->right->data<<"\n";
        return root;
    }
}

node* insertKey(node* root, int data){
    // Your code here
    if(!root){
        node *ret=new node();
        ret->key=data;
        ret->right=NULL;
        ret->left=NULL;
        return ret;
    }
    if(root->key>=data){
        root->left=insertKey(root->left,data);
    }else if(root->key<data){
        root->right=insertKey(root->right,data);
    }
    return root;
}

struct node *changeKey(struct node *root, int oldVal, int newVal){
	// Code here
    root=deleteNode(root, oldVal);
    return root=insertKey(root, newVal);
}