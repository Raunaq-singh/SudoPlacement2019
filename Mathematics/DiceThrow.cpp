#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll dp[51][51];
ll ways(ll n, ll m, ll x){
    if(n==0 && x==0){
        return 1;
    }
    if(x<=0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    if(dp[n][x]!=-1){
        return dp[n][x];
    }
    return dp[n][x] = ways(n-1,m,x-1)+ways(n,m,x-1)-ways(n-1,m,x-m-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll m,n,x;
	    cin>>m>>n>>x;
	    memset(dp,-1,sizeof(dp));
	    cout<<ways(n,m,x)<<"\n";
	}
	return 0;
}