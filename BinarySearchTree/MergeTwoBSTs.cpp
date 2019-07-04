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
void merge(Node *root1,Node *root2);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root1;Node *root2;
        Node *tmp;
        root1 = NULL;
        root2=NULL;
        int N;
        cin>>N;
        int M;
        cin>>M;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root1, k);}
        for(int i=0;i<M;i++)
        {
            int k;
            cin>>k;
            insert(&root2, k);} 
       merge(root1,root2);
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of Node is
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};*/
/*You are required to complete below method */
void inorder(Node *root, multiset<int>&ans){
    if(!root){
        return;
    }
    inorder(root->left,ans);
    ans.insert(root->data);
    inorder(root->right,ans);
}
void merge(Node *root1, Node *root2){
   //Your code here
   multiset<int>ans;
   inorder(root1,ans);
   inorder(root2,ans);
   for(auto it:ans){
       cout<<it<<" ";
   }
   //cout<<"\n";
}