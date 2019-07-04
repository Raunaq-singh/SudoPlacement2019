#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
/*
int search(int a[], int x, int n){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
*/
void printPostOrder(int in[], int pre[], int n){
//Your code here
    if(n==0){
        return;
    }
    int root=(lower_bound(in,in+n,pre[0])-in);
    //cout<<"ROOT "<<root<<"\n";
    if(root==-1){
        return;
    }
    if(root!=0){
        printPostOrder(in,pre+1,root);
    }
    if(root!=(n-1)){
        printPostOrder(in+root+1,pre+root+1,n-root-1);
    }
    cout<<pre[0]<<" ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int pre[n];
	    int in[n];
	    for(int i=0;i<n;i++){
	        cin>>pre[i];
	        in[i]=pre[i];
	    }
	    sort(in,in+n);
	    printPostOrder(in,pre,n);
	    cout<<"\n";
	}
	return 0;
}