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
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }
    if(val < (*tree)->data)
    { insert(&(*tree)->left, val);}
    else if(val > (*tree)->data)
    { insert(&(*tree)->right, val);}
}
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * deleteNode(Node *root,  int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);}
        int r;
        cin>>r;
        root = deleteNode(root,r);
        inorder(root);
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST Node is as follows:
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
Node *inorderSuc(Node *root){
    if(!root->left){
        return root;
    }else{
        return inorderSuc(root->left);
    }
}

Node *deleteNode(Node *root,  int x){
    // your code goes here
    if(!root){
        return NULL;
    }
    if(root->data>x){
        root->left=deleteNode(root->left, x);
        return root;
    }else if(root->data<x){
        root->right=deleteNode(root->right, x);
        return root;
    }else{
        Node *ret=NULL;
        if(!root->left){
            ret=root->right;
            free(root);
            return ret;
        }else if(!root->right){
            ret=root->left;
            free(root);
            return ret;
        }
        Node *inO=inorderSuc(root->right);
        //cout<<"INO "<<inO->data<<"\n";
        root->data=inO->data;
        root->right=deleteNode(root->right, inO->data);
        //cout<<"ROOTR "<<root->right->data<<"\n";
        return root;
    }
}
