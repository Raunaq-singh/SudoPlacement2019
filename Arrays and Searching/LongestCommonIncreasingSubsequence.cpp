#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
ll dp[51][51][102];
ll LCIS(ll pre, ll i, ll j, ll a[], ll b[]){
    //cout<<"PRE "<<pre<<"\n";
    //cout<<"I "<<i<<" J "<<j<<"\n";
    if(i==-1 || j==-1){
        return 0;
    }
    if(dp[i][j][pre]!=-1){
        return dp[i][j][pre];
    }
    
    ll ret=max(LCIS(pre,i-1,j,a,b),LCIS(pre,i,j-1,a,b));    
    
    if((a[i]==b[j]) && a[i]<pre){
        return dp[i][j][pre]=max(1+LCIS(a[i],i-1,j-1,a,b),ret);
    }else{
        return dp[i][j][pre]=ret;
    }
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
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll m;
	    cin>>m;
	    ll b[m];
	    for(ll i=0;i<m;i++){
	        cin>>b[i];
	    }
	    memset(dp,-1,sizeof(dp));
	    cout<<LCIS(101,n-1,m-1,a,b)<<"\n";
	}
	return 0;
}