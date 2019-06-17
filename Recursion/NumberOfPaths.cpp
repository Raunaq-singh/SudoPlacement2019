#include<bits/stdc++.h>
using namespace std;
long ans(int i, int j, int n, int m){
    if(i==n-1 && j==m-1){
        return 1;
    }
    if(i<0 || i==n || j<0 || j==m){
        return 0;
    }
    return (ans(i+1,j,n,m)+ans(i,j+1,n,m));
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<ans(0,0,n,m)<<"\n";
	}
	return 0;
}