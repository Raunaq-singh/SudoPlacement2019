#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
bool dp[31][1025];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    memset(dp,false,sizeof(dp));
	    for(ll i=0;i<=n;i++){
	        dp[i][0]=true;
	    }
	    for(ll i=1;i<=n;i++){
	        for(ll j=0;j<1024;j++){
	            dp[i][j] = dp[i-1][j]|dp[i-1][j^a[i-1]];
	        }
	    }
	    ll mx=-1;
	    for(ll i=1;i<1024;i++){
	        if(dp[n][i]){
	            mx=max(mx,i);
	        }
	    }
	    cout<<mx<<"\n";
	}
	return 0;
}