#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    ll dp[n+1][m+1];
	    memset(dp,0,sizeof(dp));
	    for(ll i=1;i<=n;i++){
	        for(ll j=1;j<=m;j++){
	            if(a[i-1]==b[j-1]){
	                dp[i][j]=1+dp[i-1][j-1];
	            }else{
	                dp[i][j]=0;
	            }
	        }
	    }
	    ll mx=-1;
	    for(ll i=1;i<=n;i++){
	        for(ll j=1;j<=m;j++){
	            mx=max(dp[i][j],mx);
	        }
	    }
	    cout<<mx<<"\n";
	}
	return 0;
}