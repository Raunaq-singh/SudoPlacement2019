#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left, *right, *parent;
};
Node* newNode(int item, Node* parent)
{
	Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	temp->parent = parent;
	return temp;
}
Node* keyNode;
void getNode(Node* root, int key)
{
    if(root==NULL)return;
    getNode(root->left, key);
    // cout<<root->data<<' ';
    if(root->data==key)keyNode = root;
    getNode(root->right, key);
}
Node* findRightSibling(Node* node);
int main()
{
  int t;
  struct Node *child;
  cin>>t;
  while (t--)
  {
     map<int, Node*> m;
     int n;
     cin>>n;
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1, NULL);
           m[n1] = parent;
           if(root == NULL)root = parent;
        }
        else parent = m[n1];
        child = newNode(n2, parent);
        if (lr == 'L')parent->left = child;
        else parent->right = child;
        m[n2]  = child;
     }
     int key;
     cin>>key;
     getNode(root, key);
     Node* res = findRightSibling(keyNode);
     if(res==NULL)cout<<-1<<endl;
     else cout<<res->data<<endl;
  }
  return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node* left, *right, *parent;
};
*/
// function should return return the node of the 
// right sibling to the provided node
Node *find(Node *root, int d, Node *chk){
    if(!root){
        return NULL;
    }
    if(d==1 && root!=chk){
        return root;
    }
    Node *temp=find(root->left,d-1,chk);
    if(!temp){
        temp=find(root->right,d-1,chk);
    }
    return temp;
}
Node* findRightSibling(Node* node){
    // Code here
    Node *temp=node;
    int d=1;
    Node *tempans=new Node();
//    temp=temp->parent;
    while(temp->parent){
        tempans=find(temp->parent->right,d,temp);
        if(tempans){
            return tempans;
        }else{
            d++;
            temp=temp->parent;
        }
    }
    return NULL;
}