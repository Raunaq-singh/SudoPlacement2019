#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
};
Node *newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    return (temp);
}
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=newNode(a2);
			break;
			case 'R':root->right=newNode(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void diagonalSumUtil(Node* root, int vd, map<int, int> &diagonalSum)
{
     if(!root)
           return;
     diagonalSum[vd] += root->data;
     diagonalSumUtil(root->left, vd + 1, diagonalSum);
     diagonalSumUtil(root->right, vd, diagonalSum);
}
void diagonalSum(Node *root);
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int m=n;
		Node *root1=NULL;
		while(n-->0){
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=newNode(a1);
				switch(lr){
					case 'L':root1->left=newNode(a2);
					break;
					case 'R':root1->right=newNode(a2);
					break;
				}
			}
			else{
				insert(root1,a1,a2,lr);
			}
		}
		diagonalSum(root1);
	}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
map<int,vector<int>>m;
void findDiag(Node *root, int x, int y){
    if(!root){
        return;
    }
    m[y-x].push_back(root->data);
    findDiag(root->left, x-1, y+1);
    findDiag(root->right, x+1, y+1);
}
void diagonalSum(Node* root){
 // Add your code here
 findDiag(root,0,0);
 int temp=0;
 for(auto it:m){
     temp=0;
     for(auto it2:it.second){
         temp+=it2;
     }
     cout<<temp<<" ";
 }
 cout<<"\n";
 m.clear();
}