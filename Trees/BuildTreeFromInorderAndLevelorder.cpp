#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    struct Node* left, *right;
};
Node* newNode(int key)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->key = key;
    node->left = node->right = NULL;
    return (node);
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n);
void printPreorder(Node* node)
{
    if (node == NULL)
       return;
    cout << node->key << " ";
    printPreorder(node->left);
    printPreorder(node->right);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int in[n],level[n];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>level[i];
    }
    Node *root=NULL;
    root = buildTree(in, level, 0, n - 1,n);
    printPreorder(root);
    cout<<endl;
    }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node
{
    int key;
    struct Node* left, *right;
};
*/
void init(Node *a, int data){
    a->key=data;
    a->left=NULL;
    a->right=NULL;
}
int search(int a[], int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n){
//add code here.
    if(iStart>iEnd){
        return NULL;
    }
    Node *root = new Node();
    init(root,levelOrder[0]);
    if(iStart==iEnd){
        return root;
    }
    int rootI;
    for(int i=iStart;i<=iEnd;i++){
        if(inorder[i]==levelOrder[0]){
            rootI=i;
            break;
        }
    }
    set<int>chk;
    for(int i=iStart;i<rootI;i++){
        chk.insert(inorder[i]);
    }
    int levelL[n];
    int levelR[n];
    int li=0,ri=0;
    for(int i=1;i<n;i++){
        if(chk.find(levelOrder[i])!=chk.end()){
            levelL[li++]=levelOrder[i];
        }else{
            levelR[ri++]=levelOrder[i];
        }
    }
    root->left=buildTree(inorder, levelL, iStart, rootI-1, li);
    root->right=buildTree(inorder, levelR, rootI+1, iEnd, ri);
    return root;
}