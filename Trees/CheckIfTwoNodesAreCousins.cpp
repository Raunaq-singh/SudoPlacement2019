#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
  ll data;
  Node *left,*right;
};
Node *newNode(ll item)
{
    Node *temp =new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void insert(Node *root,ll a1,ll a2,char lr){
    if(root==NULL)
        return;
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
bool ifCousin(Node *root,Node *a,Node *b);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        Node *root=NULL;
        while(n--){
            ll a1,a2;
            char lr;
            cin>>a1>>a2;
            cin>>lr;
            if(root==NULL){
                root=newNode(a1);
                switch(lr){
                    case 'L':root->left=newNode(a2);
                    break;
                    case 'R':root->right=newNode(a2);
                    break;
                }
            }
            else{
                insert(root,a1,a2,lr);
            }
        }
        //inorder(root);
        //cout<<endl;
        ll x,y;
        cin>>x>>y;
        Node *a=newNode(x);
        Node *b=newNode(y);
        if(a->data==b->data){
            cout<<"0
";
            continue;
        }
        ifCousin(root,a,b)?cout<<"1
":cout<<"0
";
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node{
  ll data;
  Node *left,*right;
};
*/
bool ifCousin(Node *root,Node *a,Node *b){
   //add code here. 
   queue<pair<pair<Node*,Node*>,int>>q;
   Node *temp=NULL;
   q.push(make_pair(make_pair(temp,root),0));
   pair<Node*,Node*>tempN;
   int tempL;
   pair<pair<Node*,Node*>,int>stA,stB;
   while(!q.empty()){
       tempN=q.front().first;
       tempL=q.front().second;
       q.pop();
       if(!tempN.second){
           continue;
       }
       if(tempN.second->data==a->data){
           stA=make_pair(tempN,tempL);
       }
       if(tempN.second->data==b->data){
           stB=make_pair(tempN,tempL);
       }
       q.push(make_pair(make_pair(tempN.second,tempN.second->left),tempL+1));
       q.push(make_pair(make_pair(tempN.second,tempN.second->right),tempL+1));
   }
   //cout<<"STA "<<stA.first.first->data<<" STB "<<stB.first.first->data<<"\n";
   return (stA.second==stB.second && (stA.first.first!=stB.first.first));
}