#include<bits/stdc++.h>
using namespace std;
// A binary Tree node
struct node
{
    int data;
    struct node *left, *right;
};
int counter=0;
int target=0;
struct node *ptr=NULL;
void printkdistanceNodeDown(node *root, int k);
int printkdistanceNode(node* root, node* target , int k);
// A utility function to create a new binary tree node
node *newnode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 void insert(struct node *root,int n1,int n2,char lr)
 {
     if(root==NULL)
        return;
     if(root->data==n1)
     {
         switch(lr)
         {
          case 'L': root->left=newnode(n2);
                    break;
          case 'R': root->right=newnode(n2);
                    break;
         }
     }
     else
     {
         insert(root->left,n1,n2,lr);
         insert(root->right,n1,n2,lr);
     }
 }
 void Inorder(struct node* root)
{
    if(counter==0)
    {
        cin>>target;
        counter++;
    }
    if(root==NULL)
        return ;
    Inorder(root->left);
    if(root->data==target)
         ptr=root;
    Inorder(root->right);
}
// Driver program to test above functions
int main()
{
    /* Let us construct the tree shown in above diagram */
    int t,k;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    struct node *root=NULL;
    while(n--)
    {
        char lr;
        int n1,n2;
        cin>>n1>>n2;
        cin>>lr;
        if(root==NULL)
        {
            root=newnode(n1);
            switch(lr){
                    case 'L': root->left=newnode(n2);
                    break;
                    case 'R': root->right=newnode(n2);
                    break;
                    }
        }
        else
        {
            insert(root,n1,n2,lr);
        }
    }
    Inorder(root);
    node * target =ptr;
    cin>>k;
    printkdistanceNode(root, target, k);
    cout<<endl;
    counter=0;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* A binary Tree node
struct node
{
    int data;
    struct node *left, *right;
}; */
/* Recursive function to print all the nodes at distance k in the
   tree (or subtree) rooted with given root. See  */
void printkdistanceNodeDown(node *root, int k){
// Your code here
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printkdistanceNodeDown(root->left,k-1);
    printkdistanceNodeDown(root->right,k-1);
}
/* Prints all nodes at distance k from a given target node.
 The k distant nodes may be upward or downward.  This function
 Returns distance of root from target node, it returns -1 if target
 node is not present in tree rooted with root. */
int printkdistanceNode(node* root, node* target , int k){
// Your code here
    if(!root){
        return -1;
    }
    if(root==target){
        printkdistanceNodeDown(root,k);
        return 0;
    }
    int distL=printkdistanceNode(root->left,target,k);
    if(distL!=-1){
        if((distL+1)==k){
            cout<<root->data<<" ";
        }else{
            printkdistanceNodeDown(root->right, k-distL-2);   
        }
        return distL+1;
    }
    int distR=printkdistanceNode(root->right,target,k);
    if(distR!=-1){
        if((distR+1)==k){
            cout<<root->data<<" ";
        }else{
            printkdistanceNodeDown(root->left, k-distR-2);
        }
        return distR+1;
    }
}