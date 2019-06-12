#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    queue<int> q;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int mx=-1;
	    for(int i=0;i<k;i++){
	        mx=max(mx,a[i]);
	        q.push(a[i]);
	    }
	    cout<<mx<<" ";
	    for(int i=k;i<n;i++){
	        int temp=q.front();
	        q.pop();
	        q.push(a[i]);
	        mx=max(mx,a[i]);
	        if(temp==mx){
	            mx=-1;
	            for(int j=i-k+1;j<=i;j++)
	            mx=max(mx,a[j]);
	        }
	        cout<<mx<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}