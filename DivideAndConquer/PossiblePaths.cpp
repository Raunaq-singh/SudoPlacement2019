#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll dfs(ll u, ll v, ll k, ll **dp, ll **adj, ll n){
    //cout<<"U "<<u<<" V "<<v<<" k "<<k<<"\n";
    if(u==v && k==0){
        //cout<<"HELLO "<<"\n";
        return dp[u][k]=1;
    }
    if(k==0){
        return dp[u][k]=0;
    }
    if(dp[u][k]!=-1){
        return dp[u][k];
    }
    ll ret=0;
    for(ll i=0;i<n;i++){
        if(adj[u][i]){
            ret+=dfs(i,v,k-1,dp,adj,n);
        }
    }
    return dp[u][k]=ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll **adj = new ll*[n];
	    for(ll i=0;i<n;i++){
	        adj[i]= new ll[n];
	    }
	    for(ll i=0;i<n;i++){
	        for(ll j=0;j<n;j++){
	            cin>>adj[i][j];
	        }
	    }
	    ll u,v,k;
	    ll ans=0;
	    cin>>u>>v>>k;
	    ll **dp = new ll*[n];
	    for(ll i=0;i<n;i++){
	        dp[i] = new ll [k+1];
	    }
	    for(ll i=0;i<n;i++){
	        for(ll j=0;j<=k;j++){
	            dp[i][j]=-1;
	        }
	    }
	    ans = dfs(u,v,k,dp,adj,n);
	    cout<<ans<<"\n";
	}
	return 0;
}