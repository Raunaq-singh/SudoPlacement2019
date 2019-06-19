#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll ans(ll pre, ll n, ll m, ll **dp){
    //cout<<"PRE "<<pre<<"\n";
    if(n==1){
        return dp[pre][n]=1;
    }
    if(dp[pre][n]!=-1){
        return dp[pre][n];
    }
    ll ret=0;
    for(ll i=2*pre;i<=m;i++){
        //cout<<"HELLO "<<i<<"\n";
        ret+=ans(i,n-1,m,dp);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>m>>n;
	    ll ansf=0;
	    ll **dp = new ll*[m+1];
	    for(ll i=0;i<=m;i++){
	        dp[i]=new ll[n+1];
	    }
	    for(ll i=0;i<=m;i++){
	        for(ll j=0;j<=n;j++){
	            dp[i][j]=-1;
	        }
	    }
	    for(ll i=1;i<=m;i++){
	        ansf+=ans(i,n,m,dp);
	    }
	    cout<<ansf<<"\n";
	}
	return 0;
}