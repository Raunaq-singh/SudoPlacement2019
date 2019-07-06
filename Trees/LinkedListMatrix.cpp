#include <bits/stdc++.h>
#define MAX 20
using namespace std;
struct Node
{
	int data;
	Node* right, *down;
};
void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		//cout << "";
		Dp = Dp->down;
	}
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n);
// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"
";
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*structure of the node of the linked list is as
struct Node
{
	int data;
	Node* right, *down;
};*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    Node * head[n];
    for(int i=0;i<n;i++)
        head[i]=NULL;
    Node * tail[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            Node *n = new Node;
            n->data=mat[i][j];
            n->right=NULL;
            n->down=NULL;
            if(head[i]==NULL)
            {
                head[i]=n;
                tail[i]=n;
            }
            else
            {
                tail[i]->right=n;
                tail[i]=n;
            }
        }
    }
    
    Node * temp[n];
    for(int i=0;i<n;i++)
        temp[i]=head[i];
    while(temp[0])
    {
        for(int i=0;i<n-1;i++)
        {
            temp[i]->down=temp[i+1];
        }
        for(int i=0;i<n;i++)
            temp[i]=temp[i]->right;
    }
    return head[0];
}