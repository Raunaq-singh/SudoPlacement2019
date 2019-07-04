#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
Node * deleteNode(Node *, int);
void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
Node* search(Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
       return root;
    
    // Key is greater than root's key
    if (root->data < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val >= (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
int getCountOfNode(Node *root, int l, int h)
{
    if (!root) return 0;
    if (root->data == h && root->data == l)
        return 1;
    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) + getCountOfNode(root->right, l, h);
    else if (root->data < l)
         return getCountOfNode(root->right, l, h);
    else return getCountOfNode(root->left, l, h);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        
        int s;
        cin>>s;
        
    Node *R= deleteNode(root,s);
    	inorder(R);
      cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/
/*The node structure
struct Node {
int data;
Node * right, * left;
};*/
/*The function should return the root of the modified tree*/
Node *inorderSuc(Node *root){
    if(!root->left){
        return root;
    }else{
        return inorderSuc(root->left);
    }
}

Node *deletenode(Node *root,  int x){
    // your code goes here
    if(!root){
        return NULL;
    }
    if(root->data>x){
        root->left=deletenode(root->left, x);
        return root;
    }else if(root->data<x){
        root->right=deletenode(root->right, x);
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
        root->right=deletenode(root->right, inO->data);
        //cout<<"ROOTR "<<root->right->data<<"\n";
        return root;
    }
}

Node* deleteNode(Node* root, int key){
    //Your code here
    if(!root){
        return NULL;
    }
    if(root->data<key){
        root->right=deleteNode(root->right, key);
        return root;
    }else if(root->data>=key){
        root->right=NULL;
        root->left=deleteNode(root->left,key);
        return deletenode(root, root->data);
    }
}
