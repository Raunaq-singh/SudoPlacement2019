#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
};
Node *constructTree (int [], int );
void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	
}
int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);
    Node* root = constructTree(post, n);
	printInorder(root);
    printf("
");
}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*struct Node
{
	int data;
	Node *left, *right;
};*/
void init(Node *temp, int d){
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;
}
Node *construct(int post[], int in[], int n, int s, int e){
    if(s>e){
        return NULL;
    }
    Node *ret=new Node();
    init(ret,post[0]);
    if(s==e){
        return ret;
    }
    int rootI=lower_bound(in+s,in+e+1,post[0])-(in);
    //cout<<"S E "<<s<<" "<<e<<"\n";
    //cout<<"ROOT I "<<rootI<<" "<<post[0]<<"\n";
    ret->left=construct(post+e-rootI+1,in,n,s,rootI-1);
    ret->right=construct(post+1,in,n,rootI+1,e);
    return ret;    
}
Node *constructTree (int post[], int size){
//code here
    int in[size];
    for(int i=0;i<size;i++){
        in[i]=post[i];
    }
    reverse(post,post+size);
    sort(in,in+size);
    return construct(post, in, size, 0, size-1);
}