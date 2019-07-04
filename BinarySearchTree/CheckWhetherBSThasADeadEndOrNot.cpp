#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
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
    else if(val > (*tree)->data)
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
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);
    else if (root->data < l)
         return getCountOfNode(root->right, l, h);
    else return getCountOfNode(root->left, l, h);
}
bool isDeadEnd(Node *root);
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
        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/
/*You are required to complete below method */
void fillM(Node *root, map<int,bool>&m){
    if(!root){
        return;
    }
    m[root->data]=true;
    fillM(root->left,m);
    fillM(root->right,m);
}
bool checkD(Node *root, map<int,bool>m){
    if(!root){
        return false;
    }
    if(!root->left && !root->right){
        return m[root->data-1]&&m[root->data+1];
    }else{
        return checkD(root->left,m)||checkD(root->right,m);
    }
}
bool isDeadEnd(Node *root){
    //Your code here
    map<int,bool>m;
    fillM(root,m);
    m[0]=true;
    return checkD(root,m);
}